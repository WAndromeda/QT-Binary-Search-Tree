#include "mainwindow.h"
#include "ui_mainwindow.h"

MainWindow::MainWindow(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::MainWindow){
        ui->setupUi(this);
        start_of_programm();
    }

MainWindow::~MainWindow(){
    delete ui;
}

void MainWindow::start_of_programm(){
    lineSet = false;
    settingIcons();
    ui->tableSet->setShowGrid(true);
    ui->tableSet->horizontalHeader()->setVisible(true);
    ui->tableSet->setColumnCount(columnsMainCount);
    ui->tableSet->setColumnWidth(0, 20);
    ui->tableOperations->setRowCount(3);
    ui->tableOperations->horizontalHeader()->setVisible(true);
    int size = ui->tableOperations->height()- 65;
    for (int i = 0; i < 3; i++)
        ui->tableOperations->setRowHeight(i, size/3);
    clearTableOperations();
    QString font, qstring = "";
    loadSettings(font, size);
    QFont qfont(font, size);
    ui->tableSet->setFont(QFont(qfont));
    ui->tableOperations->setFont(QFont(qfont));
    ui->fontComboBox->setCurrentFont(qfont);
    ui->spinBoxSizeFont->setValue(size);
    for (int i = 0; i < ui->pushButtonSaveSettings->text().size()-1; i++)
        qstring += ui->pushButtonSaveSettings->text()[i];
    ui->pushButtonSaveSettings->setText(qstring);
    addHeadersTableSet();
    addHeadersTableOperations();
    on_pushButton_2_clicked();
}

void MainWindow::settingIcons(){
    this->setWindowIcon(QIcon("images\\setMain.png"));
    ui->pushButton_2->setIcon(QIcon("images\\refreshTable.png"));
    ui->pushButtonLinesSetChange->setIcon(QIcon("images\\changeLines.png"));
    ui->pushButtonCheckElement->setIcon(QIcon("images\\checkElement.png"));
    ui->pushButtonAddElement->setIcon(QIcon("images\\add.png"));
    ui->pushButtonAboutProgramm->setIcon(QIcon("images\\aboutProgramm.png"));
}

void MainWindow::on_pushButton_2_clicked(){
    QVector<QQueue<QString>> vectorQueueSets;
    QQueue<int> queueOfTypes; QString statusString = "Текущая форма вывода множеств: ";
    int outPutForm;
    if (ui->radioInFix->isChecked()){
        outPutForm = 0;
        statusString += ui->radioInFix->text();
    }
    else
        if(ui->radioPreFix->isChecked()){
            outPutForm = 1;
            statusString += ui->radioPreFix->text();
        }
        else{
            outPutForm = 2;
            statusString += ui->radioPostFix->text();
        }
    if (readFile<QString>(&vectorQueueSets, outPutForm, &queueOfTypes)){
        if (vectorQueueSets.size() == 0){
            ui->statusBar->showMessage("Таблица пуста. Не было добавлено ни одного множества");
            return;
        }
        ui->statusBar->showMessage(statusString);
        ui->centralWidget->setCursor(Qt::WaitCursor);
        ui->pushButton_2->setCursor(Qt::WaitCursor);
        QTableWidgetItem* item;
        ui->tableSet->setRowCount(vectorQueueSets.size());
        ui->tableSet->setColumnCount(maxOfQueue(vectorQueueSets) + columnsMainCount);
        addHeadersTableSet();

        for (int i = 0; i < ui->tableSet->rowCount(); i++){
            item = new QTableWidgetItem(QString::number(i+1));
            ui->tableSet->setItem(i, 0, item);
            item = new QTableWidgetItem(QString::number(vectorQueueSets[i].size()));
            ui->tableSet->setItem(i, 1, item);
            item = new QTableWidgetItem(nameOfType(queueOfTypes.dequeue()));
            ui->tableSet->setItem(i, 2, item);            
            for(outPutForm = columnsMainCount; vectorQueueSets[i].size(); outPutForm++){
                item = new QTableWidgetItem(vectorQueueSets[i].dequeue());
                ui->tableSet->setItem(i, outPutForm, item);
            }
        }
        ui->tableSet->resizeColumnsToContents();
        ui->tableSet->resizeRowsToContents();
        ui->centralWidget->setCursor(Qt::ArrowCursor);
        ui->pushButton_2->setCursor(Qt::PointingHandCursor);
    }
    else
        QMessageBox::about(this, "Файл не найден","Если это ваш первый запуск программы, просто закройте это сообщение"
                                                  "\nЕсли же вы запускали программу ранее, то все данные утеряны");
}

