/********************************************************************************
** Form generated from reading UI file 'mainwindow.ui'
**
** Created by: Qt User Interface Compiler version 5.11.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_MAINWINDOW_H
#define UI_MAINWINDOW_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QFontComboBox>
#include <QtWidgets/QGroupBox>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QRadioButton>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QSpinBox>
#include <QtWidgets/QStackedWidget>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QTabWidget>
#include <QtWidgets/QTableWidget>
#include <QtWidgets/QToolBar>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_MainWindow
{
public:
    QWidget *centralWidget;
    QHBoxLayout *horizontalLayout_14;
    QTabWidget *tabWidget;
    QWidget *tab_grid;
    QTableWidget *tableSet;
    QStackedWidget *stackedWidget;
    QWidget *page;
    QLabel *label_6;
    QGroupBox *groupBoxOneSet;
    QWidget *verticalLayoutWidget_7;
    QVBoxLayout *verticalLayout_7;
    QPushButton *pushButtonAddSet;
    QHBoxLayout *horizontalLayout_5;
    QRadioButton *radioInt;
    QRadioButton *radioDouble;
    QRadioButton *radioChar;
    QWidget *horizontalLayoutWidget_6;
    QHBoxLayout *horizontalLayout_6;
    QPushButton *pushButtonPreviousPage_5;
    QPushButton *pushButtonNextPage;
    QWidget *page_2;
    QLabel *label_7;
    QGroupBox *groupBox_5;
    QWidget *horizontalLayoutWidget_9;
    QHBoxLayout *horizontalLayout_11;
    QVBoxLayout *verticalLayout_3;
    QLabel *label_12;
    QLineEdit *LineElemValue;
    QVBoxLayout *verticalLayout_2;
    QLabel *label_10;
    QLineEdit *LineChoiceSetNum;
    QWidget *horizontalLayoutWidget_10;
    QHBoxLayout *horizontalLayout_12;
    QPushButton *pushButtonAddElement;
    QPushButton *pushButtonDelElement;
    QPushButton *pushButtonCheckElement;
    QWidget *horizontalLayoutWidget_5;
    QHBoxLayout *horizontalLayout_4;
    QPushButton *pushButtonPreviousPage;
    QPushButton *pushButtonNextPage_2;
    QWidget *page_3;
    QLabel *label_9;
    QGroupBox *groupBox_4;
    QWidget *verticalLayoutWidget_4;
    QVBoxLayout *verticalLayout_4;
    QLabel *label_15;
    QLineEdit *LineDeleteSet;
    QPushButton *pushButtonDelSet;
    QWidget *horizontalLayoutWidget_3;
    QHBoxLayout *horizontalLayout_3;
    QPushButton *pushButtonPreviousPage_2;
    QPushButton *pushButtonNextPage_5;
    QWidget *page_7;
    QLabel *label_14;
    QWidget *horizontalLayoutWidget_7;
    QHBoxLayout *horizontalLayout_7;
    QPushButton *pushButtonPreviousPage_6;
    QPushButton *pushButtonNextPage_6;
    QWidget *verticalLayoutWidget_5;
    QVBoxLayout *verticalLayout_5;
    QLabel *label_8;
    QHBoxLayout *horizontalLayout_2;
    QFontComboBox *fontComboBox;
    QSpinBox *spinBoxSizeFont;
    QPushButton *pushButtonSaveSettings;
    QGroupBox *ChoiceFormOutGroupBox;
    QPushButton *pushButton_2;
    QWidget *horizontalLayoutWidget;
    QHBoxLayout *horizontalLayout;
    QRadioButton *radioInFix;
    QRadioButton *radioPreFix;
    QRadioButton *radioPostFix;
    QPushButton *pushButtonAboutProgramm;
    QWidget *tab_2;
    QGroupBox *groupBox;
    QWidget *horizontalLayoutWidget_2;
    QHBoxLayout *horizontalLayout_9;
    QLabel *label_13;
    QLineEdit *LineSet1;
    QPushButton *pushButtonLinesSetChange;
    QLabel *label_11;
    QLineEdit *LineSet2;
    QWidget *verticalLayoutWidget;
    QVBoxLayout *verticalLayout_6;
    QHBoxLayout *horizontalLayout_10;
    QPushButton *pushButtonIntersection;
    QPushButton *pushButtonUnion;
    QPushButton *pushButtonDifference;
    QHBoxLayout *horizontalLayout_13;
    QSpacerItem *horizontalSpacer;
    QPushButton *pushButtonEqualityOfSets;
    QSpacerItem *horizontalSpacer_2;
    QTableWidget *tableOperations;
    QPushButton *pushButtonAddSetAfterOperations;
    QMenuBar *menuBar;
    QToolBar *mainToolBar;
    QStatusBar *statusBar;

    void setupUi(QMainWindow *MainWindow)
    {
        if (MainWindow->objectName().isEmpty())
            MainWindow->setObjectName(QStringLiteral("MainWindow"));
        MainWindow->resize(862, 645);
        MainWindow->setMinimumSize(QSize(862, 645));
        MainWindow->setIconSize(QSize(30, 30));
        centralWidget = new QWidget(MainWindow);
        centralWidget->setObjectName(QStringLiteral("centralWidget"));
        horizontalLayout_14 = new QHBoxLayout(centralWidget);
        horizontalLayout_14->setSpacing(6);
        horizontalLayout_14->setContentsMargins(11, 11, 11, 11);
        horizontalLayout_14->setObjectName(QStringLiteral("horizontalLayout_14"));
        tabWidget = new QTabWidget(centralWidget);
        tabWidget->setObjectName(QStringLiteral("tabWidget"));
        tabWidget->setMinimumSize(QSize(0, 0));
        tabWidget->setTabShape(QTabWidget::Rounded);
        tab_grid = new QWidget();
        tab_grid->setObjectName(QStringLiteral("tab_grid"));
        tableSet = new QTableWidget(tab_grid);
        if (tableSet->columnCount() < 3)
            tableSet->setColumnCount(3);
        QFont font;
        font.setFamily(QStringLiteral("Times New Roman"));
        font.setPointSize(12);
        QTableWidgetItem *__qtablewidgetitem = new QTableWidgetItem();
        __qtablewidgetitem->setFont(font);
        tableSet->setHorizontalHeaderItem(0, __qtablewidgetitem);
        QFont font1;
        font1.setPointSize(12);
        QTableWidgetItem *__qtablewidgetitem1 = new QTableWidgetItem();
        __qtablewidgetitem1->setFont(font1);
        tableSet->setHorizontalHeaderItem(1, __qtablewidgetitem1);
        QTableWidgetItem *__qtablewidgetitem2 = new QTableWidgetItem();
        __qtablewidgetitem2->setFont(font);
        tableSet->setHorizontalHeaderItem(2, __qtablewidgetitem2);
        if (tableSet->rowCount() < 1)
            tableSet->setRowCount(1);
        QTableWidgetItem *__qtablewidgetitem3 = new QTableWidgetItem();
        __qtablewidgetitem3->setFont(font);
        tableSet->setVerticalHeaderItem(0, __qtablewidgetitem3);
        tableSet->setObjectName(QStringLiteral("tableSet"));
        tableSet->setGeometry(QRect(0, 0, 831, 351));
        QSizePolicy sizePolicy(QSizePolicy::Minimum, QSizePolicy::Minimum);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(tableSet->sizePolicy().hasHeightForWidth());
        tableSet->setSizePolicy(sizePolicy);
        tableSet->setMinimumSize(QSize(831, 351));
        tableSet->setBaseSize(QSize(831, 351));
        tableSet->setFont(font);
        tableSet->setFocusPolicy(Qt::StrongFocus);
        tableSet->setFrameShape(QFrame::StyledPanel);
        tableSet->setFrameShadow(QFrame::Plain);
        tableSet->setLineWidth(1);
        tableSet->setMidLineWidth(0);
        tableSet->setSizeAdjustPolicy(QAbstractScrollArea::AdjustIgnored);
        tableSet->setEditTriggers(QAbstractItemView::NoEditTriggers);
        tableSet->setDragEnabled(true);
        tableSet->setAlternatingRowColors(false);
        tableSet->setSelectionMode(QAbstractItemView::SingleSelection);
        tableSet->setSelectionBehavior(QAbstractItemView::SelectRows);
        tableSet->setShowGrid(true);
        tableSet->setGridStyle(Qt::SolidLine);
        tableSet->setSortingEnabled(false);
        tableSet->setWordWrap(true);
        tableSet->setCornerButtonEnabled(true);
        tableSet->setRowCount(1);
        tableSet->setColumnCount(3);
        tableSet->horizontalHeader()->setVisible(false);
        tableSet->horizontalHeader()->setCascadingSectionResizes(false);
        tableSet->horizontalHeader()->setHighlightSections(false);
        tableSet->horizontalHeader()->setProperty("showSortIndicator", QVariant(false));
        tableSet->horizontalHeader()->setStretchLastSection(true);
        tableSet->verticalHeader()->setVisible(false);
        tableSet->verticalHeader()->setCascadingSectionResizes(false);
        tableSet->verticalHeader()->setHighlightSections(false);
        tableSet->verticalHeader()->setProperty("showSortIndicator", QVariant(false));
        tableSet->verticalHeader()->setStretchLastSection(false);
        stackedWidget = new QStackedWidget(tab_grid);
        stackedWidget->setObjectName(QStringLiteral("stackedWidget"));
        stackedWidget->setGeometry(QRect(10, 360, 491, 191));
        QSizePolicy sizePolicy1(QSizePolicy::Maximum, QSizePolicy::Maximum);
        sizePolicy1.setHorizontalStretch(0);
        sizePolicy1.setVerticalStretch(0);
        sizePolicy1.setHeightForWidth(stackedWidget->sizePolicy().hasHeightForWidth());
        stackedWidget->setSizePolicy(sizePolicy1);
        stackedWidget->setMinimumSize(QSize(491, 191));
        stackedWidget->setMaximumSize(QSize(491, 191));
        stackedWidget->setFrameShape(QFrame::Box);
        page = new QWidget();
        page->setObjectName(QStringLiteral("page"));
        label_6 = new QLabel(page);
        label_6->setObjectName(QStringLiteral("label_6"));
        label_6->setGeometry(QRect(0, 0, 81, 16));
        label_6->setFrameShape(QFrame::StyledPanel);
        groupBoxOneSet = new QGroupBox(page);
        groupBoxOneSet->setObjectName(QStringLiteral("groupBoxOneSet"));
        groupBoxOneSet->setGeometry(QRect(10, 20, 471, 131));
        groupBoxOneSet->setFont(font1);
        verticalLayoutWidget_7 = new QWidget(groupBoxOneSet);
        verticalLayoutWidget_7->setObjectName(QStringLiteral("verticalLayoutWidget_7"));
        verticalLayoutWidget_7->setGeometry(QRect(10, 30, 451, 93));
        verticalLayout_7 = new QVBoxLayout(verticalLayoutWidget_7);
        verticalLayout_7->setSpacing(6);
        verticalLayout_7->setContentsMargins(11, 11, 11, 11);
        verticalLayout_7->setObjectName(QStringLiteral("verticalLayout_7"));
        verticalLayout_7->setContentsMargins(0, 0, 0, 0);
        pushButtonAddSet = new QPushButton(verticalLayoutWidget_7);
        pushButtonAddSet->setObjectName(QStringLiteral("pushButtonAddSet"));
        QFont font2;
        font2.setPointSize(14);
        pushButtonAddSet->setFont(font2);

        verticalLayout_7->addWidget(pushButtonAddSet);

        horizontalLayout_5 = new QHBoxLayout();
        horizontalLayout_5->setSpacing(6);
        horizontalLayout_5->setObjectName(QStringLiteral("horizontalLayout_5"));
        radioInt = new QRadioButton(verticalLayoutWidget_7);
        radioInt->setObjectName(QStringLiteral("radioInt"));
        radioInt->setChecked(true);

        horizontalLayout_5->addWidget(radioInt);

        radioDouble = new QRadioButton(verticalLayoutWidget_7);
        radioDouble->setObjectName(QStringLiteral("radioDouble"));

        horizontalLayout_5->addWidget(radioDouble);

        radioChar = new QRadioButton(verticalLayoutWidget_7);
        radioChar->setObjectName(QStringLiteral("radioChar"));

        horizontalLayout_5->addWidget(radioChar);


        verticalLayout_7->addLayout(horizontalLayout_5);

        horizontalLayoutWidget_6 = new QWidget(page);
        horizontalLayoutWidget_6->setObjectName(QStringLiteral("horizontalLayoutWidget_6"));
        horizontalLayoutWidget_6->setGeometry(QRect(10, 150, 471, 41));
        horizontalLayout_6 = new QHBoxLayout(horizontalLayoutWidget_6);
        horizontalLayout_6->setSpacing(6);
        horizontalLayout_6->setContentsMargins(11, 11, 11, 11);
        horizontalLayout_6->setObjectName(QStringLiteral("horizontalLayout_6"));
        horizontalLayout_6->setContentsMargins(0, 0, 0, 0);
        pushButtonPreviousPage_5 = new QPushButton(horizontalLayoutWidget_6);
        pushButtonPreviousPage_5->setObjectName(QStringLiteral("pushButtonPreviousPage_5"));

        horizontalLayout_6->addWidget(pushButtonPreviousPage_5);

        pushButtonNextPage = new QPushButton(horizontalLayoutWidget_6);
        pushButtonNextPage->setObjectName(QStringLiteral("pushButtonNextPage"));
        pushButtonNextPage->setAutoDefault(false);
        pushButtonNextPage->setFlat(false);

        horizontalLayout_6->addWidget(pushButtonNextPage);

        stackedWidget->addWidget(page);
        page_2 = new QWidget();
        page_2->setObjectName(QStringLiteral("page_2"));
        label_7 = new QLabel(page_2);
        label_7->setObjectName(QStringLiteral("label_7"));
        label_7->setGeometry(QRect(0, 0, 81, 16));
        label_7->setFrameShape(QFrame::StyledPanel);
        label_7->setFrameShadow(QFrame::Plain);
        groupBox_5 = new QGroupBox(page_2);
        groupBox_5->setObjectName(QStringLiteral("groupBox_5"));
        groupBox_5->setGeometry(QRect(10, 29, 471, 121));
        groupBox_5->setFont(font1);
        horizontalLayoutWidget_9 = new QWidget(groupBox_5);
        horizontalLayoutWidget_9->setObjectName(QStringLiteral("horizontalLayoutWidget_9"));
        horizontalLayoutWidget_9->setGeometry(QRect(10, 60, 451, 54));
        horizontalLayout_11 = new QHBoxLayout(horizontalLayoutWidget_9);
        horizontalLayout_11->setSpacing(6);
        horizontalLayout_11->setContentsMargins(11, 11, 11, 11);
        horizontalLayout_11->setObjectName(QStringLiteral("horizontalLayout_11"));
        horizontalLayout_11->setContentsMargins(0, 0, 0, 0);
        verticalLayout_3 = new QVBoxLayout();
        verticalLayout_3->setSpacing(6);
        verticalLayout_3->setObjectName(QStringLiteral("verticalLayout_3"));
        label_12 = new QLabel(horizontalLayoutWidget_9);
        label_12->setObjectName(QStringLiteral("label_12"));
        label_12->setFont(font1);

        verticalLayout_3->addWidget(label_12);

        LineElemValue = new QLineEdit(horizontalLayoutWidget_9);
        LineElemValue->setObjectName(QStringLiteral("LineElemValue"));
        LineElemValue->setFont(font1);

        verticalLayout_3->addWidget(LineElemValue);


        horizontalLayout_11->addLayout(verticalLayout_3);

        verticalLayout_2 = new QVBoxLayout();
        verticalLayout_2->setSpacing(6);
        verticalLayout_2->setObjectName(QStringLiteral("verticalLayout_2"));
        label_10 = new QLabel(horizontalLayoutWidget_9);
        label_10->setObjectName(QStringLiteral("label_10"));
        label_10->setFont(font1);
        label_10->setInputMethodHints(Qt::ImhNone);

        verticalLayout_2->addWidget(label_10);

        LineChoiceSetNum = new QLineEdit(horizontalLayoutWidget_9);
        LineChoiceSetNum->setObjectName(QStringLiteral("LineChoiceSetNum"));
        LineChoiceSetNum->setFont(font1);
        LineChoiceSetNum->setInputMethodHints(Qt::ImhDigitsOnly);
        LineChoiceSetNum->setEchoMode(QLineEdit::Normal);
        LineChoiceSetNum->setClearButtonEnabled(false);

        verticalLayout_2->addWidget(LineChoiceSetNum);


        horizontalLayout_11->addLayout(verticalLayout_2);

        horizontalLayoutWidget_10 = new QWidget(groupBox_5);
        horizontalLayoutWidget_10->setObjectName(QStringLiteral("horizontalLayoutWidget_10"));
        horizontalLayoutWidget_10->setGeometry(QRect(10, 20, 451, 41));
        horizontalLayout_12 = new QHBoxLayout(horizontalLayoutWidget_10);
        horizontalLayout_12->setSpacing(6);
        horizontalLayout_12->setContentsMargins(11, 11, 11, 11);
        horizontalLayout_12->setObjectName(QStringLiteral("horizontalLayout_12"));
        horizontalLayout_12->setContentsMargins(0, 0, 0, 0);
        pushButtonAddElement = new QPushButton(horizontalLayoutWidget_10);
        pushButtonAddElement->setObjectName(QStringLiteral("pushButtonAddElement"));
        pushButtonAddElement->setFont(font1);

        horizontalLayout_12->addWidget(pushButtonAddElement);

        pushButtonDelElement = new QPushButton(horizontalLayoutWidget_10);
        pushButtonDelElement->setObjectName(QStringLiteral("pushButtonDelElement"));

        horizontalLayout_12->addWidget(pushButtonDelElement);

        pushButtonCheckElement = new QPushButton(horizontalLayoutWidget_10);
        pushButtonCheckElement->setObjectName(QStringLiteral("pushButtonCheckElement"));

        horizontalLayout_12->addWidget(pushButtonCheckElement);

        horizontalLayoutWidget_5 = new QWidget(page_2);
        horizontalLayoutWidget_5->setObjectName(QStringLiteral("horizontalLayoutWidget_5"));
        horizontalLayoutWidget_5->setGeometry(QRect(10, 150, 471, 41));
        horizontalLayout_4 = new QHBoxLayout(horizontalLayoutWidget_5);
        horizontalLayout_4->setSpacing(6);
        horizontalLayout_4->setContentsMargins(11, 11, 11, 11);
        horizontalLayout_4->setObjectName(QStringLiteral("horizontalLayout_4"));
        horizontalLayout_4->setContentsMargins(0, 0, 0, 0);
        pushButtonPreviousPage = new QPushButton(horizontalLayoutWidget_5);
        pushButtonPreviousPage->setObjectName(QStringLiteral("pushButtonPreviousPage"));

        horizontalLayout_4->addWidget(pushButtonPreviousPage);

        pushButtonNextPage_2 = new QPushButton(horizontalLayoutWidget_5);
        pushButtonNextPage_2->setObjectName(QStringLiteral("pushButtonNextPage_2"));
        pushButtonNextPage_2->setAutoDefault(false);
        pushButtonNextPage_2->setFlat(false);

        horizontalLayout_4->addWidget(pushButtonNextPage_2);

        stackedWidget->addWidget(page_2);
        page_3 = new QWidget();
        page_3->setObjectName(QStringLiteral("page_3"));
        label_9 = new QLabel(page_3);
        label_9->setObjectName(QStringLiteral("label_9"));
        label_9->setGeometry(QRect(0, 0, 81, 16));
        label_9->setFrameShape(QFrame::StyledPanel);
        label_9->setFrameShadow(QFrame::Plain);
        groupBox_4 = new QGroupBox(page_3);
        groupBox_4->setObjectName(QStringLiteral("groupBox_4"));
        groupBox_4->setGeometry(QRect(10, 20, 471, 131));
        groupBox_4->setFont(font1);
        verticalLayoutWidget_4 = new QWidget(groupBox_4);
        verticalLayoutWidget_4->setObjectName(QStringLiteral("verticalLayoutWidget_4"));
        verticalLayoutWidget_4->setGeometry(QRect(10, 30, 451, 91));
        verticalLayout_4 = new QVBoxLayout(verticalLayoutWidget_4);
        verticalLayout_4->setSpacing(6);
        verticalLayout_4->setContentsMargins(11, 11, 11, 11);
        verticalLayout_4->setObjectName(QStringLiteral("verticalLayout_4"));
        verticalLayout_4->setContentsMargins(0, 0, 0, 0);
        label_15 = new QLabel(verticalLayoutWidget_4);
        label_15->setObjectName(QStringLiteral("label_15"));
        QFont font3;
        font3.setPointSize(11);
        label_15->setFont(font3);

        verticalLayout_4->addWidget(label_15);

        LineDeleteSet = new QLineEdit(verticalLayoutWidget_4);
        LineDeleteSet->setObjectName(QStringLiteral("LineDeleteSet"));
        LineDeleteSet->setInputMethodHints(Qt::ImhDigitsOnly);

        verticalLayout_4->addWidget(LineDeleteSet);

        pushButtonDelSet = new QPushButton(verticalLayoutWidget_4);
        pushButtonDelSet->setObjectName(QStringLiteral("pushButtonDelSet"));
        pushButtonDelSet->setFont(font1);

        verticalLayout_4->addWidget(pushButtonDelSet);

        horizontalLayoutWidget_3 = new QWidget(page_3);
        horizontalLayoutWidget_3->setObjectName(QStringLiteral("horizontalLayoutWidget_3"));
        horizontalLayoutWidget_3->setGeometry(QRect(10, 150, 471, 41));
        horizontalLayout_3 = new QHBoxLayout(horizontalLayoutWidget_3);
        horizontalLayout_3->setSpacing(6);
        horizontalLayout_3->setContentsMargins(11, 11, 11, 11);
        horizontalLayout_3->setObjectName(QStringLiteral("horizontalLayout_3"));
        horizontalLayout_3->setContentsMargins(0, 0, 0, 0);
        pushButtonPreviousPage_2 = new QPushButton(horizontalLayoutWidget_3);
        pushButtonPreviousPage_2->setObjectName(QStringLiteral("pushButtonPreviousPage_2"));

        horizontalLayout_3->addWidget(pushButtonPreviousPage_2);

        pushButtonNextPage_5 = new QPushButton(horizontalLayoutWidget_3);
        pushButtonNextPage_5->setObjectName(QStringLiteral("pushButtonNextPage_5"));
        pushButtonNextPage_5->setAutoDefault(false);
        pushButtonNextPage_5->setFlat(false);

        horizontalLayout_3->addWidget(pushButtonNextPage_5);

        stackedWidget->addWidget(page_3);
        page_7 = new QWidget();
        page_7->setObjectName(QStringLiteral("page_7"));
        label_14 = new QLabel(page_7);
        label_14->setObjectName(QStringLiteral("label_14"));
        label_14->setGeometry(QRect(0, 0, 81, 16));
        label_14->setFrameShape(QFrame::StyledPanel);
        label_14->setFrameShadow(QFrame::Plain);
        horizontalLayoutWidget_7 = new QWidget(page_7);
        horizontalLayoutWidget_7->setObjectName(QStringLiteral("horizontalLayoutWidget_7"));
        horizontalLayoutWidget_7->setGeometry(QRect(10, 150, 471, 41));
        horizontalLayout_7 = new QHBoxLayout(horizontalLayoutWidget_7);
        horizontalLayout_7->setSpacing(6);
        horizontalLayout_7->setContentsMargins(11, 11, 11, 11);
        horizontalLayout_7->setObjectName(QStringLiteral("horizontalLayout_7"));
        horizontalLayout_7->setContentsMargins(0, 0, 0, 0);
        pushButtonPreviousPage_6 = new QPushButton(horizontalLayoutWidget_7);
        pushButtonPreviousPage_6->setObjectName(QStringLiteral("pushButtonPreviousPage_6"));

        horizontalLayout_7->addWidget(pushButtonPreviousPage_6);

        pushButtonNextPage_6 = new QPushButton(horizontalLayoutWidget_7);
        pushButtonNextPage_6->setObjectName(QStringLiteral("pushButtonNextPage_6"));
        pushButtonNextPage_6->setAutoDefault(false);
        pushButtonNextPage_6->setFlat(false);

        horizontalLayout_7->addWidget(pushButtonNextPage_6);

        verticalLayoutWidget_5 = new QWidget(page_7);
        verticalLayoutWidget_5->setObjectName(QStringLiteral("verticalLayoutWidget_5"));
        verticalLayoutWidget_5->setGeometry(QRect(10, 20, 471, 121));
        verticalLayout_5 = new QVBoxLayout(verticalLayoutWidget_5);
        verticalLayout_5->setSpacing(6);
        verticalLayout_5->setContentsMargins(11, 11, 11, 11);
        verticalLayout_5->setObjectName(QStringLiteral("verticalLayout_5"));
        verticalLayout_5->setContentsMargins(0, 0, 0, 0);
        label_8 = new QLabel(verticalLayoutWidget_5);
        label_8->setObjectName(QStringLiteral("label_8"));
        label_8->setFont(font1);

        verticalLayout_5->addWidget(label_8);

        horizontalLayout_2 = new QHBoxLayout();
        horizontalLayout_2->setSpacing(6);
        horizontalLayout_2->setObjectName(QStringLiteral("horizontalLayout_2"));
        fontComboBox = new QFontComboBox(verticalLayoutWidget_5);
        fontComboBox->setObjectName(QStringLiteral("fontComboBox"));
        fontComboBox->setFont(font1);

        horizontalLayout_2->addWidget(fontComboBox);

        spinBoxSizeFont = new QSpinBox(verticalLayoutWidget_5);
        spinBoxSizeFont->setObjectName(QStringLiteral("spinBoxSizeFont"));
        spinBoxSizeFont->setFont(font1);
        spinBoxSizeFont->setButtonSymbols(QAbstractSpinBox::PlusMinus);
        spinBoxSizeFont->setMinimum(5);
        spinBoxSizeFont->setMaximum(30);
        spinBoxSizeFont->setValue(10);

        horizontalLayout_2->addWidget(spinBoxSizeFont);


        verticalLayout_5->addLayout(horizontalLayout_2);

        pushButtonSaveSettings = new QPushButton(verticalLayoutWidget_5);
        pushButtonSaveSettings->setObjectName(QStringLiteral("pushButtonSaveSettings"));
        pushButtonSaveSettings->setFont(font1);

        verticalLayout_5->addWidget(pushButtonSaveSettings);

        stackedWidget->addWidget(page_7);
        ChoiceFormOutGroupBox = new QGroupBox(tab_grid);
        ChoiceFormOutGroupBox->setObjectName(QStringLiteral("ChoiceFormOutGroupBox"));
        ChoiceFormOutGroupBox->setGeometry(QRect(510, 355, 319, 161));
        ChoiceFormOutGroupBox->setMinimumSize(QSize(319, 161));
        QFont font4;
        font4.setPointSize(10);
        ChoiceFormOutGroupBox->setFont(font4);
        pushButton_2 = new QPushButton(ChoiceFormOutGroupBox);
        pushButton_2->setObjectName(QStringLiteral("pushButton_2"));
        pushButton_2->setGeometry(QRect(10, 22, 301, 41));
        pushButton_2->setMinimumSize(QSize(75, 23));
        pushButton_2->setFont(font1);
        pushButton_2->setCursor(QCursor(Qt::PointingHandCursor));
        horizontalLayoutWidget = new QWidget(ChoiceFormOutGroupBox);
        horizontalLayoutWidget->setObjectName(QStringLiteral("horizontalLayoutWidget"));
        horizontalLayoutWidget->setGeometry(QRect(10, 70, 301, 41));
        horizontalLayout = new QHBoxLayout(horizontalLayoutWidget);
        horizontalLayout->setSpacing(6);
        horizontalLayout->setContentsMargins(11, 11, 11, 11);
        horizontalLayout->setObjectName(QStringLiteral("horizontalLayout"));
        horizontalLayout->setContentsMargins(0, 0, 0, 0);
        radioInFix = new QRadioButton(horizontalLayoutWidget);
        radioInFix->setObjectName(QStringLiteral("radioInFix"));
        radioInFix->setChecked(true);

        horizontalLayout->addWidget(radioInFix);

        radioPreFix = new QRadioButton(horizontalLayoutWidget);
        radioPreFix->setObjectName(QStringLiteral("radioPreFix"));

        horizontalLayout->addWidget(radioPreFix);

        radioPostFix = new QRadioButton(horizontalLayoutWidget);
        radioPostFix->setObjectName(QStringLiteral("radioPostFix"));

        horizontalLayout->addWidget(radioPostFix);

        pushButtonAboutProgramm = new QPushButton(tab_grid);
        pushButtonAboutProgramm->setObjectName(QStringLiteral("pushButtonAboutProgramm"));
        pushButtonAboutProgramm->setGeometry(QRect(510, 520, 319, 31));
        pushButtonAboutProgramm->setMinimumSize(QSize(319, 31));
        pushButtonAboutProgramm->setFont(font);
        pushButtonAboutProgramm->setIconSize(QSize(28, 22));
        tabWidget->addTab(tab_grid, QString());
        tab_2 = new QWidget();
        tab_2->setObjectName(QStringLiteral("tab_2"));
        groupBox = new QGroupBox(tab_2);
        groupBox->setObjectName(QStringLiteral("groupBox"));
        groupBox->setGeometry(QRect(10, 10, 821, 171));
        groupBox->setMinimumSize(QSize(821, 171));
        horizontalLayoutWidget_2 = new QWidget(groupBox);
        horizontalLayoutWidget_2->setObjectName(QStringLiteral("horizontalLayoutWidget_2"));
        horizontalLayoutWidget_2->setGeometry(QRect(100, 80, 651, 80));
        horizontalLayout_9 = new QHBoxLayout(horizontalLayoutWidget_2);
        horizontalLayout_9->setSpacing(6);
        horizontalLayout_9->setContentsMargins(11, 11, 11, 11);
        horizontalLayout_9->setObjectName(QStringLiteral("horizontalLayout_9"));
        horizontalLayout_9->setContentsMargins(0, 0, 0, 0);
        label_13 = new QLabel(horizontalLayoutWidget_2);
        label_13->setObjectName(QStringLiteral("label_13"));
        QFont font5;
        font5.setFamily(QStringLiteral("Times New Roman"));
        font5.setPointSize(14);
        font5.setBold(false);
        font5.setWeight(50);
        label_13->setFont(font5);

        horizontalLayout_9->addWidget(label_13, 0, Qt::AlignVCenter);

        LineSet1 = new QLineEdit(horizontalLayoutWidget_2);
        LineSet1->setObjectName(QStringLiteral("LineSet1"));
        LineSet1->setFont(font1);

        horizontalLayout_9->addWidget(LineSet1);

        pushButtonLinesSetChange = new QPushButton(horizontalLayoutWidget_2);
        pushButtonLinesSetChange->setObjectName(QStringLiteral("pushButtonLinesSetChange"));
        pushButtonLinesSetChange->setFlat(true);

        horizontalLayout_9->addWidget(pushButtonLinesSetChange);

        label_11 = new QLabel(horizontalLayoutWidget_2);
        label_11->setObjectName(QStringLiteral("label_11"));
        QFont font6;
        font6.setFamily(QStringLiteral("Times New Roman"));
        font6.setPointSize(14);
        label_11->setFont(font6);

        horizontalLayout_9->addWidget(label_11, 0, Qt::AlignVCenter);

        LineSet2 = new QLineEdit(horizontalLayoutWidget_2);
        LineSet2->setObjectName(QStringLiteral("LineSet2"));
        LineSet2->setFont(font1);

        horizontalLayout_9->addWidget(LineSet2);

        verticalLayoutWidget = new QWidget(groupBox);
        verticalLayoutWidget->setObjectName(QStringLiteral("verticalLayoutWidget"));
        verticalLayoutWidget->setGeometry(QRect(10, 20, 801, 74));
        verticalLayout_6 = new QVBoxLayout(verticalLayoutWidget);
        verticalLayout_6->setSpacing(6);
        verticalLayout_6->setContentsMargins(11, 11, 11, 11);
        verticalLayout_6->setObjectName(QStringLiteral("verticalLayout_6"));
        verticalLayout_6->setContentsMargins(0, 0, 0, 0);
        horizontalLayout_10 = new QHBoxLayout();
        horizontalLayout_10->setSpacing(6);
        horizontalLayout_10->setObjectName(QStringLiteral("horizontalLayout_10"));
        pushButtonIntersection = new QPushButton(verticalLayoutWidget);
        pushButtonIntersection->setObjectName(QStringLiteral("pushButtonIntersection"));
        pushButtonIntersection->setFont(font1);

        horizontalLayout_10->addWidget(pushButtonIntersection);

        pushButtonUnion = new QPushButton(verticalLayoutWidget);
        pushButtonUnion->setObjectName(QStringLiteral("pushButtonUnion"));
        pushButtonUnion->setFont(font1);

        horizontalLayout_10->addWidget(pushButtonUnion);

        pushButtonDifference = new QPushButton(verticalLayoutWidget);
        pushButtonDifference->setObjectName(QStringLiteral("pushButtonDifference"));
        pushButtonDifference->setFont(font1);

        horizontalLayout_10->addWidget(pushButtonDifference);


        verticalLayout_6->addLayout(horizontalLayout_10);

        horizontalLayout_13 = new QHBoxLayout();
        horizontalLayout_13->setSpacing(6);
        horizontalLayout_13->setObjectName(QStringLiteral("horizontalLayout_13"));
        horizontalSpacer = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_13->addItem(horizontalSpacer);

        pushButtonEqualityOfSets = new QPushButton(verticalLayoutWidget);
        pushButtonEqualityOfSets->setObjectName(QStringLiteral("pushButtonEqualityOfSets"));
        pushButtonEqualityOfSets->setMinimumSize(QSize(260, 33));
        pushButtonEqualityOfSets->setFont(font1);

        horizontalLayout_13->addWidget(pushButtonEqualityOfSets);

        horizontalSpacer_2 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_13->addItem(horizontalSpacer_2);


        verticalLayout_6->addLayout(horizontalLayout_13);

        tableOperations = new QTableWidget(tab_2);
        if (tableOperations->columnCount() < 3)
            tableOperations->setColumnCount(3);
        QTableWidgetItem *__qtablewidgetitem4 = new QTableWidgetItem();
        __qtablewidgetitem4->setFont(font1);
        tableOperations->setHorizontalHeaderItem(0, __qtablewidgetitem4);
        QTableWidgetItem *__qtablewidgetitem5 = new QTableWidgetItem();
        __qtablewidgetitem5->setFont(font1);
        tableOperations->setHorizontalHeaderItem(1, __qtablewidgetitem5);
        QTableWidgetItem *__qtablewidgetitem6 = new QTableWidgetItem();
        __qtablewidgetitem6->setFont(font1);
        tableOperations->setHorizontalHeaderItem(2, __qtablewidgetitem6);
        tableOperations->setObjectName(QStringLiteral("tableOperations"));
        tableOperations->setGeometry(QRect(10, 190, 821, 271));
        tableOperations->setMinimumSize(QSize(821, 271));
        tableOperations->setFont(font1);
        tableOperations->setFrameShape(QFrame::StyledPanel);
        tableOperations->setEditTriggers(QAbstractItemView::NoEditTriggers);
        tableOperations->setSelectionMode(QAbstractItemView::NoSelection);
        tableOperations->setSelectionBehavior(QAbstractItemView::SelectItems);
        tableOperations->horizontalHeader()->setVisible(false);
        tableOperations->horizontalHeader()->setCascadingSectionResizes(false);
        tableOperations->horizontalHeader()->setHighlightSections(true);
        tableOperations->horizontalHeader()->setStretchLastSection(true);
        tableOperations->verticalHeader()->setVisible(false);
        tableOperations->verticalHeader()->setCascadingSectionResizes(false);
        tableOperations->verticalHeader()->setHighlightSections(true);
        tableOperations->verticalHeader()->setProperty("showSortIndicator", QVariant(false));
        tableOperations->verticalHeader()->setStretchLastSection(false);
        pushButtonAddSetAfterOperations = new QPushButton(tab_2);
        pushButtonAddSetAfterOperations->setObjectName(QStringLiteral("pushButtonAddSetAfterOperations"));
        pushButtonAddSetAfterOperations->setGeometry(QRect(200, 480, 481, 61));
        pushButtonAddSetAfterOperations->setMinimumSize(QSize(481, 61));
        QFont font7;
        font7.setPointSize(16);
        pushButtonAddSetAfterOperations->setFont(font7);
        tabWidget->addTab(tab_2, QString());

        horizontalLayout_14->addWidget(tabWidget);

        MainWindow->setCentralWidget(centralWidget);
        menuBar = new QMenuBar(MainWindow);
        menuBar->setObjectName(QStringLiteral("menuBar"));
        menuBar->setGeometry(QRect(0, 0, 862, 21));
        menuBar->setDefaultUp(false);
        menuBar->setNativeMenuBar(true);
        MainWindow->setMenuBar(menuBar);
        mainToolBar = new QToolBar(MainWindow);
        mainToolBar->setObjectName(QStringLiteral("mainToolBar"));
        MainWindow->addToolBar(Qt::TopToolBarArea, mainToolBar);
        statusBar = new QStatusBar(MainWindow);
        statusBar->setObjectName(QStringLiteral("statusBar"));
        MainWindow->setStatusBar(statusBar);

        retranslateUi(MainWindow);

        tabWidget->setCurrentIndex(0);
        stackedWidget->setCurrentIndex(0);
        pushButtonNextPage->setDefault(false);
        pushButtonNextPage_2->setDefault(false);
        pushButtonNextPage_5->setDefault(false);
        pushButtonNextPage_6->setDefault(false);
        pushButton_2->setDefault(false);


        QMetaObject::connectSlotsByName(MainWindow);
    } // setupUi

    void retranslateUi(QMainWindow *MainWindow)
    {
        MainWindow->setWindowTitle(QApplication::translate("MainWindow", "MSO", nullptr));
        QTableWidgetItem *___qtablewidgetitem = tableSet->horizontalHeaderItem(0);
        ___qtablewidgetitem->setText(QApplication::translate("MainWindow", "\342\204\226", nullptr));
        QTableWidgetItem *___qtablewidgetitem1 = tableSet->horizontalHeaderItem(1);
        ___qtablewidgetitem1->setText(QApplication::translate("MainWindow", "\320\232\320\276\320\273\320\270\321\207\320\265\321\201\321\202\320\262\320\276", nullptr));
        QTableWidgetItem *___qtablewidgetitem2 = tableSet->horizontalHeaderItem(2);
        ___qtablewidgetitem2->setText(QApplication::translate("MainWindow", "\320\242\320\270\320\277 \320\264\320\260\320\275\320\275\321\213\321\205", nullptr));
        QTableWidgetItem *___qtablewidgetitem3 = tableSet->verticalHeaderItem(0);
        ___qtablewidgetitem3->setText(QApplication::translate("MainWindow", "1", nullptr));
        label_6->setText(QApplication::translate("MainWindow", "1 \321\201\321\202\321\200\320\260\320\275\320\270\321\206\320\260", nullptr));
        groupBoxOneSet->setTitle(QApplication::translate("MainWindow", "\320\224\320\276\320\261\320\260\320\262\320\273\320\265\320\275\320\270\320\265 \320\274\320\275\320\276\320\266\320\265\321\201\321\202\320\262\320\260", nullptr));
        pushButtonAddSet->setText(QApplication::translate("MainWindow", "\320\224\320\276\320\261\320\260\320\262\320\270\321\202\321\214 \320\274\320\275\320\276\320\266\320\265\321\201\321\202\320\262\320\276", nullptr));
        radioInt->setText(QApplication::translate("MainWindow", "\320\246\320\265\320\273\321\213\320\265 \321\207\320\270\321\201\320\273\320\260", nullptr));
        radioDouble->setText(QApplication::translate("MainWindow", "\320\222\320\265\321\211\320\265\321\201\321\202\320\262\320\265\320\275\320\275\321\213\320\265 \321\207\320\270\321\201\320\273\320\260", nullptr));
        radioChar->setText(QApplication::translate("MainWindow", "\320\241\320\270\320\274\320\262\320\276\320\273", nullptr));
        pushButtonPreviousPage_5->setText(QApplication::translate("MainWindow", "\320\237\321\200\320\265\320\264\321\213\320\264\321\203\321\211\320\260\321\217", nullptr));
        pushButtonNextPage->setText(QApplication::translate("MainWindow", "\320\241\320\273\320\265\320\264\321\203\321\216\321\211\320\260\321\217", nullptr));
        label_7->setText(QApplication::translate("MainWindow", "2 \321\201\321\202\321\200\320\260\320\275\320\270\321\206\320\260", nullptr));
        groupBox_5->setTitle(QApplication::translate("MainWindow", "\320\224\320\276\320\261\320\260\320\262\320\273\320\265\320\275\320\270\320\265/\321\203\320\264\320\260\320\273\320\265\320\275\320\270\320\265/\320\277\321\200\320\276\320\262\320\265\321\200\320\272\320\260 \320\262\321\205\320\276\320\266\320\264\320\265\320\275\320\270\321\217 \321\215\320\273\320\265\320\274\320\265\320\275\321\202\320\260", nullptr));
        label_12->setText(QApplication::translate("MainWindow", "\320\222\320\262\320\265\320\264\320\270\321\202\320\265 \321\215\320\273\320\265\320\274\320\265\320\275\321\202", nullptr));
        LineElemValue->setPlaceholderText(QApplication::translate("MainWindow", "\320\222\320\262\320\265\320\264\320\270\321\202\320\265 \321\215\320\273\320\265\320\274\320\265\320\275\321\202", nullptr));
        label_10->setText(QApplication::translate("MainWindow", "\320\235\320\276\320\274\320\265\321\200 \320\274\320\275\320\276\320\266\320\265\321\201\321\202\320\262\320\260", nullptr));
        LineChoiceSetNum->setPlaceholderText(QApplication::translate("MainWindow", "\320\222\320\262\320\265\320\264\320\270\321\202\320\265 \320\275\320\276\320\274\320\265\321\200 \320\274\320\275\320\276\320\266\320\265\321\201\321\202\320\262\320\260", nullptr));
        pushButtonAddElement->setText(QApplication::translate("MainWindow", "\320\224\320\276\320\261\320\260\320\262\320\270\321\202\321\214 ", nullptr));
        pushButtonDelElement->setText(QApplication::translate("MainWindow", "\320\243\320\264\320\260\320\273\320\270\321\202\321\214 ", nullptr));
        pushButtonCheckElement->setText(QApplication::translate("MainWindow", "\320\237\321\200\320\276\320\262\320\265\321\200\320\272\320\260 \320\262\321\205\320\276\320\266\320\264\320\265\320\275\320\270\321\217", nullptr));
        pushButtonPreviousPage->setText(QApplication::translate("MainWindow", "\320\237\321\200\320\265\320\264\321\213\320\264\321\203\321\211\320\260\321\217", nullptr));
        pushButtonNextPage_2->setText(QApplication::translate("MainWindow", "\320\241\320\273\320\265\320\264\321\203\321\216\321\211\320\260\321\217", nullptr));
        label_9->setText(QApplication::translate("MainWindow", "3 \321\201\321\202\321\200\320\260\320\275\320\270\321\206\320\260", nullptr));
        groupBox_4->setTitle(QApplication::translate("MainWindow", "\320\243\320\264\320\260\320\273\320\265\320\275\320\270\320\265 \320\274\320\275\320\276\320\266\320\265\321\201\321\202\320\262\320\260", nullptr));
        label_15->setText(QApplication::translate("MainWindow", "\320\222\320\262\320\265\320\264\320\270\321\202\320\265 \320\275\320\276\320\274\320\265\321\200 \320\274\320\275\320\276\320\266\320\265\321\201\321\202\320\262\320\260, \320\272\320\276\321\202\320\276\321\200\320\276\320\265 \321\205\320\276\321\202\320\270\321\202\320\265 \321\203\320\264\320\260\320\273\320\270\321\202\321\214", nullptr));
        LineDeleteSet->setPlaceholderText(QApplication::translate("MainWindow", "\320\222\320\262\320\265\320\264\320\270\321\202\320\265 \320\275\320\276\320\274\320\265\321\200 \320\274\320\275\320\276\320\266\320\265\321\201\321\202\320\262\320\260 \320\264\320\273\321\217 \321\203\320\264\320\260\320\273\320\265\320\275\320\270\321\217", nullptr));
        pushButtonDelSet->setText(QApplication::translate("MainWindow", "\320\243\320\264\320\260\320\273\320\270\321\202\321\214 \320\274\320\275\320\276\320\266\320\265\321\201\321\202\320\262\320\276", nullptr));
        pushButtonPreviousPage_2->setText(QApplication::translate("MainWindow", "\320\237\321\200\320\265\320\264\321\213\320\264\321\203\321\211\320\260\321\217", nullptr));
        pushButtonNextPage_5->setText(QApplication::translate("MainWindow", "\320\241\320\273\320\265\320\264\321\203\321\216\321\211\320\260\321\217", nullptr));
        label_14->setText(QApplication::translate("MainWindow", "4 \321\201\321\202\321\200\320\260\320\275\320\270\321\206\320\260", nullptr));
        pushButtonPreviousPage_6->setText(QApplication::translate("MainWindow", "\320\237\321\200\320\265\320\264\321\213\320\264\321\203\321\211\320\260\321\217", nullptr));
        pushButtonNextPage_6->setText(QApplication::translate("MainWindow", "\320\241\320\273\320\265\320\264\321\203\321\216\321\211\320\260\321\217", nullptr));
        label_8->setText(QApplication::translate("MainWindow", "\320\230\320\267\320\274\320\265\320\275\320\270\321\202\321\214 \321\210\321\200\320\270\321\204\321\202 \320\262 \321\202\320\260\320\261\320\273\320\270\321\206\320\265 \320\270 \320\265\320\263\320\276 \321\200\320\260\320\267\320\274\320\265\321\200", nullptr));
        fontComboBox->setCurrentText(QApplication::translate("MainWindow", "Times New Roman", nullptr));
        pushButtonSaveSettings->setText(QApplication::translate("MainWindow", "\320\241\320\276\321\205\321\200\320\260\320\275\320\270\321\202\321\214 \320\275\320\260\321\201\321\202\321\200\320\276\320\271\320\272\320\270", nullptr));
        ChoiceFormOutGroupBox->setTitle(QApplication::translate("MainWindow", "\320\222\321\213\320\261\320\276\321\200 \321\204\320\276\321\200\320\274\321\213 \320\262\321\213\320\262\320\276\320\264\320\260 \320\274\320\275\320\276\320\266\320\265\321\201\321\202\320\262", nullptr));
#ifndef QT_NO_TOOLTIP
        pushButton_2->setToolTip(QApplication::translate("MainWindow", "<html><head/><body><p>\320\237\321\200\320\270 \320\275\320\260\320\266\320\260\321\202\320\270\320\270 \320\275\320\260 \320\272\320\275\320\276\320\277\320\272\321\203 \320\262 \321\202\320\260\320\261\320\273\320\270\321\206\321\203 \320\261\321\203\320\264\321\203\321\202 \320\262\320\275\320\265\321\201\320\265\320\275\321\213 \320\262\321\201\320\265 \320\274\320\275\320\276\320\266\320\265\321\201\321\202\320\262\320\260, \320\272\320\276\321\202\320\276\321\200\321\213\320\265 \320\262\321\213 \321\200\320\260\320\275\320\265\320\265 \321\201\320\276\320\267\320\264\320\260\320\262\320\260\320\273\320\270, \320\262 <span style=\" text-decoration: underline;\">\320\262\321\213\320\261\321\200\320\260\320\275\320\275\320\276\320\271 \320\262\320\260\320\274\320\270</span> \321\204\320\276\321\200\320\274\320\265 \320\262\321\213\320\262\320\276\320\264\320\260</p></body></html>", nullptr));
#endif // QT_NO_TOOLTIP
        pushButton_2->setText(QApplication::translate("MainWindow", "\320\222\321\213\320\262\320\265\321\201\321\202\320\270 \320\274\320\275\320\276\320\266\320\265\321\201\321\202\320\262\320\260 \320\262 \321\202\320\260\320\261\320\273\320\270\321\206\321\203", nullptr));
        radioInFix->setText(QApplication::translate("MainWindow", "\320\230\320\275\321\204\320\270\320\272\321\201\320\275\320\260\321\217", nullptr));
        radioPreFix->setText(QApplication::translate("MainWindow", "\320\237\321\200\320\265\321\204\320\270\320\272\321\201\320\275\320\260\321\217", nullptr));
        radioPostFix->setText(QApplication::translate("MainWindow", "\320\237\320\276\321\201\321\202\321\204\320\270\320\272\321\201\320\275\320\260\321\217", nullptr));
        pushButtonAboutProgramm->setText(QApplication::translate("MainWindow", "\320\236 \320\237\320\240\320\236\320\223\320\240\320\220\320\234\320\234\320\225", nullptr));
        tabWidget->setTabText(tabWidget->indexOf(tab_grid), QApplication::translate("MainWindow", "\320\242\320\260\320\261\320\273\320\270\321\206\320\260 \320\274\320\275\320\276\320\266\320\265\321\201\321\202\320\262", nullptr));
        groupBox->setTitle(QApplication::translate("MainWindow", " \320\236\320\277\320\265\321\200\320\260\321\206\320\270\320\270 \320\275\320\260\320\264 \320\274\320\275\320\276\320\266\320\265\321\201\321\202\320\262\320\260\320\274\320\270", nullptr));
        label_13->setText(QApplication::translate("MainWindow", "\320\234\320\275\320\276\320\266\320\265\321\201\321\202\320\262\320\276 1", nullptr));
        pushButtonLinesSetChange->setText(QString());
        label_11->setText(QApplication::translate("MainWindow", "\320\234\320\275\320\276\320\266\320\265\321\201\321\202\320\262\320\276 2", nullptr));
        pushButtonIntersection->setText(QApplication::translate("MainWindow", "\320\237\320\265\321\200\320\265\321\201\320\265\321\207\320\265\320\275\320\270\320\265", nullptr));
        pushButtonUnion->setText(QApplication::translate("MainWindow", "\320\236\320\261\321\212\320\265\320\264\320\270\320\275\320\265\320\275\320\270\320\265", nullptr));
        pushButtonDifference->setText(QApplication::translate("MainWindow", "\320\240\320\260\320\267\320\275\320\276\321\201\321\202\321\214", nullptr));
        pushButtonEqualityOfSets->setText(QApplication::translate("MainWindow", "\320\237\321\200\320\276\320\262\320\265\321\200\320\272\320\260 \321\200\320\260\320\262\320\265\320\275\321\201\321\202\320\262 \320\274\320\275\320\276\320\266\320\265\321\201\321\202\320\262", nullptr));
        QTableWidgetItem *___qtablewidgetitem4 = tableOperations->horizontalHeaderItem(0);
        ___qtablewidgetitem4->setText(QApplication::translate("MainWindow", "\342\204\226", nullptr));
        QTableWidgetItem *___qtablewidgetitem5 = tableOperations->horizontalHeaderItem(1);
        ___qtablewidgetitem5->setText(QApplication::translate("MainWindow", "\320\232\320\276\320\273\320\270\321\207\320\265\321\201\321\202\320\262\320\276", nullptr));
        QTableWidgetItem *___qtablewidgetitem6 = tableOperations->horizontalHeaderItem(2);
        ___qtablewidgetitem6->setText(QApplication::translate("MainWindow", "\320\242\320\270\320\277 \320\264\320\260\320\275\320\275\321\213\321\205", nullptr));
        pushButtonAddSetAfterOperations->setText(QApplication::translate("MainWindow", "\320\224\320\276\320\261\320\260\320\262\320\270\321\202\321\214 \320\277\320\276\320\273\321\203\321\207\320\265\320\275\320\275\320\276\320\265 \320\274\320\275\320\276\320\266\320\265\321\201\321\202\320\262\320\276 \320\262 \321\202\320\260\320\261\320\273\320\270\321\206\321\203", nullptr));
        tabWidget->setTabText(tabWidget->indexOf(tab_2), QApplication::translate("MainWindow", "\320\236\320\277\320\265\321\200\320\260\321\206\320\270\320\270 \320\275\320\260\320\264 \320\274\320\275\320\276\320\266\320\265\321\201\321\202\320\262\320\260\320\274\320\270", nullptr));
    } // retranslateUi

};

namespace Ui {
    class MainWindow: public Ui_MainWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MAINWINDOW_H
