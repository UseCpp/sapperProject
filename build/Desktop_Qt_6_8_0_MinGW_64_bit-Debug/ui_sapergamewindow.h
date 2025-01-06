/********************************************************************************
** Form generated from reading UI file 'sapergamewindow.ui'
**
** Created by: Qt User Interface Compiler version 6.8.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_SAPERGAMEWINDOW_H
#define UI_SAPERGAMEWINDOW_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QGroupBox>
#include <QtWidgets/QLabel>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QProgressBar>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_saperGameWindow
{
public:
    QWidget *centralwidget;
    QGroupBox *groupBox;
    QLabel *lavelPlayer_QL;
    QLabel *lvlPlayer_QL;
    QProgressBar *lvlProgress_QPB;
    QMenuBar *menubar;
    QStatusBar *statusbar;

    void setupUi(QMainWindow *saperGameWindow)
    {
        if (saperGameWindow->objectName().isEmpty())
            saperGameWindow->setObjectName("saperGameWindow");
        saperGameWindow->resize(935, 395);
        saperGameWindow->setStyleSheet(QString::fromUtf8("QMainWindow {\n"
"	background-color: #353b6b;\n"
"}"));
        centralwidget = new QWidget(saperGameWindow);
        centralwidget->setObjectName("centralwidget");
        groupBox = new QGroupBox(centralwidget);
        groupBox->setObjectName("groupBox");
        groupBox->setGeometry(QRect(40, 20, 401, 161));
        lavelPlayer_QL = new QLabel(groupBox);
        lavelPlayer_QL->setObjectName("lavelPlayer_QL");
        lavelPlayer_QL->setGeometry(QRect(150, 20, 181, 41));
        QFont font;
        font.setFamilies({QString::fromUtf8("Bahnschrift Light Condensed")});
        font.setPointSize(24);
        font.setBold(false);
        font.setItalic(false);
        font.setKerning(true);
        font.setStyleStrategy(QFont::PreferDefault);
        lavelPlayer_QL->setFont(font);
        lvlPlayer_QL = new QLabel(groupBox);
        lvlPlayer_QL->setObjectName("lvlPlayer_QL");
        lvlPlayer_QL->setGeometry(QRect(40, 60, 61, 41));
        lvlPlayer_QL->setFont(font);
        lvlProgress_QPB = new QProgressBar(groupBox);
        lvlProgress_QPB->setObjectName("lvlProgress_QPB");
        lvlProgress_QPB->setGeometry(QRect(30, 110, 118, 23));
        lvlProgress_QPB->setValue(24);
        saperGameWindow->setCentralWidget(centralwidget);
        menubar = new QMenuBar(saperGameWindow);
        menubar->setObjectName("menubar");
        menubar->setGeometry(QRect(0, 0, 935, 22));
        saperGameWindow->setMenuBar(menubar);
        statusbar = new QStatusBar(saperGameWindow);
        statusbar->setObjectName("statusbar");
        saperGameWindow->setStatusBar(statusbar);

        retranslateUi(saperGameWindow);

        QMetaObject::connectSlotsByName(saperGameWindow);
    } // setupUi

    void retranslateUi(QMainWindow *saperGameWindow)
    {
        saperGameWindow->setWindowTitle(QCoreApplication::translate("saperGameWindow", "saperGameWindow", nullptr));
        groupBox->setTitle(QString());
        lavelPlayer_QL->setText(QCoreApplication::translate("saperGameWindow", "\320\243\320\240\320\236\320\222\320\225\320\235\320\254 \320\230\320\223\320\240\320\236\320\232\320\220", nullptr));
        lvlPlayer_QL->setText(QCoreApplication::translate("saperGameWindow", "9999", nullptr));
    } // retranslateUi

};

namespace Ui {
    class saperGameWindow: public Ui_saperGameWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_SAPERGAMEWINDOW_H