void MainWindow::on_pushButtonNextPage_clicked(){ui->stackedWidget->setCurrentIndex((ui->stackedWidget->currentIndex()+1)%ui->stackedWidget->count());}

void MainWindow::on_pushButtonPreviousPage_clicked(){
    int index = ui->stackedWidget->currentIndex()-1;
    if (index < 0)
        index = ui->stackedWidget->count()-1;
    ui->stackedWidget->setCurrentIndex(index);
}

void MainWindow::on_fontComboBox_currentFontChanged(const QFont &f){
    if (!ui->pushButtonSaveSettings->text().endsWith('*'))
        ui->pushButtonSaveSettings->setText( ui->pushButtonSaveSettings->text()+QString("*"));
    QFont font = f;
    font.setPointSize(ui->spinBoxSizeFont->value());
    ui->tableSet->setFont(font);
    ui->tableOperations->setFont(font);
    ui->tableSet->resizeColumnsToContents();
    ui->tableSet->resizeRowsToContents();
    ui->tableOperations->resizeColumnsToContents();
}

void MainWindow::on_pushButtonNextPage_2_clicked(){on_pushButtonNextPage_clicked();}
void MainWindow::on_pushButtonPreviousPage_2_clicked(){on_pushButtonPreviousPage_clicked();}
void MainWindow::on_pushButtonNextPage_5_clicked(){on_pushButtonNextPage_clicked();}
void MainWindow::on_pushButtonPreviousPage_5_clicked(){on_pushButtonPreviousPage_clicked();}
void MainWindow::on_pushButtonNextPage_6_clicked(){on_pushButtonNextPage_clicked();}
void MainWindow::on_pushButtonPreviousPage_6_clicked(){on_pushButtonPreviousPage_clicked();}
void MainWindow::on_pushButtonNextPage_7_clicked(){on_pushButtonNextPage_clicked();}
void MainWindow::on_pushButtonPreviousPage_7_clicked(){on_pushButtonPreviousPage_clicked();}

void MainWindow::on_pushButtonAddSet_clicked(){
    if (ui->tableSet->rowCount() != 2147483647){
        int type;
        QQueue<QString> emptyQueue;
        if (ui->radioInt->isChecked()) type = 0; else if(ui->radioDouble->isChecked()) type = 1; else type = 2;
        if (!writeNewSetInFile<QString>(emptyQueue, type)){
            QMessageBox::critical(this, "Ошибка. Файл повреждён", "Файл с множествами был повреждён, все множества"
                                                              " были удалены\nТаблица Множеств и Таблица Операций очищены");
            ui->tableSet->setRowCount(0);
            clearTableSet();
            clearTableOperations();
        }
        on_pushButton_2_clicked();
    }
    else
        QMessageBox::warning(this, "Достигнуто максимальное количество множеств", "Добавлено максимальное количество множеств, равное 2 147 483 647\nЧтобы добавить новое множество, сначала удалите старые");
}

void MainWindow::on_pushButtonSaveSettings_clicked(){
    if (ui->pushButtonSaveSettings->text().endsWith('*')){
        if (saveSettings(QString(ui->fontComboBox->currentFont().family()) , ui->spinBoxSizeFont->value())){
            QString qstring = "";
            for (int i = 0; i < ui->pushButtonSaveSettings->text().size()-1; i++)
                qstring += ui->pushButtonSaveSettings->text()[i];
            ui->pushButtonSaveSettings->setText(qstring);
        }
        else
            QMessageBox::critical(this, "Ошибка сохранения", "Произошла ошибка сохранения"
                                                             "\nПовторите попытку сохранить настройки");
    }
}

void MainWindow::on_spinBoxSizeFont_valueChanged(int arg1){
    if (!ui->pushButtonSaveSettings->text().endsWith('*'))
        ui->pushButtonSaveSettings->setText( ui->pushButtonSaveSettings->text()+QString("*"));
    QFont font = ui->fontComboBox->currentFont();
    font.setPointSize(arg1);
    ui->tableSet->setFont(font);
    ui->tableOperations->setFont(font);
    ui->tableSet->resizeColumnsToContents();
    ui->tableSet->resizeRowsToContents();
    ui->tableOperations->resizeColumnsToContents();
}

