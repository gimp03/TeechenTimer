/********************************************************************************
** Form generated from reading UI file 'teechentimer.ui'
**
** Created: Sat 12. May 18:18:38 2012
**      by: Qt User Interface Compiler version 4.7.4
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_TEECHENTIMER_H
#define UI_TEECHENTIMER_H

#include <QtCore/QVariant>
#include <QtGui/QAction>
#include <QtGui/QApplication>
#include <QtGui/QButtonGroup>
#include <QtGui/QHBoxLayout>
#include <QtGui/QHeaderView>
#include <QtGui/QLCDNumber>
#include <QtGui/QLabel>
#include <QtGui/QMainWindow>
#include <QtGui/QMenu>
#include <QtGui/QMenuBar>
#include <QtGui/QPushButton>
#include <QtGui/QTimeEdit>
#include <QtGui/QWidget>

QT_BEGIN_NAMESPACE

class Ui_TeechenTimerClass
{
public:
    QWidget *centralWidget;
    QWidget *horizontalLayoutWidget;
    QHBoxLayout *horizontalLayout;
    QLCDNumber *lcdHour;
    QLabel *label;
    QLCDNumber *lcdMin;
    QLabel *label_2;
    QLCDNumber *lcdSec;
    QPushButton *btnStart;
    QTimeEdit *timeEdit;
    QLCDNumber *LCDTest;
    QMenuBar *menuBar;
    QMenu *menuDatei;
    QMenu *menu;

    void setupUi(QMainWindow *TeechenTimerClass)
    {
        if (TeechenTimerClass->objectName().isEmpty())
            TeechenTimerClass->setObjectName(QString::fromUtf8("TeechenTimerClass"));
        TeechenTimerClass->resize(480, 545);
        TeechenTimerClass->setMinimumSize(QSize(200, 75));
        TeechenTimerClass->setMaximumSize(QSize(800, 600));
#ifndef QT_NO_TOOLTIP
        TeechenTimerClass->setToolTip(QString::fromUtf8(""));
#endif // QT_NO_TOOLTIP
#ifndef QT_NO_STATUSTIP
        TeechenTimerClass->setStatusTip(QString::fromUtf8(""));
#endif // QT_NO_STATUSTIP
#ifndef QT_NO_WHATSTHIS
        TeechenTimerClass->setWhatsThis(QString::fromUtf8(""));
#endif // QT_NO_WHATSTHIS
#ifndef QT_NO_ACCESSIBILITY
        TeechenTimerClass->setAccessibleName(QString::fromUtf8(""));
#endif // QT_NO_ACCESSIBILITY
#ifndef QT_NO_ACCESSIBILITY
        TeechenTimerClass->setAccessibleDescription(QString::fromUtf8(""));
#endif // QT_NO_ACCESSIBILITY
        TeechenTimerClass->setWindowFilePath(QString::fromUtf8(""));
        centralWidget = new QWidget(TeechenTimerClass);
        centralWidget->setObjectName(QString::fromUtf8("centralWidget"));
        horizontalLayoutWidget = new QWidget(centralWidget);
        horizontalLayoutWidget->setObjectName(QString::fromUtf8("horizontalLayoutWidget"));
        horizontalLayoutWidget->setGeometry(QRect(0, 0, 481, 201));
        horizontalLayout = new QHBoxLayout(horizontalLayoutWidget);
        horizontalLayout->setSpacing(6);
        horizontalLayout->setContentsMargins(11, 11, 11, 11);
        horizontalLayout->setObjectName(QString::fromUtf8("horizontalLayout"));
        horizontalLayout->setContentsMargins(0, 0, 0, 0);
        lcdHour = new QLCDNumber(horizontalLayoutWidget);
        lcdHour->setObjectName(QString::fromUtf8("lcdHour"));
#ifndef QT_NO_TOOLTIP
        lcdHour->setToolTip(QString::fromUtf8(""));
#endif // QT_NO_TOOLTIP
        lcdHour->setFrameShadow(QFrame::Sunken);
        lcdHour->setSmallDecimalPoint(false);
        lcdHour->setNumDigits(2);
        lcdHour->setProperty("value", QVariant(0));

        horizontalLayout->addWidget(lcdHour);

        label = new QLabel(horizontalLayoutWidget);
        label->setObjectName(QString::fromUtf8("label"));
        QFont font;
        font.setPointSize(46);
        label->setFont(font);
        label->setScaledContents(false);
        label->setAlignment(Qt::AlignCenter);
        label->setIndent(-1);

        horizontalLayout->addWidget(label);

        lcdMin = new QLCDNumber(horizontalLayoutWidget);
        lcdMin->setObjectName(QString::fromUtf8("lcdMin"));
#ifndef QT_NO_TOOLTIP
        lcdMin->setToolTip(QString::fromUtf8(""));
#endif // QT_NO_TOOLTIP
        lcdMin->setFrameShadow(QFrame::Sunken);
        lcdMin->setSmallDecimalPoint(false);
        lcdMin->setNumDigits(2);
        lcdMin->setDigitCount(2);
        lcdMin->setProperty("value", QVariant(0));

        horizontalLayout->addWidget(lcdMin);

        label_2 = new QLabel(horizontalLayoutWidget);
        label_2->setObjectName(QString::fromUtf8("label_2"));
        label_2->setFont(font);
        label_2->setLineWidth(1);
        label_2->setTextFormat(Qt::RichText);
        label_2->setAlignment(Qt::AlignCenter);

        horizontalLayout->addWidget(label_2);

        lcdSec = new QLCDNumber(horizontalLayoutWidget);
        lcdSec->setObjectName(QString::fromUtf8("lcdSec"));
#ifndef QT_NO_TOOLTIP
        lcdSec->setToolTip(QString::fromUtf8(""));
#endif // QT_NO_TOOLTIP
        lcdSec->setFrameShadow(QFrame::Sunken);
        lcdSec->setSmallDecimalPoint(false);
        lcdSec->setNumDigits(2);
        lcdSec->setProperty("value", QVariant(0));

        horizontalLayout->addWidget(lcdSec);

        horizontalLayout->setStretch(0, 2);
        horizontalLayout->setStretch(2, 2);
        horizontalLayout->setStretch(4, 2);
        btnStart = new QPushButton(centralWidget);
        btnStart->setObjectName(QString::fromUtf8("btnStart"));
        btnStart->setGeometry(QRect(300, 230, 121, 31));
        timeEdit = new QTimeEdit(centralWidget);
        timeEdit->setObjectName(QString::fromUtf8("timeEdit"));
        timeEdit->setGeometry(QRect(40, 230, 141, 31));
        LCDTest = new QLCDNumber(centralWidget);
        LCDTest->setObjectName(QString::fromUtf8("LCDTest"));
        LCDTest->setGeometry(QRect(110, 340, 251, 111));
        TeechenTimerClass->setCentralWidget(centralWidget);
        menuBar = new QMenuBar(TeechenTimerClass);
        menuBar->setObjectName(QString::fromUtf8("menuBar"));
        menuBar->setGeometry(QRect(0, 0, 480, 21));
        menuDatei = new QMenu(menuBar);
        menuDatei->setObjectName(QString::fromUtf8("menuDatei"));
        menu = new QMenu(menuBar);
        menu->setObjectName(QString::fromUtf8("menu"));
        TeechenTimerClass->setMenuBar(menuBar);

        menuBar->addAction(menuDatei->menuAction());
        menuBar->addAction(menu->menuAction());

        retranslateUi(TeechenTimerClass);

        QMetaObject::connectSlotsByName(TeechenTimerClass);
    } // setupUi

    void retranslateUi(QMainWindow *TeechenTimerClass)
    {
        TeechenTimerClass->setWindowTitle(QApplication::translate("TeechenTimerClass", "TeechenTimer", 0, QApplication::UnicodeUTF8));
        label->setText(QApplication::translate("TeechenTimerClass", ":", 0, QApplication::UnicodeUTF8));
        label_2->setText(QApplication::translate("TeechenTimerClass", ":", 0, QApplication::UnicodeUTF8));
        btnStart->setText(QApplication::translate("TeechenTimerClass", "Start", 0, QApplication::UnicodeUTF8));
        menuDatei->setTitle(QApplication::translate("TeechenTimerClass", "Datei", 0, QApplication::UnicodeUTF8));
        menu->setTitle(QApplication::translate("TeechenTimerClass", "?", 0, QApplication::UnicodeUTF8));
    } // retranslateUi

};

namespace Ui {
    class TeechenTimerClass: public Ui_TeechenTimerClass {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_TEECHENTIMER_H
