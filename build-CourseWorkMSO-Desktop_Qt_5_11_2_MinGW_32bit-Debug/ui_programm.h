/********************************************************************************
** Form generated from reading UI file 'programm.ui'
**
** Created by: Qt User Interface Compiler version 5.11.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_PROGRAMM_H
#define UI_PROGRAMM_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QDialog>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QGroupBox>
#include <QtWidgets/QLabel>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QTextBrowser>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_Programm
{
public:
    QGroupBox *groupBox_2;
    QGroupBox *groupBox_3;
    QWidget *gridLayoutWidget;
    QGridLayout *gridLayout;
    QLabel *label_2;
    QLabel *label;
    QLabel *label_3;
    QWidget *verticalLayoutWidget;
    QVBoxLayout *verticalLayout;
    QLabel *label_4;
    QLabel *label_5;
    QPushButton *button_QT;
    QTextBrowser *textBrowser;

    void setupUi(QDialog *Programm)
    {
        if (Programm->objectName().isEmpty())
            Programm->setObjectName(QStringLiteral("Programm"));
        Programm->resize(838, 560);
        Programm->setMinimumSize(QSize(838, 560));
        Programm->setMaximumSize(QSize(838, 560));
        groupBox_2 = new QGroupBox(Programm);
        groupBox_2->setObjectName(QStringLiteral("groupBox_2"));
        groupBox_2->setGeometry(QRect(10, 10, 821, 541));
        QFont font;
        font.setPointSize(12);
        groupBox_2->setFont(font);
        groupBox_3 = new QGroupBox(groupBox_2);
        groupBox_3->setObjectName(QStringLiteral("groupBox_3"));
        groupBox_3->setGeometry(QRect(10, 440, 661, 101));
        gridLayoutWidget = new QWidget(groupBox_3);
        gridLayoutWidget->setObjectName(QStringLiteral("gridLayoutWidget"));
        gridLayoutWidget->setGeometry(QRect(10, 19, 651, 71));
        gridLayout = new QGridLayout(gridLayoutWidget);
        gridLayout->setObjectName(QStringLiteral("gridLayout"));
        gridLayout->setContentsMargins(0, 0, 0, 0);
        label_2 = new QLabel(gridLayoutWidget);
        label_2->setObjectName(QStringLiteral("label_2"));
        label_2->setCursor(QCursor(Qt::WhatsThisCursor));

        gridLayout->addWidget(label_2, 1, 0, 1, 1);

        label = new QLabel(gridLayoutWidget);
        label->setObjectName(QStringLiteral("label"));
        label->setCursor(QCursor(Qt::WhatsThisCursor));

        gridLayout->addWidget(label, 0, 0, 1, 1);

        label_3 = new QLabel(gridLayoutWidget);
        label_3->setObjectName(QStringLiteral("label_3"));
        label_3->setCursor(QCursor(Qt::WhatsThisCursor));

        gridLayout->addWidget(label_3, 2, 0, 1, 1);

        verticalLayoutWidget = new QWidget(groupBox_2);
        verticalLayoutWidget->setObjectName(QStringLiteral("verticalLayoutWidget"));
        verticalLayoutWidget->setGeometry(QRect(680, 450, 131, 91));
        verticalLayout = new QVBoxLayout(verticalLayoutWidget);
        verticalLayout->setObjectName(QStringLiteral("verticalLayout"));
        verticalLayout->setContentsMargins(0, 0, 0, 0);
        label_4 = new QLabel(verticalLayoutWidget);
        label_4->setObjectName(QStringLiteral("label_4"));
        QFont font1;
        font1.setPointSize(10);
        label_4->setFont(font1);

        verticalLayout->addWidget(label_4);

        label_5 = new QLabel(verticalLayoutWidget);
        label_5->setObjectName(QStringLiteral("label_5"));
        label_5->setFont(font1);
        label_5->setCursor(QCursor(Qt::WhatsThisCursor));

        verticalLayout->addWidget(label_5);

        button_QT = new QPushButton(verticalLayoutWidget);
        button_QT->setObjectName(QStringLiteral("button_QT"));
        QFont font2;
        font2.setPointSize(14);
        button_QT->setFont(font2);

        verticalLayout->addWidget(button_QT);

        textBrowser = new QTextBrowser(groupBox_2);
        textBrowser->setObjectName(QStringLiteral("textBrowser"));
        textBrowser->setGeometry(QRect(10, 30, 801, 411));
        textBrowser->setMinimumSize(QSize(801, 411));
        textBrowser->setMaximumSize(QSize(801, 411));

        retranslateUi(Programm);

        QMetaObject::connectSlotsByName(Programm);
    } // setupUi

    void retranslateUi(QDialog *Programm)
    {
        Programm->setWindowTitle(QApplication::translate("Programm", "Dialog", nullptr));
        groupBox_2->setTitle(QApplication::translate("Programm", "\320\230\320\275\321\204\320\276\321\200\320\274\320\260\321\206\320\270\321\217 \320\276 \321\204\321\203\320\275\320\272\321\206\320\270\320\276\320\275\320\260\320\273\320\265 \320\272\321\203\321\200\321\201\320\276\320\262\320\276\320\271 \321\200\320\260\320\261\320\276\321\202\321\213, \320\276 \320\265\321\221 \320\270\321\201\320\277\320\276\320\273\320\275\320\270\321\202\320\265\320\273\320\265 \320\270 \321\200\321\203\320\272\320\276\320\262\320\276\320\264\320\270\321\202\320\265\320\273\321\217\321\205", nullptr));
        groupBox_3->setTitle(QApplication::translate("Programm", "\320\240\321\203\320\272\320\276\320\262\320\276\320\264\320\270\321\202\320\265\320\273\320\270 \320\270 \320\270\321\201\320\277\320\276\320\273\320\275\320\270\321\202\320\265\320\273\321\214", nullptr));
#ifndef QT_NO_TOOLTIP
        label_2->setToolTip(QApplication::translate("Programm", "<html><head/><body><p><span style=\" font-size:10pt;\">\320\237\320\273\320\260\321\202\320\276\320\275\320\276\320\262\320\260 \320\236\320\273\321\214\320\263\320\260 \320\222\320\273\320\260\320\264\320\270\320\274\320\270\321\200\320\276\320\262\320\275\320\260<br/>\320\227\320\260\320\262\320\265\320\264\321\203\321\216\321\211\320\260\321\217 \320\272\320\260\321\204\320\265\320\264\321\200\320\276\320\271 \320\222\321\213\321\207\320\270\321\201\320\273\320\270\321\202\320\265\320\273\321\214\320\275\320\276\320\271 \321\202\320\265\321\205\320\275\320\270\320\272\320\270<br/>\320\233\320\265\320\272\321\202\320\276\321\200 \320\277\320\276 \320\264\320\270\321\201\321\206\320\270\320\277\320\273\320\270\320\275\320\265 &quot;\320\241\321\202\321\200\321\203\320\272\321\202\321\203\321\200\321\213 \320\270 \320\260\320\273\320\263\320\276\321\200\320\270\321\202\320\274\321\213 \320\276\320\261\321\200\320\260\320\261\320\276\321\202\320\272\320\270 \320\264\320\260\320\275\320\275\321\213\321\205&quot;"
                        "</span></p></body></html>", nullptr));
#endif // QT_NO_TOOLTIP
        label_2->setText(QApplication::translate("Programm", "\320\240\321\203\320\272\320\276\320\262\320\276\320\264\320\270\321\202\320\265\320\273\321\214: \320\237\320\273\320\260\321\202\320\276\320\275\320\276\320\262\320\260 \320\236\320\273\321\214\320\263\320\260 \320\222\320\273\320\260\320\264\320\270\320\274\320\270\321\200\320\276\320\262\320\275\320\260", nullptr));
#ifndef QT_NO_TOOLTIP
        label->setToolTip(QApplication::translate("Programm", "<html><head/><body><p><span style=\" font-size:10pt;\">\320\241\321\202\321\203\320\264\320\265\320\275\321\202 \320\235\320\270\320\272\320\276\320\273\320\260\320\265\320\262 \320\235\320\270\320\272\320\270\321\202\320\260 \320\241\320\265\321\200\320\263\320\265\320\265\320\262\320\270\321\207<br/>\320\223\321\200\321\203\320\277\320\277\320\260 \320\230\320\232\320\221\320\236-13-17<br/>\320\232\321\203\321\200\321\201\320\276\320\262\320\260\321\217 \321\200\320\260\320\261\320\276\321\202\320\260 \320\262\320\260\321\200\320\270\320\260\320\275\321\202\320\260 3 &quot;\320\234\320\275\320\276\320\266\320\265\321\201\321\202\320\262\320\276&quot; \320\262\321\213\320\277\320\276\320\273\320\275\320\265\320\275\320\260 \320\262 \321\200\320\260\320\274\320\272\320\260\321\205 \320\224\320\270\321\201\321\206\320\270\320\277\320\273\320\270\320\275\321\213 &quot;\320\241\321\202\321\200\321\203\320\272\321\202\321\203\321\200\321\213 \320\270 \320\260\320\273\320\263\320\276\321\200\320\270\321\202\320\274"
                        "\321\213 \320\276\320\261\321\200\320\260\320\261\320\276\321\202\320\272\320\270 \320\264\320\260\320\275\320\275\321\213\321\205&quot;</span></p></body></html>", nullptr));
#endif // QT_NO_TOOLTIP
        label->setText(QApplication::translate("Programm", "\320\230\321\201\320\277\320\276\320\273\320\275\320\270\321\202\320\265\320\273\321\214: \320\235\320\270\320\272\320\276\320\273\320\260\320\265\320\262 \320\235\320\270\320\272\320\270\321\202\320\260 \320\241\320\265\321\200\320\263\320\265\320\265\320\262\320\270\321\207", nullptr));
#ifndef QT_NO_TOOLTIP
        label_3->setToolTip(QApplication::translate("Programm", "<html><head/><body><p><span style=\" font-size:10pt;\">\320\220\321\201\320\260\320\264\320\276\320\262\320\260 \320\256\320\273\320\270\321\217 \320\241\320\265\321\200\320\263\320\265\320\265\320\262\320\275\320\260<br/>\320\241\321\202\320\260\321\200\321\210\320\270\320\271 \320\277\321\200\320\265\320\277\320\276\320\264\320\260\320\262\320\260\321\202\320\265\320\273\321\214                                                       \320\241\320\265\320\274\320\270\320\275\320\260\321\200\320\270\321\201\321\202 \320\277\320\276 \320\264\320\270\321\201\321\206\320\270\320\277\320\273\320\270\320\275\320\265 &quot;\320\241\321\202\321\200\321\203\320\272\321\202\321\203\321\200\321\213 \320\270 \320\260\320\273\320\263\320\276\321\200\320\270\321\202\320\274\321\213 \320\276\320\261\321\200\320\260\320\261\320\276\321\202\320\272\320\270 \320\264\320\260\320\275\320\275\321\213\321\205&quot;</span></p></body></html>", nullptr));
#endif // QT_NO_TOOLTIP
        label_3->setText(QApplication::translate("Programm", "\320\232\320\276\320\275\321\201\321\203\320\273\321\214\321\202\320\260\320\275\321\202: \320\220\321\201\320\260\320\264\320\276\320\262\320\260 \320\256\320\273\320\270\321\217 \320\241\320\265\321\200\320\263\320\265\320\265\320\262\320\275\320\260", nullptr));
        label_4->setText(QApplication::translate("Programm", "\320\223\320\240\320\243\320\237\320\237\320\220: \320\230\320\232\320\221\320\236-13-17", nullptr));
#ifndef QT_NO_TOOLTIP
        label_5->setToolTip(QApplication::translate("Programm", "<html><head/><body><p><span style=\" font-family:'PT Sans,Helvetica,Arial,sans-serif'; font-size:x-large; color:#333333; background-color:#ffffff;\">\320\234\320\230\320\240\320\255\320\220 - \320\240\320\276\321\201\321\201\320\270\320\271\321\201\320\272\320\270\320\271 \321\202\320\265\321\205\320\275\320\276\320\273\320\276\320\263\320\270\321\207\320\265\321\201\320\272\320\270\320\271 \321\203\320\275\320\270\320\262\320\265\321\200\321\201\320\270\321\202\320\265\321\202</span></p></body></html>", nullptr));
#endif // QT_NO_TOOLTIP
        label_5->setText(QApplication::translate("Programm", "\320\240\320\242\320\243-\320\234\320\230\320\240\320\255\320\220 - 2018 \320\263.", nullptr));
        button_QT->setText(QApplication::translate("Programm", "\320\243\320\267\320\275\320\260\321\202\321\214 \320\276 QT", nullptr));
        textBrowser->setHtml(QApplication::translate("Programm", "<!DOCTYPE HTML PUBLIC \"-//W3C//DTD HTML 4.0//EN\" \"http://www.w3.org/TR/REC-html40/strict.dtd\">\n"
"<html><head><meta name=\"qrichtext\" content=\"1\" /><style type=\"text/css\">\n"
"p, li { white-space: pre-wrap; }\n"
"</style></head><body style=\" font-family:'MS Shell Dlg 2'; font-size:12pt; font-weight:400; font-style:normal;\">\n"
"<p align=\"center\" style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\">\320\222\320\260\321\201 \320\277\321\200\320\270\320\262\320\265\321\202\321\201\321\202\320\262\321\203\320\265\321\202 \320\277\321\200\320\276\320\263\321\200\320\260\320\274\320\274\320\260 \320\264\320\273\321\217 \320\277\321\200\320\276\320\262\320\265\320\264\320\265\320\275\320\270\321\217</p>\n"
"<p align=\"center\" style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\">\320\276\320\277\320\265\321\200\320\260\321\206\320\270\320\271 \320\275\320\260\320\264 \320\274"
                        "\320\275\320\276\320\266\320\265\321\201\321\202\320\262\320\260\320\274\320\270</p>\n"
"<p align=\"center\" style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\">&quot;<span style=\" font-weight:600; color:#a885ff;\">MSO - main set operations</span>&quot;</p>\n"
"<p align=\"center\" style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\">\320\222\320\260\321\200\320\270\320\260\320\275\321\202 3 - &quot;\320\234\320\275\320\276\320\266\320\265\321\201\321\202\320\262\320\276&quot;</p>\n"
"<p style=\" margin-top:12px; margin-bottom:12px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\">\320\222 \320\277\321\200\320\276\320\263\321\200\320\260\320\274\320\274\320\265 \321\200\320\265\320\260\320\273\320\270\320\267\320\276\320\262\320\260\320\275\321\213 \321\201\320\273\320\265\320\264\321\203\321\216\321\211\320\270\320\265 \320\276\320\277\320\265\321\200\320\260"
                        "\321\206\320\270\320\270:</p>\n"
"<p style=\" margin-top:12px; margin-bottom:12px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\">1. \320\241\320\276\320\267\320\264\320\260\320\275\320\270\320\265 <span style=\" color:#ff086b;\">\320\277\321\203\321\201\321\202\320\276\320\263\320\276</span> \320\274\320\275\320\276\320\266\320\265\321\201\321\202\320\262\320\260;</p>\n"
"<p style=\" margin-top:12px; margin-bottom:12px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\">2. <span style=\" color:#00557f;\">\320\222\320\272\320\273\321\216\321\207\320\265\320\275\320\270\320\265</span> \321\215\320\273\320\265\320\274\320\265\320\275\321\202\320\260 \320\262 \320\274\320\275\320\276\320\266\320\265\321\201\321\202\320\262\320\276;</p>\n"
"<p style=\" margin-top:12px; margin-bottom:12px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\">3. <span style=\" color:#aaaa7f;\">\320\230\321\201\320\272\320\273\321\216\321\207\320\265\320\275\320\270"
                        "\320\265</span> \321\215\320\273\320\265\320\274\320\265\320\275\321\202\320\260 \320\270\320\267 \320\274\320\275\320\276\320\266\320\265\321\201\321\202\320\262\320\260;</p>\n"
"<p style=\" margin-top:12px; margin-bottom:12px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\">4. \320\237\321\200\320\276\320\262\320\265\321\200\320\272\320\260 <span style=\" color:#0000ff;\">\320\262\321\205\320\276\320\266\320\264\320\265\320\275\320\270\321\217</span> \321\215\320\273\320\265\320\274\320\265\320\275\321\202\320\260 \320\262 \320\274\320\275\320\276\320\266\320\265\321\201\321\202\320\262\320\276;</p>\n"
"<p style=\" margin-top:12px; margin-bottom:12px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\">5. <span style=\" color:#555500;\">\320\236\320\261\321\212\320\265\320\264\320\270\320\275\320\265\320\275\320\270\320\265</span> \320\264\320\262\321\203\321\205 \320\274\320\275\320\276\320\266\320\265\321\201\321\202\320\262\320\276;</p>\n"
"<p style=\" margi"
                        "n-top:12px; margin-bottom:12px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\">6. <span style=\" color:#53a53d;\">\320\237\320\265\321\200\320\265\321\201\320\265\321\207\320\265\320\275\320\270\320\265</span> \320\264\320\262\321\203\321\205 \320\274\320\275\320\276\320\266\320\265\321\201\321\202\320\262;</p>\n"
"<p style=\" margin-top:12px; margin-bottom:12px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\">7. <span style=\" color:#ea8d3b;\">\320\240\320\260\320\267\320\275\320\276\321\201\321\202\321\214</span> \320\264\320\262\321\203\321\205 \320\274\320\275\320\276\320\266\320\265\321\201\321\202\320\262;</p>\n"
"<p style=\" margin-top:12px; margin-bottom:12px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\">8. \320\237\321\200\320\276\320\262\320\265\321\200\320\272\320\260 <span style=\" color:#be2b41;\">\321\200\320\260\320\262\320\265\320\275\321\201\321\202\320\262\320\260</span> \320\264\320\262\321\203\321\205 \320\274"
                        "\320\275\320\276\320\266\320\265\321\201\321\202\320\262.</p>\n"
"<p style=\" margin-top:12px; margin-bottom:12px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\">\320\222 \320\277\321\200\320\276\320\263\321\200\320\260\320\274\320\274\320\265 \321\200\320\265\320\260\320\273\320\270\320\267\320\276\320\262\320\260\320\275\320\276 \320\267\320\260\320\277\320\270\321\201\321\213\320\262\320\260\320\275\320\270\320\265 \321\201\320\276\320\267\320\264\320\260\320\275\320\275\321\213\321\205 \320\274\320\275\320\276\320\266\320\265\321\201\321\202\320\262 \320\262 \321\204\320\260\320\271\320\273, \320\260 \321\202\320\260\320\272\320\266\320\265 \321\201\321\207\320\270\321\202\321\213\320\262\320\260\320\275\320\270\320\265 \320\276\320\275\321\213\321\205 \320\277\320\276 \320\274\320\265\321\200\320\265 \320\275\320\265\320\276\320\261\321\205\320\276\320\264\320\270\320\274\320\276\321\201\321\202\320\270.</p>\n"
"<p style=\" margin-top:12px; margin-bottom:12px; margin-left:0px; m"
                        "argin-right:0px; -qt-block-indent:0; text-indent:0px;\">\320\242\320\260\320\272\320\266\320\265 \320\262 \320\274\320\275\320\276\320\266\320\265\321\201\321\202\320\262\320\260\321\205 \320\274\320\276\320\263\321\203\321\202 \320\270\321\201\320\277\320\276\320\273\321\214\320\267\320\276\320\262\320\260\321\202\321\214\321\201\321\217 \321\200\320\260\320\267\320\273\320\270\321\207\320\275\321\213\320\265 \321\202\320\270\320\277\321\213 \320\264\320\260\320\275\320\275\321\213\321\205 \320\261\320\273\320\260\320\263\320\276\320\264\320\260\321\200\321\217 \320\274\320\265\321\205\320\260\320\275\320\270\320\267\320\274\321\203 <span style=\" text-decoration: underline;\">\321\210\320\260\320\261\320\273\320\276\320\275\320\276\320\262</span>.</p>\n"
"<p style=\" margin-top:12px; margin-bottom:12px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\">\320\224\320\273\321\217 \321\205\321\200\320\260\320\275\320\265\320\275\320\270\321\217 \320\274\320\275\320\276\320\266\320\265\321"
                        "\201\321\202\320\262 \320\261\321\213\320\273\320\276 \320\270\321\201\320\277\320\276\320\273\321\214\320\267\320\276\320\262\320\260\320\275\320\276 <span style=\" text-decoration: underline;\">\320\261\320\270\320\275\320\260\321\200\320\275\320\276\320\265 \320\264\320\265\321\200\320\265\320\262\320\276 \320\277\320\276\320\270\321\201\320\272\320\260</span>, \320\272\320\260\320\272 \320\275\320\260\320\270\320\261\320\276\320\273\320\265\320\265 \321\215\321\204\321\204\320\265\320\272\321\202\320\270\320\262\320\275\320\260\321\217 \321\201\321\202\321\200\321\203\320\272\321\202\321\203\321\200\320\260 \320\264\320\273\321\217 \321\205\321\200\320\260\320\275\320\265\320\275\320\270\321\217 \320\270 \320\276\320\261\321\200\320\260\320\261\320\276\321\202\320\272\320\270 \320\264\320\260\320\275\320\275\321\213\321\205.</p></body></html>", nullptr));
    } // retranslateUi

};

namespace Ui {
    class Programm: public Ui_Programm {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_PROGRAMM_H