bool MainWindow::checkLinesOperations(){
    bool flag = true;
    QString str[2] = {ui->LineSet1->text(), ui->LineSet2->text()};
    if (checkDelSetAddDelElem(str[0]) && checkDelSetAddDelElem(str[1])){
        int num[2] = {QVariant(str[0]).toInt(), QVariant(str[1]).toInt()};
        if (num[0] == num[1]){
            QMessageBox::warning(this, "Предупреждение", "В полях ввода один и тот же номер множества\nВведите разные номера множеств одного типа в поля ввода");
            flag = false;}
        else{
            QString types[2] = {ui->tableSet->item(num[0]-1, 2)->text(), ui->tableSet->item(num[1]-1, 2)->text()};
            if (types[0] != types[1]){
                QMessageBox::warning(this, "Предупреждение", "Типы множеств различаются\nМножество 1 (№" + str[0] + "): " + types[0] +
                        "\nМножество 2 (№" + str[1] + "): " + types[1] +
                        "\nОперации могут производиться только над множествами одного типа");
                flag = false;}
        }
    }
    else flag = false;
    return flag;
}

void MainWindow::clearTableSet(){
    QTableWidgetItem* item;
    for (int i = 0; i < ui->tableSet->rowCount(); i++)
        for (int l = 0; l < ui->tableSet->columnCount(); l++){
            item = new QTableWidgetItem("");
            ui->tableSet->setItem(i, l, item);
        }
    ui->tableSet->setColumnCount(3);
}

void MainWindow::clearTableOperations(){
    QTableWidgetItem* item;
    for (int i = 0; i < 3; i++)
        for (int l = 0; l < ui->tableOperations->columnCount(); l++){
            item = new QTableWidgetItem("");
            ui->tableOperations->setItem(i, l, item);
        }
    ui->tableOperations->setColumnCount(3);
}

void MainWindow::addHeadersTableSet(){
    QTableWidgetItem* item;
    ui->tableSet->setStyleSheet(
                "QTableWidget {selection-background-color : cadetblue ;}"
                "QHeaderView::section { background-color : salmon }; "
    );
    int t = columnsMainCount-1, amountOfColumns = ui->tableSet->columnCount() + columnsMainCount;
    for (int l = columnsMainCount; l < amountOfColumns; l++){
        item = new QTableWidgetItem(QString::number(l-t));
        ui->tableSet->setHorizontalHeaderItem(l, item);
    }
}

void MainWindow::addHeadersTableOperations(){
    QTableWidgetItem* item;
    ui->tableOperations->setStyleSheet(
                "QHeaderView::section { background-color : coral }; "
    );
    int t = columnsMainCount-1, amountOfColumns = ui->tableOperations->columnCount() + columnsMainCount;
    for (int l = columnsMainCount; l < amountOfColumns; l++){
        item = new QTableWidgetItem(QString::number(l-t));
        ui->tableOperations->setHorizontalHeaderItem(l, item);
    }
}

QQueue<QString> MainWindow::choiceOfOperation(QQueue<QString> (*func) (QQueue<QString>, QQueue<QString>), int a[]){
    QQueue<QString> firstSet, secondSet;
    QQueue<QString> sets[] = {firstSet, secondSet};
    QTableWidgetItem* item; QString str;
    int max; const int numOfSets = 2;
    int amountOfElem[numOfSets] = {QVariant(ui->tableSet->item(a[0], 1)->text()).toInt(),
                          QVariant(ui->tableSet->item(a[1], 1)->text()).toInt()
                          };
    if (amountOfElem[0] > amountOfElem[1])
        max = amountOfElem[0];
    else
        max = amountOfElem[1];
    ui->tableOperations->setColumnCount(max + columnsMainCount);
    addHeadersTableOperations();
    for (int i = 0; i < numOfSets; i++)
        for (int j = 0; j < amountOfElem[i] + columnsMainCount; j++){
            item = new QTableWidgetItem(ui->tableSet->item(a[i], j)->text());
            ui->tableOperations->setItem(i, j, item);
        }
    for (int i = 0; i < numOfSets; i++)
        for (int j = columnsMainCount; j <  amountOfElem[i] + columnsMainCount; j++){
            str =  ui->tableSet->item(a[i], j)->text();
            sets[i].enqueue(str);
        }
    return func(sets[0], sets[1]);
}

