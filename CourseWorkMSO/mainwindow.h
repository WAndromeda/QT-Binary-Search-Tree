#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QMainWindow>
#include "QMessageBox"
#include <QQueue>
#include <QDebug>
#include <QValidator>
#include "binarytree.h"
#include "binarytree.cpp"
#include "string"
#include "extra.h"
#include "programm.h"
#include "ui_programm.h"


namespace Ui {
class MainWindow;
}

class MainWindow : public QMainWindow
{
    Q_OBJECT

public:
    enum ElementStatus{Empty, OutSet, InSet, Error};
    explicit MainWindow(QWidget *parent = nullptr);
    ~MainWindow();
private:
    const int columnsMainCount = 3;
    bool lineSet;
private:

    void resizeEvent(QResizeEvent*);

    QQueue<QString> choiceOfOperation(QQueue<QString> (*) (QQueue<QString>, QQueue<QString>), int []);

    bool checkDelSetAddDelElem(QString&);

    ElementStatus checkingIntElement(QString&, int, int);

    ElementStatus checkingDoubleElement(QString&, int, int);

    ElementStatus checkingCharElement(QString&, int, int);

    ElementStatus isElementInSet(int, QString&);

    void start_of_programm();

    void settingIcons();

    bool checkLinesOperations();

    void addHeadersTableSet();

    void addHeadersTableOperations();

    void clearTableSet();

    void clearTableOperations();

    bool newSetInTableOperations(QQueue<QString>, int, QString, int);

private slots:   

    void on_pushButton_2_clicked();

    void on_pushButtonNextPage_clicked();

    void on_pushButtonPreviousPage_clicked();

    void on_fontComboBox_currentFontChanged(const QFont &f);

    void on_pushButtonNextPage_2_clicked();

    void on_pushButtonPreviousPage_2_clicked();

    void on_pushButtonNextPage_5_clicked();

    void on_pushButtonPreviousPage_5_clicked();

    void on_pushButtonNextPage_6_clicked();

    void on_pushButtonPreviousPage_6_clicked();

    void on_pushButtonAddSet_clicked();

    void on_pushButtonNextPage_7_clicked();

    void on_pushButtonPreviousPage_7_clicked();

    void on_pushButtonAddElement_clicked();

    void on_pushButtonSaveSettings_clicked();

    void on_spinBoxSizeFont_valueChanged(int arg1);

    void on_pushButtonIntersection_clicked();

    void on_pushButtonUnion_clicked();

    void on_pushButtonDifference_clicked();

    void on_pushButtonAddSetAfterOperations_clicked();

    void on_pushButtonAboutProgramm_clicked();

    void on_pushButtonLinesSetChange_clicked();

    void on_tableSet_cellClicked(int row, int column);

    void on_pushButtonDelSet_clicked();

    void on_pushButtonCheckElement_clicked();

    void on_pushButtonDelElement_clicked();

    void on_pushButtonEqualityOfSets_clicked();

private:
    Ui::MainWindow *ui;
};

#endif // MAINWINDOW_H