bool MainWindow::newSetInTableOperations(QQueue<QString> queue, int row, QString type, int num){
    QTableWidgetItem* item;
    if (queue.size() > ui->tableOperations->columnCount() - columnsMainCount){
        ui->tableOperations->setColumnCount(queue.size() + columnsMainCount);
        addHeadersTableOperations();
    }
    item = new QTableWidgetItem(QString::number(num));
    ui->tableOperations->setItem(row, 0, item);
    item = new QTableWidgetItem(QString::number(queue.size()));
    ui->tableOperations->setItem(row, 1, item);
    item = new QTableWidgetItem(type);
    ui->tableOperations->setItem(row, 2, item);
    ui->tableOperations->resizeColumnsToContents();
    if (!queue.size())
        return false;
    for (int k = columnsMainCount; queue.size(); k++){
        item = new QTableWidgetItem(queue.dequeue());
        ui->tableOperations->setItem(row, k, item);
    }
    ui->tableOperations->resizeColumnsToContents();
    return true;    
}

void MainWindow::on_pushButtonIntersection_clicked(){
    if (checkLinesOperations()){
        clearTableOperations();
        int a[2] = {QVariant(ui->LineSet1->text()).toInt()-1, QVariant(ui->LineSet2->text()).toInt()-1};
        QQueue<QString> thirdSet = choiceOfOperation(intersectionTrees, a);
        if (!newSetInTableOperations(thirdSet, 2, ui->tableSet->item(a[0], 2)->text(), 0))
            QMessageBox::information(this, "Результат \"Пересечения\"", "В результате операции \"Пересечение\" было получено пустое множество\nСмежных элементов у двух множеств нет\nИли одно, или оба множества являются пустыми");
    }
}

void MainWindow::on_pushButtonUnion_clicked(){
    if (checkLinesOperations()){
        bool flag = true;
        clearTableOperations();
        int a[2] = {QVariant(ui->LineSet1->text()).toInt()-1, QVariant(ui->LineSet2->text()).toInt()-1};
        int amount[2] = {ui->tableSet->item(a[0], 1)->text().toInt(), ui->tableSet->item(a[1], 1)->text().toInt()};
        if (amount[0]+amount[1] < 0){
            QQueue<QString> thirdSet = choiceOfOperation(intersectionTrees, a);
            amount[0] -= thirdSet.size();
            if (amount[0]+amount[1] < 0){
                QMessageBox::warning(this, "Превышено максимально количество элементов", "Вы не можете \"Объединение\" для этих 2 множеств"
                                                                                     "\n\"Объединение\" двух множеств даёт слишком большое множество");
                flag = false;
            }
        }
        if (flag){
            QQueue<QString> thirdSet = choiceOfOperation(unionTrees, a);
            if (!newSetInTableOperations(thirdSet, 2, ui->tableSet->item(a[0], 2)->text(), 0))
                QMessageBox::information(this, "Результат \"Объединения\"", "В результате операции \"Объединение\" было получено пустое множество"
                                                                            "\nВероятно, вы ввели номера пустых множеств");
        }
    }
}

void MainWindow::on_pushButtonDifference_clicked(){
    if (checkLinesOperations()){
        clearTableOperations();
        int a[2] = {QVariant(ui->LineSet1->text()).toInt()-1, QVariant(ui->LineSet2->text()).toInt()-1};
        QQueue<QString> thirdSet = choiceOfOperation(differenceTrees, a);
        if (!newSetInTableOperations(thirdSet, 2, ui->tableSet->item(a[0], 2)->text(), 0))
            QMessageBox::information(this, "Результат \"Разности\"", "В результате операции \"Разность\" было получено пустое множество"
                                                                     "\nВероятно, Множество 1 является пустым множеством\nИли все элементы "
                                                                     "Множества 1 входят в Множество 2");
    }
}

void MainWindow::on_pushButtonEqualityOfSets_clicked(){
    if (checkLinesOperations()){
        int a[2] = {QVariant(ui->LineSet1->text()).toInt()-1, QVariant(ui->LineSet2->text()).toInt()-1};
        int amount[2] = {ui->tableSet->item(a[0], 1)->text().toInt(), ui->tableSet->item(a[1], 1)->text().toInt()};
        if (amount[0] != amount[1])
            QMessageBox::information(this, "Результат \"Проверка равенства\"", "Множества не равны"
                                                                     "\nКоличество элементов в множествах различно");
        else{
            QQueue<QString> queueComparison = choiceOfOperation(intersectionTrees, a);
            if (queueComparison.size() != amount[0] || queueComparison.size() != amount[1])
                QMessageBox::information(this, "Результат \"Проверка равенства\"", "Множества не равны"
                                                                         "\nЗначения каких-то элементов множества различаются");
            else
                QMessageBox::information(this, "Результат \"Проверка равенства\"", "Множества №" + ui->LineSet1->text()+
                                         " и №" +   ui->LineSet2->text()+ " РАВНЫ");
        }
    }
}

void MainWindow::on_pushButtonAddSetAfterOperations_clicked(){
    if (ui->tableOperations->item(2,1)->text() != ""){
        if (ui->tableSet->rowCount() != 2147483647){
            int cnt = QVariant(ui->tableOperations->item(2, 1)->text()).toInt()+3;
            if (cnt > ui->tableSet->columnCount()){
                ui->tableSet->setColumnCount(cnt);
                addHeadersTableSet();
            }
            QQueue<QString> setAfterOperation;
            for (int k = columnsMainCount; k < cnt; k++)
                setAfterOperation.enqueue(ui->tableOperations->item(2, k)->text());
            if (!writeNewSetInFile<QString>(setAfterOperation, numOfType(ui->tableOperations->item(2, 2)->text()))){
                QMessageBox::critical(this, "Ошибка. Файл повреждён", "Файл с множествами был повреждён, все множества"
                                                                      " были удалены\nТаблица Множеств и Таблица Операций очищены");
                ui->tableSet->setRowCount(0);
                clearTableSet();
                clearTableOperations();
            }
            on_pushButton_2_clicked();
        }
        else
            QMessageBox::warning(this, "Достигнуто максимальное количество множеств", "Добавлено максимальное количество множеств, равное 2 147 483 647\nЧтобы добавить новое множество, сначала удалите старые");
    }
    else
        QMessageBox::warning(this, "Не было совершено операций", "Вы не совершили операций, после которых было образовано новое множество"
                                                                 "\nВыполните одну из операций 'Пересечение', 'Объединение' или 'Разность', "
                                                                 "чтобы получить новое множество");
}

void MainWindow::on_pushButtonAboutProgramm_clicked(){
    Programm window;
    window.setModal(true);
    window.exec();
}

void MainWindow::on_pushButtonLinesSetChange_clicked(){
    QString str  = ui->LineSet1->text();
    ui->LineSet1->setText(ui->LineSet2->text());
    ui->LineSet2->setText(str);
}

void MainWindow::on_tableSet_cellClicked(int row, int column){
    ui->LineChoiceSetNum->setText(QString::number(row+1));
    ui->LineDeleteSet->setText(QString::number(row+1));
    if (lineSet)
        ui->LineSet1->setText(QString::number(row+1));
    else
        ui->LineSet2->setText(QString::number(row+1));
    lineSet = !lineSet;
    if (column > 2 && QVariant(ui->tableSet->item(row, 1)->text()).toInt()+columnsMainCount-1 >= column)
        ui->LineElemValue->setText(ui->tableSet->item(row, column)->text());
}

void MainWindow::on_pushButtonDelSet_clicked(){
    bool flag= false;
    QString str = ui->LineDeleteSet->text();
    if (checkDelSetAddDelElem(str)){
        int t = QVariant(str).toInt();
        if (ui->tableSet->item(t-1, 1)->text().toInt() == 0)
            flag = true;
        else
            if (QMessageBox::question(this, "Подтверждение" ,
                                      "Вы точно хотите удалить множество №" + QString::number(t) +
                                     "?\nКоличество элементов: " + ui->tableSet->item(t-1, 1)->text() + "\nТип множества: " +
                                      ui->tableSet->item(t-1, 2)->text(), "Да, точно", "Нет, отмените удаление") == 0)
                flag = true;
            if (flag){
                ui->tableSet->removeRow(t-1);
                if (!writeDeleteOneSet<QString>(QVariant(str).toInt())){
                    QMessageBox::critical(this, "Ошибка. Файл повреждён", "Файл с множествами был повреждён, все множества"
                                                                          " были удалены\nТаблица Множеств и Таблица Операций очищены");
                    ui->tableSet->setRowCount(0);
                }
                clearTableSet();
                clearTableOperations();
                on_pushButton_2_clicked();
            }
    }
    ui->LineDeleteSet->setFocus();
}

bool MainWindow::checkDelSetAddDelElem(QString& str){
    QIntValidator intValidator(1, INT_MAX);
    bool flag = true;
    int pos = 0;
    str = str.trimmed();
    if (ui->tableSet->rowCount() == 0){
        QMessageBox::warning(this, "Предупреждение" , "Таблица пуста, вы не добавили ни одного множества"
                                                      "\nДля проведение манипуляций добавьте новые множества");
        flag = false;
    }
    else
        if (str == ""){
            QMessageBox::warning(this, "Предупреждение" , "Введите номер множества");
            flag = false;
        }
        else
            if (QVariant(str).toInt() == 0 && str != "0"){
                QMessageBox::warning(this, "Некорректный ввод" ,"Вы ввели символы, которые не являются цифрами (или ввели ряд нулей)"
                                                              "\nВведите номер множества без пробелов и иных символов, не являющихся цифрами");
                flag = false;
            }
            else
                if (intValidator.validate(str, pos) != 2){
                    QMessageBox::warning(this, "Предупреждение" , "Номер множества должен быть больше 0 и меньше максимального значения"
                                                                  "\nМаксимальное значение  - '2 147 483 647'");
                    flag = false;
                }
                else
                    if (QVariant(str).toInt() > ui->tableSet->rowCount()){
                        QMessageBox::warning(this, "Предупреждение" , "Множества с таким номером нет в таблице"
                                                                      "\nНомер последнего множества: " +
                        QVariant(ui->tableSet->rowCount()).toString());
                        flag = false;
                    }
    return flag;
}

MainWindow::ElementStatus MainWindow::checkingIntElement(QString& strMain, int numOfElem, int numOfSet){
    ElementStatus flag;
    int pos = 0;
    QIntValidator intValidator(INT_MIN, INT_MAX);
    if (intValidator.validate(strMain, pos) != 2)
        flag = Error;
    else{
        strMain = QVariant(strMain.toInt()).toString();
        if (numOfElem == 0)
            flag = OutSet;
        else{
            BinaryTree<int> tree;
            Node<int>* root = tree.getRoot();
            Node<int>** newRoot = &root;
            int elem = strMain.toInt();
            for (int i = columnsMainCount; i < numOfElem + columnsMainCount; i++)
                tree.insert(newRoot, ui->tableSet->item(numOfSet-1, i)->text().toInt());
            if (tree.search((*newRoot), elem) == nullptr)
                flag = OutSet;
            else
                flag = InSet;
        }
    }
   return flag;
}

MainWindow::ElementStatus MainWindow::checkingDoubleElement(QString& strMain, int numOfElem, int numOfSet){
    ElementStatus flag;
    int pos = 0;
    const double MIN = -8000000000.0, MAX = 8000000000.0;
    QDoubleValidator dValidStandart(MIN, MAX, 6), dValidScientific(MIN, MAX, 6);
    dValidStandart.setLocale(QLocale::C); dValidScientific.setLocale(QLocale::C);
    dValidStandart.setNotation(QDoubleValidator::StandardNotation);
    dValidScientific.setNotation(QDoubleValidator::ScientificNotation);
    if (dValidStandart.validate(strMain, pos) != 2 && dValidScientific.validate(strMain, pos) != 2)
        flag = Error;
    else{
        strMain = QVariant(strMain.toDouble()).toString();
        if (numOfElem == 0)
            flag = OutSet;
        else{
            BinaryTree<double> tree;
            Node<double>* root = tree.getRoot();
            Node<double>** newRoot = &root;
            double elem = QVariant(strMain).toDouble();
            for (int i = columnsMainCount; i < numOfElem + columnsMainCount; i++)
                tree.insert(newRoot, QVariant(ui->tableSet->item(numOfSet-1, i)->text()).toDouble());
            if (tree.search((*newRoot), elem) == nullptr)
                flag = OutSet;
            else
                flag = InSet;
        }
    }
    return flag;
}

MainWindow::ElementStatus MainWindow::checkingCharElement(QString& strMain, int numOfElem, int numOfSet){
    ElementStatus flag;
    if (!checkChar(strMain))
        flag = Error;
    else{
        if (numOfElem == 0)
            flag = OutSet;
        else{
            BinaryTree<QChar> tree;
            Node<QChar>* root = tree.getRoot();
            Node<QChar>** newRoot = &root;
            QChar elem = strMain.at(0);
            for (int i = columnsMainCount; i < numOfElem + columnsMainCount; i++)
                tree.insert(newRoot, ui->tableSet->item(numOfSet-1, i)->text().at(0));
            if (tree.search((*newRoot), elem) == nullptr)
                flag = OutSet;
            else
                flag = InSet;
        }
    }
    return flag;
}

MainWindow::ElementStatus MainWindow::isElementInSet(int numOfSet, QString& strMain){
    ElementStatus flag = Empty;
    QString str = ui->tableSet->item(numOfSet-1, 2)->text();
    strMain = strMain.trimmed();
    int numOfElem = QVariant(ui->tableSet->item(numOfSet-1, 1)->text()).toInt();
        if (strMain != ""){
            switch(numOfType(str)){
            case 0:{
                flag = checkingIntElement(strMain, numOfElem, numOfSet);
                if (flag == Error)
                    QMessageBox::warning(this, "Предупреждение" ,
                                         "Введённое значение элемента не является типом данных 'Целое'\n"
                                         "Тип данных 'Целое' содержит в себе положительное или отрицательное целое число без посторонних символов\n\n"
                                         "Максимальное значение -  '2 147 483 647'\nМинимальное значение -   '-2 147 483 648'");
                break;}
            case 1:{
                flag = checkingDoubleElement(strMain, numOfElem, numOfSet);
                if (flag == Error)
                    QMessageBox::warning(this, "Предупреждение" ,
                                         "Введённое значение элемента не является типом данных 'Дробь'\n"
                                         "Тип данных 'Дробь' содержит в себе положительное или отрицательное вещественное число без посторонних символов\n"
                                         "Для обозначения дробной части используется точка, допускается не более 6 знаков после запятой\n\n"
                                         "Минимальное значение -  '-8 000 000 000'"
                                         "\nМаксимальное значение -  '8 000 000 000'");
                break;}
            case 2:{
                flag = checkingCharElement(strMain, numOfElem, numOfSet);
                if (flag == Error)
                   QMessageBox::warning(this, "Предупреждение" ,
                                        "Введённое значение элемента не является типом данных 'Символ'\n"
                                        "Тип данных 'Символ' содержит в себе только один любой символ\n"
                                        "Кроме пробела и других непечетаемых символов");
                break;}
            default: break;
            }
        }
    return flag;
}

void MainWindow::on_pushButtonCheckElement_clicked(){
    QString str = ui->LineChoiceSetNum->text().trimmed(), mainStr= ui->LineElemValue->text().trimmed();
    int numOfSet = QVariant(str).toInt();
    if (checkDelSetAddDelElem(str)){
        int numOfElemnts = QVariant(ui->tableSet->item(numOfSet-1, 1)->text()).toInt();
        if (numOfElemnts == 0)
            QMessageBox::warning(this, "Предупреждение" ,
                                 "Множество  №" + str + " - пустое множество\nВы не можете выполнить "
                                 "операцию \"Проверка вхождения\" для этого множества");
        else{
            ElementStatus answer = isElementInSet(numOfSet, mainStr);
            if (answer == OutSet)
               QMessageBox::warning(this, "Результат \"Проверка вхождения\"" ,
                                    "Элемент '" + mainStr + "' НЕ ВХОДИТ в множество №" + str);
            else
                if (answer == InSet)
                    QMessageBox::warning(this, "Результат \"Проверка вхождения\"" ,
                                         "Элемент '" + mainStr + "' ВХОДИТ в множество №" + str);
                else
                    if (answer == Empty)
                        QMessageBox::warning(this, "Предупреждение" ,
                                             "Введите значение элемента");
        }
    }
    ui->LineElemValue->setFocus();
}

void MainWindow::on_pushButtonDelElement_clicked(){
    QString str = ui->LineChoiceSetNum->text(), mainStr= ui->LineElemValue->text();
    int numOfSet = QVariant(str).toInt();
    if (checkDelSetAddDelElem(str)){
        int numOfElemnts = QVariant(ui->tableSet->item(numOfSet-1, 1)->text()).toInt();
        if (numOfElemnts == 0)
            QMessageBox::warning(this, "Предупреждение" , "Множество  №" + str + " - пустое множество\nВы не можете выполнить "
                                                                                 "операцию \"Удаление\" для этого множества");
        else{
            ElementStatus answer = isElementInSet(numOfSet, mainStr);
            if (answer == OutSet)
               QMessageBox::warning(this, "Невозможно выполнить операцию" , "Элемент '" + mainStr + "' НЕ ВХОДИТ в множество №" + str+
                                    "\nВыполнить его удаление невозможно");
            else
                if (answer == InSet){                    
                    if (!writeDeleteElement<QString>(numOfSet, mainStr)){
                        QMessageBox::critical(this, "Ошибка. Файл повреждён", "Файл с множествами был повреждён, все множества"
                                                                          " были удалены\nТаблица Множеств и Таблица Операций очищены");
                        ui->tableSet->setRowCount(0);
                    }
                    clearTableSet();
                    clearTableOperations();
                    on_pushButton_2_clicked();
                }
                else
                    if (answer == Empty)
                        QMessageBox::warning(this, "Предупреждение" , "Введите значение элемента");
        }
    }
    ui->LineElemValue->setText("");
    ui->LineElemValue->setFocus();
}

void MainWindow::on_pushButtonAddElement_clicked(){
    QString str = ui->LineChoiceSetNum->text(), mainStr= ui->LineElemValue->text();
    int numOfSet = QVariant(str).toInt();
    if (checkDelSetAddDelElem(str)){
        ElementStatus answer = isElementInSet(numOfSet, mainStr);
        if (ui->tableSet->item(numOfSet-1, 1)->text().toInt() == 2147483647)
            QMessageBox::warning(this, "Множество полностью заполнено" , "Размер множества максимален, равный 2 147 483 647; Вы не можете добавить элемент\nЧтобы добавить новые элементы, удалить старые");
        else
            if (answer == OutSet) {
                if (!writeAddElement<QString>(numOfSet, mainStr)){
                    QMessageBox::critical(this, "Ошибка. Файл повреждён", "Файл с множествами был повреждён, все множества"
                                                                      " были удалены\nТаблица Множеств и Таблица Операций очищены");
                    ui->tableSet->setRowCount(0);
                    clearTableOperations();
                    clearTableSet();
                }
                on_pushButton_2_clicked();
                ui->LineElemValue->setText("");
            }
            else
                if (answer == InSet){
                    QMessageBox::warning(this, "Невозможно выполнить операцию" , "Элемент '" + mainStr + "' ВХОДИТ в множество №" + str+
                                          "\nВыполнить его повторное добавление невозможно");
                }
                else
                    if (answer == Empty)
                        QMessageBox::warning(this, "Предупреждение" , "Введите значение элемента");
    }

    ui->LineElemValue->setFocus();
}

void MainWindow::resizeEvent(QResizeEvent* event){
    ui->groupBox->setGeometry(ui->tabWidget->width() < 360 ? ui->groupBox->x() : (ui->tabWidget->width()-820)/2, ui->groupBox->y(),
                              ui->groupBox->width(), ui->groupBox->height());
    ui->pushButtonAddSetAfterOperations->setGeometry(ui->tabWidget->width() < 360 ? ui->pushButtonAddSetAfterOperations->x() : (ui->tabWidget->width()-440)/2, ui->pushButtonAddSetAfterOperations->y(),
                                                     ui->pushButtonAddSetAfterOperations->width(), ui->pushButtonAddSetAfterOperations->height());
    ui->stackedWidget->setGeometry(ui->stackedWidget->x(), ui->tabWidget->height() < 360 ? 363 : ui->tabWidget->height()-228,
                                   ui->stackedWidget->width(), ui->stackedWidget->height());
    ui->ChoiceFormOutGroupBox->setGeometry(ui->ChoiceFormOutGroupBox->x(), ui->tabWidget->height() < 360 ? 358 : ui->tabWidget->height()-233,
                                           ui->ChoiceFormOutGroupBox->width(), ui->ChoiceFormOutGroupBox->height());
    ui->pushButtonAboutProgramm->setGeometry(ui->pushButtonAboutProgramm->x(), ui->tabWidget->height() < 360 ? 523 : ui->tabWidget->height()-68,
                                           ui->pushButtonAboutProgramm->width(), ui->pushButtonAboutProgramm->height());
    ui->tableSet->setGeometry(ui->tableSet->x(), ui->tableSet->y(),
                              ui->tabWidget->width()-7, ui->tabWidget->height()-ui->stackedWidget->height()-50);
    ui->tableOperations->setGeometry(ui->tableOperations->x(), ui->tableOperations->y(),
                                     ui->tabWidget->width()-15, ui->tableOperations->height());
}
