/********************************************************************************
** Form generated from reading UI file 'sapergamewindow.ui'
**
** Created by: Qt User Interface Compiler version 6.8.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_SAPERGAMEWINDOW_H
#define UI_SAPERGAMEWINDOW_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QGroupBox>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QProgressBar>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QStackedWidget>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_saperGameWindow
{
public:
    QWidget *centralwidget;
    QStackedWidget *stackedWidget;
    QWidget *menu_QW;
    QGroupBox *exitGame_QGB;
    QLabel *exitGame_QL;
    QPushButton *exitGame_QPB;
    QLabel *exitGameIcon_QL;
    QGroupBox *levelPlayer_QGB;
    QLabel *levelPlayer_QL;
    QLabel *lvlPlayer_QL;
    QProgressBar *lvlProgress_QPB;
    QGroupBox *gameStatistics_QGB;
    QGroupBox *fastWin_QGB;
    QLabel *icon_QL_5;
    QLabel *line_QL_5;
    QLabel *text_QL_5;
    QLabel *winTime_QL;
    QGroupBox *win_QGB;
    QLabel *icon_QL_6;
    QLabel *line_QL_6;
    QLabel *text_QL_6;
    QLabel *winCount_QL;
    QGroupBox *lose_QGB;
    QLabel *icon_QL_7;
    QLabel *line_QL_7;
    QLabel *text_QL_7;
    QLabel *loseCount_QL;
    QGroupBox *loadGame_QGB;
    QLabel *loadTxt_QL;
    QLabel *loadGameIcon_QL;
    QGroupBox *difficultInfo_QGB;
    QLabel *icon_QL_3;
    QLabel *line_QL_3;
    QLabel *text_QL_3;
    QLabel *difficultTxt_QL;
    QGroupBox *bombInfo_QGB;
    QLabel *icon_QL_4;
    QLabel *line_QL_4;
    QLabel *text_QL_4;
    QLabel *bombInfo_QL;
    QGroupBox *moneyInfo_QGB;
    QLabel *icon_QL_2;
    QLabel *line_QL_2;
    QLabel *text_QL_2;
    QLabel *moneyCount_QL;
    QGroupBox *sessionInfo_QGB;
    QLabel *icon_QL;
    QLabel *line_QL;
    QLabel *text_QL;
    QLabel *sessionTime_QL;
    QPushButton *loadGame_QPB;
    QGroupBox *newGame_QGB;
    QLabel *newGame_QL;
    QLabel *newGameIcon_QL;
    QGroupBox *easyStart_QGB;
    QLabel *easyDescr_QL;
    QLabel *easyTxt_QL;
    QPushButton *easyStart_QPB;
    QGroupBox *midStart_QGB;
    QLabel *midTxt_QL;
    QLabel *midDescr_QL;
    QPushButton *midStart_QPB;
    QGroupBox *highStart_QGB;
    QLabel *highTxt_QL;
    QLabel *highDescr_QL;
    QPushButton *highStart_QPB;
    QWidget *game_QW;
    QPushButton *saveExitMenu_QPB;
    QGroupBox *fieldPlay_QGB;
    QGroupBox *shop_QGB;
    QGroupBox *buyFlag_QGB;
    QLabel *flagDescr_QL;
    QLabel *flagTxt_QL;
    QLabel *flagCost_QL;
    QLabel *icon_QL_9;
    QLabel *icon_QL_14;
    QPushButton *buyFlags_QPB;
    QLabel *shopTxt_QL;
    QGroupBox *randBomb_QGB;
    QLabel *easyDescr_QL_3;
    QLabel *easyTxt_QL_4;
    QLabel *opRandCost_QL;
    QLabel *icon_QL_15;
    QLabel *icon_QL_16;
    QPushButton *opRandBomb_QPB;
    QLabel *statMap_QL;
    QGroupBox *updInvent_QGB;
    QLabel *easyDescr_QL_15;
    QLabel *easyTxt_QL_28;
    QLabel *upgradeCost_QL;
    QLabel *icon_QL_39;
    QLabel *icon_QL_40;
    QPushButton *updInvent_QPB;
    QLabel *fUpgrInvFlag_QL;
    QGroupBox *buyScan_QGB;
    QLabel *easyDescr_QL_16;
    QLabel *easyTxt_QL_30;
    QLabel *scannerCost_QL;
    QLabel *icon_QL_41;
    QLabel *icon_QL_42;
    QPushButton *buyScanner_QPB;
    QGroupBox *upgrInvScan_QGB;
    QLabel *easyDescr_QL_17;
    QLabel *easyTxt_QL_32;
    QLabel *scanVisCost_QL;
    QLabel *icon_QL_43;
    QLabel *icon_QL_44;
    QPushButton *incrVisible_QPB;
    QLabel *statUpgrScan_QL;
    QGroupBox *updInventSc_QGB;
    QLabel *easyDescr_QL_18;
    QLabel *easyTxt_QL_29;
    QLabel *upgradeCostS_QL;
    QLabel *icon_QL_45;
    QLabel *icon_QL_46;
    QPushButton *updInventSc_QPB;
    QLabel *sUpgrInvFlag_QL;
    QGroupBox *gameStatisticsO_QGB;
    QGroupBox *moneyCount_QGB;
    QLabel *icon_QL_10;
    QLabel *line_QL_10;
    QLabel *text_QL_10;
    QLabel *money_QL;
    QGroupBox *timeSession_QGB;
    QLabel *icon_QL_11;
    QLabel *line_QL_11;
    QLabel *text_QL_11;
    QLabel *scans_QL;
    QGroupBox *flags_QGB;
    QLabel *icon_QL_12;
    QLabel *line_QL_12;
    QLabel *text_QL_12;
    QLabel *flags_QL;
    QPushButton *demoMove_QPB;
    QLineEdit *demoCoord_QLE;
    QGroupBox *gameStatisticsO_QGB_2;
    QLabel *icon_QL_17;
    QLabel *timeSess_QL;
    QMenuBar *menubar;
    QStatusBar *statusbar;

    void setupUi(QMainWindow *saperGameWindow)
    {
        if (saperGameWindow->objectName().isEmpty())
            saperGameWindow->setObjectName("saperGameWindow");
        saperGameWindow->resize(1145, 789);
        saperGameWindow->setStyleSheet(QString::fromUtf8("QMainWindow {\n"
"background-color: #353b6b;\n"
"}\n"
"\n"
"QGroupBox {\n"
"    border: 2px solid rgba(0,0, 25,50); /* \321\206\320\262\320\265\321\202 \321\200\320\260\320\274\320\272\320\270 */\n"
"    border-radius: 15px; /* \321\200\320\260\320\264\320\270\321\203\321\201 \321\201\320\272\321\200\321\203\320\263\320\273\320\265\320\275\320\270\321\217 */\n"
"    padding: 10px;\n"
"    background-color: qlineargradient(\n"
"        spread:pad, \n"
"        x1:0, y1:0, x2:0, y2:1, \n"
"        stop:0 #435085, \n"
"        stop:1 #2e3665\n"
"    ); /* \320\263\321\200\320\260\320\264\320\270\320\265\320\275\321\202 \320\276\321\202 #435085 \320\272 #2e3665 */\n"
"    color: white; /* \321\206\320\262\320\265\321\202 \321\202\320\265\320\272\321\201\321\202\320\260 */\n"
"}\n"
"\n"
"QPushButton {\n"
"    border: 2px solid rgba(0, 0, 25, 50); /* \321\206\320\262\320\265\321\202 \321\200\320\260\320\274\320\272\320\270 */\n"
"    border-radius: 10px; /* \321\200\320\260\320\264\320\270\321\203\321\201 \321\201\320"
                        "\272\321\200\321\203\320\263\320\273\320\265\320\275\320\270\321\217 */\n"
"    padding: 5px 15px; /* \320\262\320\275\321\203\321\202\321\200\320\265\320\275\320\275\320\270\320\265 \320\276\321\202\321\201\321\202\321\203\320\277\321\213 */\n"
"    background-color: qlineargradient(\n"
"        spread:pad, \n"
"        x1:0, y1:0, x2:0, y2:1, \n"
"        stop:0 rgba(67, 80, 133, 0.1), /* \320\262\320\265\321\200\321\205\320\275\320\270\320\271 \321\206\320\262\320\265\321\202 \321\201 \320\277\321\200\320\276\320\267\321\200\320\260\321\207\320\275\320\276\321\201\321\202\321\214\321\216 80% */\n"
"        stop:1 rgba(46, 54, 101, 0.1)  /* \320\275\320\270\320\266\320\275\320\270\320\271 \321\206\320\262\320\265\321\202 \321\201 \320\277\321\200\320\276\320\267\321\200\320\260\321\207\320\275\320\276\321\201\321\202\321\214\321\216 80% */\n"
"    ); /* \320\263\321\200\320\260\320\264\320\270\320\265\320\275\321\202 \321\201 \320\277\321\200\320\276\320\267\321\200\320\260\321\207\320\275\320\276\321\201\321"
                        "\202\321\214\321\216 */\n"
"    color: white; /* \321\206\320\262\320\265\321\202 \321\202\320\265\320\272\321\201\321\202\320\260 */\n"
"}\n"
"\n"
"QPushButton:hover {\n"
"    background-color: qlineargradient(\n"
"        spread:pad, \n"
"        x1:0, y1:0, x2:0, y2:1, \n"
"        stop:0 rgba(80, 96, 153, 0.2), /* \320\262\320\265\321\200\321\205\320\275\320\270\320\271 \321\206\320\262\320\265\321\202 \321\201 \320\277\321\200\320\276\320\267\321\200\320\260\321\207\320\275\320\276\321\201\321\202\321\214\321\216 80% */\n"
"        stop:1 rgba(58, 68, 111, 0.2)  /* \320\275\320\270\320\266\320\275\320\270\320\271 \321\206\320\262\320\265\321\202 \321\201 \320\277\321\200\320\276\320\267\321\200\320\260\321\207\320\275\320\276\321\201\321\202\321\214\321\216 80% */\n"
"    ); /* \321\201\320\262\320\265\321\202\320\273\320\265\320\265 \320\263\321\200\320\260\320\264\320\270\320\265\320\275\321\202 \320\277\321\200\320\270 \320\275\320\260\320\262\320\265\320\264\320\265\320\275\320\270\320\270 */\n"
"    "
                        "border: 2px solid rgba(67, 80, 133, 0.2); /* \320\277\321\200\320\276\320\267\321\200\320\260\321\207\320\275\320\260\321\217 \321\200\320\260\320\274\320\272\320\260 \320\277\321\200\320\270 \320\275\320\260\320\262\320\265\320\264\320\265\320\275\320\270\320\270 */\n"
"}\n"
"\n"
"QPushButton:pressed {\n"
"    background-color: qlineargradient(\n"
"        spread:pad, \n"
"        x1:0, y1:0, x2:0, y2:1, \n"
"        stop:0 rgba(46, 54, 101, 0.2), /* \320\262\320\265\321\200\321\205\320\275\320\270\320\271 \321\206\320\262\320\265\321\202 \321\201 \320\277\321\200\320\276\320\267\321\200\320\260\321\207\320\275\320\276\321\201\321\202\321\214\321\216 80% */\n"
"        stop:1 rgba(31, 38, 73, 0.2)   /* \320\275\320\270\320\266\320\275\320\270\320\271 \321\206\320\262\320\265\321\202 \321\201 \320\277\321\200\320\276\320\267\321\200\320\260\321\207\320\275\320\276\321\201\321\202\321\214\321\216 80% */\n"
"    ); /* \320\261\320\276\320\273\320\265\320\265 \321\202\321\221\320\274\320\275\321\213\320\271 \320\263"
                        "\321\200\320\260\320\264\320\270\320\265\320\275\321\202 \320\277\321\200\320\270 \320\275\320\260\320\266\320\260\321\202\320\270\320\270 */\n"
"    border: 2px solid rgba(0, 0, 25, 0.2); /* \320\267\320\260\321\202\320\265\320\274\320\275\321\221\320\275\320\275\320\260\321\217 \321\200\320\260\320\274\320\272\320\260 \320\277\321\200\320\270 \320\275\320\260\320\266\320\260\321\202\320\270\320\270 */\n"
"}\n"
""));
        centralwidget = new QWidget(saperGameWindow);
        centralwidget->setObjectName("centralwidget");
        centralwidget->setStyleSheet(QString::fromUtf8("color: white;"));
        stackedWidget = new QStackedWidget(centralwidget);
        stackedWidget->setObjectName("stackedWidget");
        stackedWidget->setGeometry(QRect(10, 0, 1121, 741));
        menu_QW = new QWidget();
        menu_QW->setObjectName("menu_QW");
        exitGame_QGB = new QGroupBox(menu_QW);
        exitGame_QGB->setObjectName("exitGame_QGB");
        exitGame_QGB->setEnabled(true);
        exitGame_QGB->setGeometry(QRect(650, 170, 171, 371));
        exitGame_QGB->setStyleSheet(QString::fromUtf8(""));
        exitGame_QL = new QLabel(exitGame_QGB);
        exitGame_QL->setObjectName("exitGame_QL");
        exitGame_QL->setGeometry(QRect(20, 20, 121, 41));
        QFont font;
        font.setFamilies({QString::fromUtf8("Bahnschrift Light Condensed")});
        font.setPointSize(18);
        font.setBold(false);
        font.setItalic(false);
        font.setKerning(true);
        font.setStyleStrategy(QFont::PreferDefault);
        exitGame_QL->setFont(font);
        exitGame_QPB = new QPushButton(exitGame_QGB);
        exitGame_QPB->setObjectName("exitGame_QPB");
        exitGame_QPB->setGeometry(QRect(0, 0, 171, 371));
        QFont font1;
        font1.setFamilies({QString::fromUtf8("Bahnschrift Light Condensed")});
        font1.setPointSize(16);
        exitGame_QPB->setFont(font1);
        exitGame_QPB->setStyleSheet(QString::fromUtf8("QPushButton {\n"
"    border: 0px; /* \321\206\320\262\320\265\321\202 \321\200\320\260\320\274\320\272\320\270 */\n"
"    border-radius: 15px; /* \321\200\320\260\320\264\320\270\321\203\321\201 \321\201\320\272\321\200\321\203\320\263\320\273\320\265\320\275\320\270\321\217 */\n"
"    padding: 5px 15px; /* \320\262\320\275\321\203\321\202\321\200\320\265\320\275\320\275\320\270\320\265 \320\276\321\202\321\201\321\202\321\203\320\277\321\213 */\n"
"    background-color: qlineargradient(\n"
"        spread:pad, \n"
"        x1:0, y1:0, x2:0, y2:1, \n"
"        stop:0 rgba(67, 80, 133, 0.1), /* \320\262\320\265\321\200\321\205\320\275\320\270\320\271 \321\206\320\262\320\265\321\202 \321\201 \320\277\321\200\320\276\320\267\321\200\320\260\321\207\320\275\320\276\321\201\321\202\321\214\321\216 80% */\n"
"        stop:1 rgba(46, 54, 101, 0.1)  /* \320\275\320\270\320\266\320\275\320\270\320\271 \321\206\320\262\320\265\321\202 \321\201 \320\277\321\200\320\276\320\267\321\200\320\260\321\207\320\275\320\276\321"
                        "\201\321\202\321\214\321\216 80% */\n"
"    ); /* \320\263\321\200\320\260\320\264\320\270\320\265\320\275\321\202 \321\201 \320\277\321\200\320\276\320\267\321\200\320\260\321\207\320\275\320\276\321\201\321\202\321\214\321\216 */\n"
"    color: white; /* \321\206\320\262\320\265\321\202 \321\202\320\265\320\272\321\201\321\202\320\260 */\n"
"}\n"
"\n"
"QPushButton:hover {\n"
"    background-color: qlineargradient(\n"
"        spread:pad, \n"
"        x1:0, y1:0, x2:0, y2:1, \n"
"        stop:0 rgba(80, 96, 153, 0.2), /* \320\262\320\265\321\200\321\205\320\275\320\270\320\271 \321\206\320\262\320\265\321\202 \321\201 \320\277\321\200\320\276\320\267\321\200\320\260\321\207\320\275\320\276\321\201\321\202\321\214\321\216 80% */\n"
"        stop:1 rgba(58, 68, 111, 0.2)  /* \320\275\320\270\320\266\320\275\320\270\320\271 \321\206\320\262\320\265\321\202 \321\201 \320\277\321\200\320\276\320\267\321\200\320\260\321\207\320\275\320\276\321\201\321\202\321\214\321\216 80% */\n"
"    ); /* \321\201\320\262\320\265"
                        "\321\202\320\273\320\265\320\265 \320\263\321\200\320\260\320\264\320\270\320\265\320\275\321\202 \320\277\321\200\320\270 \320\275\320\260\320\262\320\265\320\264\320\265\320\275\320\270\320\270 */\n"
"}\n"
"\n"
"QPushButton:pressed {\n"
"    background-color: qlineargradient(\n"
"        spread:pad, \n"
"        x1:0, y1:0, x2:0, y2:1, \n"
"        stop:0 rgba(46, 54, 101, 0.2), /* \320\262\320\265\321\200\321\205\320\275\320\270\320\271 \321\206\320\262\320\265\321\202 \321\201 \320\277\321\200\320\276\320\267\321\200\320\260\321\207\320\275\320\276\321\201\321\202\321\214\321\216 80% */\n"
"        stop:1 rgba(31, 38, 73, 0.2)   /* \320\275\320\270\320\266\320\275\320\270\320\271 \321\206\320\262\320\265\321\202 \321\201 \320\277\321\200\320\276\320\267\321\200\320\260\321\207\320\275\320\276\321\201\321\202\321\214\321\216 80% */\n"
"    ); /* \320\261\320\276\320\273\320\265\320\265 \321\202\321\221\320\274\320\275\321\213\320\271 \320\263\321\200\320\260\320\264\320\270\320\265\320\275\321\202 \320\277\321"
                        "\200\320\270 \320\275\320\260\320\266\320\260\321\202\320\270\320\270 */\n"
"}"));
        exitGameIcon_QL = new QLabel(exitGame_QGB);
        exitGameIcon_QL->setObjectName("exitGameIcon_QL");
        exitGameIcon_QL->setGeometry(QRect(60, 170, 121, 151));
        exitGameIcon_QL->setPixmap(QPixmap(QString::fromUtf8(":/RAWDATA/menu/closeGameIcon.png")));
        exitGameIcon_QL->setScaledContents(true);
        exitGame_QL->raise();
        exitGameIcon_QL->raise();
        exitGame_QPB->raise();
        levelPlayer_QGB = new QGroupBox(menu_QW);
        levelPlayer_QGB->setObjectName("levelPlayer_QGB");
        levelPlayer_QGB->setEnabled(true);
        levelPlayer_QGB->setGeometry(QRect(10, 10, 401, 151));
        levelPlayer_QGB->setStyleSheet(QString::fromUtf8(""));
        levelPlayer_QL = new QLabel(levelPlayer_QGB);
        levelPlayer_QL->setObjectName("levelPlayer_QL");
        levelPlayer_QL->setGeometry(QRect(170, 20, 161, 41));
        QFont font2;
        font2.setFamilies({QString::fromUtf8("Bahnschrift Light Condensed")});
        font2.setPointSize(20);
        font2.setBold(false);
        font2.setItalic(false);
        font2.setKerning(true);
        font2.setStyleStrategy(QFont::PreferDefault);
        levelPlayer_QL->setFont(font2);
        lvlPlayer_QL = new QLabel(levelPlayer_QGB);
        lvlPlayer_QL->setObjectName("lvlPlayer_QL");
        lvlPlayer_QL->setGeometry(QRect(40, 40, 71, 41));
        QFont font3;
        font3.setFamilies({QString::fromUtf8("Bahnschrift Light Condensed")});
        font3.setPointSize(32);
        font3.setBold(false);
        font3.setItalic(false);
        font3.setKerning(true);
        font3.setStyleStrategy(QFont::PreferDefault);
        lvlPlayer_QL->setFont(font3);
        lvlPlayer_QL->setStyleSheet(QString::fromUtf8("QLabel {\n"
"    qproperty-alignment: 'AlignCenter'; /* \320\262\321\213\321\200\320\260\320\262\320\275\320\270\320\262\320\260\320\275\320\270\320\265 \321\202\320\265\320\272\321\201\321\202\320\260 \320\277\320\276 \321\206\320\265\320\275\321\202\321\200\321\203 */\n"
"}\n"
""));
        lvlProgress_QPB = new QProgressBar(levelPlayer_QGB);
        lvlProgress_QPB->setObjectName("lvlProgress_QPB");
        lvlProgress_QPB->setGeometry(QRect(40, 90, 71, 16));
        lvlProgress_QPB->setStyleSheet(QString::fromUtf8("QProgressBar {\n"
"    border: 1px solid #252c56; /* \321\200\320\260\320\274\320\272\320\260 \320\277\321\200\320\276\320\263\321\200\320\265\321\201\321\201-\320\261\320\260\321\200\320\260 */\n"
"    background-color: #252c56; /* \321\206\320\262\320\265\321\202 \321\204\320\276\320\275\320\260 \320\277\321\200\320\276\320\263\321\200\320\265\321\201\321\201-\320\261\320\260\321\200\320\260 */\n"
"    border-radius: 5px; /* \321\200\320\260\320\264\320\270\321\203\321\201 \321\201\320\272\321\200\321\203\320\263\320\273\320\265\320\275\320\270\321\217 */\n"
"    text-align: center; /* \320\262\321\213\321\200\320\260\320\262\320\275\320\270\320\262\320\260\320\275\320\270\320\265 \321\202\320\265\320\272\321\201\321\202\320\260 \320\277\320\276 \321\206\320\265\320\275\321\202\321\200\321\203 */\n"
"    color: white; /* \321\206\320\262\320\265\321\202 \321\202\320\265\320\272\321\201\321\202\320\260 \320\262\320\275\321\203\321\202\321\200\320\270 \320\277\321\200\320\276\320\263\321\200\320\265\321\201\321"
                        "\201-\320\261\320\260\321\200\320\260 */\n"
"}\n"
"\n"
"QProgressBar::chunk {\n"
"    background-color: #3cd447; /* \321\206\320\262\320\265\321\202 \320\267\320\260\320\277\320\276\320\273\320\275\320\265\320\275\320\275\320\276\320\271 \321\207\320\260\321\201\321\202\320\270 \320\277\321\200\320\276\320\263\321\200\320\265\321\201\321\201-\320\261\320\260\321\200\320\260 */\n"
"    border-radius: 5px; /* \321\200\320\260\320\264\320\270\321\203\321\201 \321\201\320\272\321\200\321\203\320\263\320\273\320\265\320\275\320\270\321\217 \320\267\320\260\320\277\320\276\320\273\320\275\320\265\320\275\320\275\320\276\320\271 \321\207\320\260\321\201\321\202\320\270 */\n"
"}\n"
""));
        lvlProgress_QPB->setValue(0);
        lvlProgress_QPB->setTextVisible(false);
        gameStatistics_QGB = new QGroupBox(menu_QW);
        gameStatistics_QGB->setObjectName("gameStatistics_QGB");
        gameStatistics_QGB->setEnabled(true);
        gameStatistics_QGB->setGeometry(QRect(420, 10, 401, 151));
        gameStatistics_QGB->setStyleSheet(QString::fromUtf8(""));
        fastWin_QGB = new QGroupBox(gameStatistics_QGB);
        fastWin_QGB->setObjectName("fastWin_QGB");
        fastWin_QGB->setGeometry(QRect(10, -30, 101, 171));
        fastWin_QGB->setStyleSheet(QString::fromUtf8("QGroupBox {\n"
"	border: 0px;\n"
"	background-color: rgba(0,0,0,0.0);\n"
"}\n"
"\n"
"QLabel {\n"
"    qproperty-alignment: 'AlignCenter'; /* \320\262\321\213\321\200\320\260\320\262\320\275\320\270\320\262\320\260\320\275\320\270\320\265 \321\202\320\265\320\272\321\201\321\202\320\260 \320\277\320\276 \321\206\320\265\320\275\321\202\321\200\321\203 */\n"
"}\n"
""));
        icon_QL_5 = new QLabel(fastWin_QGB);
        icon_QL_5->setObjectName("icon_QL_5");
        icon_QL_5->setGeometry(QRect(25, 39, 61, 52));
        QFont font4;
        font4.setFamilies({QString::fromUtf8("Bahnschrift Light Condensed")});
        font4.setPointSize(13);
        font4.setBold(false);
        font4.setItalic(false);
        font4.setKerning(true);
        font4.setStyleStrategy(QFont::PreferDefault);
        icon_QL_5->setFont(font4);
        icon_QL_5->setPixmap(QPixmap(QString::fromUtf8(":/RAWDATA/menu/speedIcon.png")));
        icon_QL_5->setScaledContents(true);
        line_QL_5 = new QLabel(fastWin_QGB);
        line_QL_5->setObjectName("line_QL_5");
        line_QL_5->setGeometry(QRect(20, 138, 71, 2));
        line_QL_5->setMaximumSize(QSize(16777215, 2));
        line_QL_5->setFont(font4);
        line_QL_5->setStyleSheet(QString::fromUtf8("border: 1px solid white;"));
        text_QL_5 = new QLabel(fastWin_QGB);
        text_QL_5->setObjectName("text_QL_5");
        text_QL_5->setGeometry(QRect(0, 97, 111, 35));
        QFont font5;
        font5.setFamilies({QString::fromUtf8("Bahnschrift Light Condensed")});
        font5.setPointSize(12);
        font5.setBold(false);
        font5.setItalic(false);
        font5.setKerning(true);
        font5.setStyleStrategy(QFont::PreferDefault);
        text_QL_5->setFont(font5);
        winTime_QL = new QLabel(fastWin_QGB);
        winTime_QL->setObjectName("winTime_QL");
        winTime_QL->setGeometry(QRect(20, 146, 71, 16));
        winTime_QL->setFont(font5);
        win_QGB = new QGroupBox(gameStatistics_QGB);
        win_QGB->setObjectName("win_QGB");
        win_QGB->setGeometry(QRect(100, -30, 101, 171));
        win_QGB->setStyleSheet(QString::fromUtf8("QGroupBox {\n"
"	border: 0px;\n"
"	background-color: rgba(0,0,0,0.0);\n"
"}\n"
"\n"
"QLabel {\n"
"    qproperty-alignment: 'AlignCenter'; /* \320\262\321\213\321\200\320\260\320\262\320\275\320\270\320\262\320\260\320\275\320\270\320\265 \321\202\320\265\320\272\321\201\321\202\320\260 \320\277\320\276 \321\206\320\265\320\275\321\202\321\200\321\203 */\n"
"}\n"
""));
        icon_QL_6 = new QLabel(win_QGB);
        icon_QL_6->setObjectName("icon_QL_6");
        icon_QL_6->setGeometry(QRect(35, 39, 41, 51));
        icon_QL_6->setFont(font4);
        icon_QL_6->setPixmap(QPixmap(QString::fromUtf8(":/RAWDATA/menu/winIcon.png")));
        icon_QL_6->setScaledContents(true);
        line_QL_6 = new QLabel(win_QGB);
        line_QL_6->setObjectName("line_QL_6");
        line_QL_6->setGeometry(QRect(20, 138, 71, 2));
        line_QL_6->setMaximumSize(QSize(16777215, 2));
        line_QL_6->setFont(font4);
        line_QL_6->setStyleSheet(QString::fromUtf8("border: 1px solid white;"));
        text_QL_6 = new QLabel(win_QGB);
        text_QL_6->setObjectName("text_QL_6");
        text_QL_6->setGeometry(QRect(0, 97, 111, 35));
        text_QL_6->setFont(font5);
        winCount_QL = new QLabel(win_QGB);
        winCount_QL->setObjectName("winCount_QL");
        winCount_QL->setGeometry(QRect(20, 146, 71, 16));
        winCount_QL->setFont(font5);
        lose_QGB = new QGroupBox(gameStatistics_QGB);
        lose_QGB->setObjectName("lose_QGB");
        lose_QGB->setGeometry(QRect(190, -30, 101, 171));
        lose_QGB->setStyleSheet(QString::fromUtf8("QGroupBox {\n"
"	border: 0px;\n"
"	background-color: rgba(0,0,0,0.0);\n"
"}\n"
"\n"
"QLabel {\n"
"    qproperty-alignment: 'AlignCenter'; /* \320\262\321\213\321\200\320\260\320\262\320\275\320\270\320\262\320\260\320\275\320\270\320\265 \321\202\320\265\320\272\321\201\321\202\320\260 \320\277\320\276 \321\206\320\265\320\275\321\202\321\200\321\203 */\n"
"}\n"
""));
        icon_QL_7 = new QLabel(lose_QGB);
        icon_QL_7->setObjectName("icon_QL_7");
        icon_QL_7->setGeometry(QRect(30, 39, 44, 44));
        icon_QL_7->setFont(font4);
        icon_QL_7->setPixmap(QPixmap(QString::fromUtf8(":/RAWDATA/menu/loseIcon.png")));
        icon_QL_7->setScaledContents(true);
        line_QL_7 = new QLabel(lose_QGB);
        line_QL_7->setObjectName("line_QL_7");
        line_QL_7->setGeometry(QRect(20, 138, 71, 2));
        line_QL_7->setMaximumSize(QSize(16777215, 2));
        line_QL_7->setFont(font4);
        line_QL_7->setStyleSheet(QString::fromUtf8("border: 1px solid white;"));
        text_QL_7 = new QLabel(lose_QGB);
        text_QL_7->setObjectName("text_QL_7");
        text_QL_7->setGeometry(QRect(0, 97, 111, 35));
        text_QL_7->setFont(font5);
        loseCount_QL = new QLabel(lose_QGB);
        loseCount_QL->setObjectName("loseCount_QL");
        loseCount_QL->setGeometry(QRect(20, 146, 71, 16));
        loseCount_QL->setFont(font5);
        loadGame_QGB = new QGroupBox(menu_QW);
        loadGame_QGB->setObjectName("loadGame_QGB");
        loadGame_QGB->setEnabled(true);
        loadGame_QGB->setGeometry(QRect(10, 170, 631, 161));
        loadGame_QGB->setStyleSheet(QString::fromUtf8(""));
        loadTxt_QL = new QLabel(loadGame_QGB);
        loadTxt_QL->setObjectName("loadTxt_QL");
        loadTxt_QL->setGeometry(QRect(30, 20, 261, 41));
        loadTxt_QL->setFont(font);
        loadGameIcon_QL = new QLabel(loadGame_QGB);
        loadGameIcon_QL->setObjectName("loadGameIcon_QL");
        loadGameIcon_QL->setGeometry(QRect(0, 10, 121, 151));
        loadGameIcon_QL->setPixmap(QPixmap(QString::fromUtf8(":/RAWDATA/menu/sdCardIcon.png")));
        loadGameIcon_QL->setScaledContents(true);
        difficultInfo_QGB = new QGroupBox(loadGame_QGB);
        difficultInfo_QGB->setObjectName("difficultInfo_QGB");
        difficultInfo_QGB->setGeometry(QRect(300, -20, 71, 171));
        difficultInfo_QGB->setStyleSheet(QString::fromUtf8("QGroupBox {\n"
"	border: 0px;\n"
"	background-color: rgba(0,0,0,0.0);\n"
"}\n"
"\n"
"QLabel {\n"
"    qproperty-alignment: 'AlignCenter'; /* \320\262\321\213\321\200\320\260\320\262\320\275\320\270\320\262\320\260\320\275\320\270\320\265 \321\202\320\265\320\272\321\201\321\202\320\260 \320\277\320\276 \321\206\320\265\320\275\321\202\321\200\321\203 */\n"
"}\n"
""));
        icon_QL_3 = new QLabel(difficultInfo_QGB);
        icon_QL_3->setObjectName("icon_QL_3");
        icon_QL_3->setGeometry(QRect(10, 39, 51, 52));
        icon_QL_3->setFont(font4);
        icon_QL_3->setPixmap(QPixmap(QString::fromUtf8(":/RAWDATA/menu/difficultIcon.png")));
        icon_QL_3->setScaledContents(true);
        line_QL_3 = new QLabel(difficultInfo_QGB);
        line_QL_3->setObjectName("line_QL_3");
        line_QL_3->setGeometry(QRect(0, 138, 71, 2));
        line_QL_3->setMaximumSize(QSize(16777215, 2));
        line_QL_3->setFont(font4);
        line_QL_3->setStyleSheet(QString::fromUtf8("border: 1px solid white;"));
        text_QL_3 = new QLabel(difficultInfo_QGB);
        text_QL_3->setObjectName("text_QL_3");
        text_QL_3->setGeometry(QRect(0, 97, 71, 35));
        text_QL_3->setFont(font5);
        difficultTxt_QL = new QLabel(difficultInfo_QGB);
        difficultTxt_QL->setObjectName("difficultTxt_QL");
        difficultTxt_QL->setGeometry(QRect(0, 146, 71, 16));
        difficultTxt_QL->setFont(font5);
        bombInfo_QGB = new QGroupBox(loadGame_QGB);
        bombInfo_QGB->setObjectName("bombInfo_QGB");
        bombInfo_QGB->setGeometry(QRect(380, -20, 71, 171));
        bombInfo_QGB->setStyleSheet(QString::fromUtf8("QGroupBox {\n"
"	border: 0px;\n"
"	background-color: rgba(0,0,0,0.0);\n"
"}\n"
"\n"
"QLabel {\n"
"    qproperty-alignment: 'AlignCenter'; /* \320\262\321\213\321\200\320\260\320\262\320\275\320\270\320\262\320\260\320\275\320\270\320\265 \321\202\320\265\320\272\321\201\321\202\320\260 \320\277\320\276 \321\206\320\265\320\275\321\202\321\200\321\203 */\n"
"}\n"
""));
        icon_QL_4 = new QLabel(bombInfo_QGB);
        icon_QL_4->setObjectName("icon_QL_4");
        icon_QL_4->setGeometry(QRect(10, 39, 51, 52));
        icon_QL_4->setFont(font4);
        icon_QL_4->setPixmap(QPixmap(QString::fromUtf8(":/RAWDATA/menu/bombIcon.png")));
        icon_QL_4->setScaledContents(true);
        line_QL_4 = new QLabel(bombInfo_QGB);
        line_QL_4->setObjectName("line_QL_4");
        line_QL_4->setGeometry(QRect(0, 138, 71, 2));
        line_QL_4->setMaximumSize(QSize(16777215, 2));
        line_QL_4->setFont(font4);
        line_QL_4->setStyleSheet(QString::fromUtf8("border: 1px solid white;"));
        text_QL_4 = new QLabel(bombInfo_QGB);
        text_QL_4->setObjectName("text_QL_4");
        text_QL_4->setGeometry(QRect(0, 97, 71, 35));
        text_QL_4->setFont(font5);
        bombInfo_QL = new QLabel(bombInfo_QGB);
        bombInfo_QL->setObjectName("bombInfo_QL");
        bombInfo_QL->setGeometry(QRect(0, 146, 71, 16));
        bombInfo_QL->setFont(font5);
        moneyInfo_QGB = new QGroupBox(loadGame_QGB);
        moneyInfo_QGB->setObjectName("moneyInfo_QGB");
        moneyInfo_QGB->setGeometry(QRect(460, -20, 71, 171));
        moneyInfo_QGB->setStyleSheet(QString::fromUtf8("QGroupBox {\n"
"	border: 0px;\n"
"	background-color: rgba(0,0,0,0.0);\n"
"}\n"
"\n"
"QLabel {\n"
"    qproperty-alignment: 'AlignCenter'; /* \320\262\321\213\321\200\320\260\320\262\320\275\320\270\320\262\320\260\320\275\320\270\320\265 \321\202\320\265\320\272\321\201\321\202\320\260 \320\277\320\276 \321\206\320\265\320\275\321\202\321\200\321\203 */\n"
"}\n"
""));
        icon_QL_2 = new QLabel(moneyInfo_QGB);
        icon_QL_2->setObjectName("icon_QL_2");
        icon_QL_2->setGeometry(QRect(10, 39, 51, 52));
        icon_QL_2->setFont(font4);
        icon_QL_2->setPixmap(QPixmap(QString::fromUtf8(":/RAWDATA/menu/moneyIcon.png")));
        icon_QL_2->setScaledContents(true);
        line_QL_2 = new QLabel(moneyInfo_QGB);
        line_QL_2->setObjectName("line_QL_2");
        line_QL_2->setGeometry(QRect(0, 138, 71, 2));
        line_QL_2->setMaximumSize(QSize(16777215, 2));
        line_QL_2->setFont(font4);
        line_QL_2->setStyleSheet(QString::fromUtf8("border: 1px solid white;"));
        text_QL_2 = new QLabel(moneyInfo_QGB);
        text_QL_2->setObjectName("text_QL_2");
        text_QL_2->setGeometry(QRect(0, 97, 71, 35));
        text_QL_2->setFont(font5);
        moneyCount_QL = new QLabel(moneyInfo_QGB);
        moneyCount_QL->setObjectName("moneyCount_QL");
        moneyCount_QL->setGeometry(QRect(0, 146, 71, 16));
        moneyCount_QL->setFont(font5);
        sessionInfo_QGB = new QGroupBox(loadGame_QGB);
        sessionInfo_QGB->setObjectName("sessionInfo_QGB");
        sessionInfo_QGB->setGeometry(QRect(540, -20, 71, 171));
        sessionInfo_QGB->setStyleSheet(QString::fromUtf8("QGroupBox {\n"
"	border: 0px;\n"
"	background-color: rgba(0,0,0,0.0);\n"
"}\n"
"\n"
"QLabel {\n"
"    qproperty-alignment: 'AlignCenter'; /* \320\262\321\213\321\200\320\260\320\262\320\275\320\270\320\262\320\260\320\275\320\270\320\265 \321\202\320\265\320\272\321\201\321\202\320\260 \320\277\320\276 \321\206\320\265\320\275\321\202\321\200\321\203 */\n"
"}\n"
""));
        icon_QL = new QLabel(sessionInfo_QGB);
        icon_QL->setObjectName("icon_QL");
        icon_QL->setGeometry(QRect(10, 39, 51, 52));
        icon_QL->setFont(font4);
        icon_QL->setPixmap(QPixmap(QString::fromUtf8(":/RAWDATA/menu/timeIcon.png")));
        icon_QL->setScaledContents(true);
        line_QL = new QLabel(sessionInfo_QGB);
        line_QL->setObjectName("line_QL");
        line_QL->setGeometry(QRect(0, 138, 71, 2));
        line_QL->setMaximumSize(QSize(16777215, 2));
        line_QL->setFont(font4);
        line_QL->setStyleSheet(QString::fromUtf8("border: 1px solid white;"));
        text_QL = new QLabel(sessionInfo_QGB);
        text_QL->setObjectName("text_QL");
        text_QL->setGeometry(QRect(0, 97, 71, 35));
        text_QL->setFont(font5);
        sessionTime_QL = new QLabel(sessionInfo_QGB);
        sessionTime_QL->setObjectName("sessionTime_QL");
        sessionTime_QL->setGeometry(QRect(0, 146, 71, 16));
        sessionTime_QL->setFont(font5);
        loadGame_QPB = new QPushButton(loadGame_QGB);
        loadGame_QPB->setObjectName("loadGame_QPB");
        loadGame_QPB->setGeometry(QRect(0, 0, 631, 161));
        loadGame_QPB->setFont(font1);
        loadGame_QPB->setStyleSheet(QString::fromUtf8("QPushButton {\n"
"    border: 0px; /* \321\206\320\262\320\265\321\202 \321\200\320\260\320\274\320\272\320\270 */\n"
"    border-radius: 15px; /* \321\200\320\260\320\264\320\270\321\203\321\201 \321\201\320\272\321\200\321\203\320\263\320\273\320\265\320\275\320\270\321\217 */\n"
"    padding: 5px 15px; /* \320\262\320\275\321\203\321\202\321\200\320\265\320\275\320\275\320\270\320\265 \320\276\321\202\321\201\321\202\321\203\320\277\321\213 */\n"
"    background-color: qlineargradient(\n"
"        spread:pad, \n"
"        x1:0, y1:0, x2:0, y2:1, \n"
"        stop:0 rgba(67, 80, 133, 0.1), /* \320\262\320\265\321\200\321\205\320\275\320\270\320\271 \321\206\320\262\320\265\321\202 \321\201 \320\277\321\200\320\276\320\267\321\200\320\260\321\207\320\275\320\276\321\201\321\202\321\214\321\216 80% */\n"
"        stop:1 rgba(46, 54, 101, 0.1)  /* \320\275\320\270\320\266\320\275\320\270\320\271 \321\206\320\262\320\265\321\202 \321\201 \320\277\321\200\320\276\320\267\321\200\320\260\321\207\320\275\320\276\321"
                        "\201\321\202\321\214\321\216 80% */\n"
"    ); /* \320\263\321\200\320\260\320\264\320\270\320\265\320\275\321\202 \321\201 \320\277\321\200\320\276\320\267\321\200\320\260\321\207\320\275\320\276\321\201\321\202\321\214\321\216 */\n"
"    color: white; /* \321\206\320\262\320\265\321\202 \321\202\320\265\320\272\321\201\321\202\320\260 */\n"
"}\n"
"\n"
"QPushButton:hover {\n"
"    background-color: qlineargradient(\n"
"        spread:pad, \n"
"        x1:0, y1:0, x2:0, y2:1, \n"
"        stop:0 rgba(80, 96, 153, 0.2), /* \320\262\320\265\321\200\321\205\320\275\320\270\320\271 \321\206\320\262\320\265\321\202 \321\201 \320\277\321\200\320\276\320\267\321\200\320\260\321\207\320\275\320\276\321\201\321\202\321\214\321\216 80% */\n"
"        stop:1 rgba(58, 68, 111, 0.2)  /* \320\275\320\270\320\266\320\275\320\270\320\271 \321\206\320\262\320\265\321\202 \321\201 \320\277\321\200\320\276\320\267\321\200\320\260\321\207\320\275\320\276\321\201\321\202\321\214\321\216 80% */\n"
"    ); /* \321\201\320\262\320\265"
                        "\321\202\320\273\320\265\320\265 \320\263\321\200\320\260\320\264\320\270\320\265\320\275\321\202 \320\277\321\200\320\270 \320\275\320\260\320\262\320\265\320\264\320\265\320\275\320\270\320\270 */\n"
"}\n"
"\n"
"QPushButton:pressed {\n"
"    background-color: qlineargradient(\n"
"        spread:pad, \n"
"        x1:0, y1:0, x2:0, y2:1, \n"
"        stop:0 rgba(46, 54, 101, 0.2), /* \320\262\320\265\321\200\321\205\320\275\320\270\320\271 \321\206\320\262\320\265\321\202 \321\201 \320\277\321\200\320\276\320\267\321\200\320\260\321\207\320\275\320\276\321\201\321\202\321\214\321\216 80% */\n"
"        stop:1 rgba(31, 38, 73, 0.2)   /* \320\275\320\270\320\266\320\275\320\270\320\271 \321\206\320\262\320\265\321\202 \321\201 \320\277\321\200\320\276\320\267\321\200\320\260\321\207\320\275\320\276\321\201\321\202\321\214\321\216 80% */\n"
"    ); /* \320\261\320\276\320\273\320\265\320\265 \321\202\321\221\320\274\320\275\321\213\320\271 \320\263\321\200\320\260\320\264\320\270\320\265\320\275\321\202 \320\277\321"
                        "\200\320\270 \320\275\320\260\320\266\320\260\321\202\320\270\320\270 */\n"
"}"));
        loadGameIcon_QL->raise();
        difficultInfo_QGB->raise();
        bombInfo_QGB->raise();
        moneyInfo_QGB->raise();
        sessionInfo_QGB->raise();
        loadTxt_QL->raise();
        loadGame_QPB->raise();
        newGame_QGB = new QGroupBox(menu_QW);
        newGame_QGB->setObjectName("newGame_QGB");
        newGame_QGB->setEnabled(true);
        newGame_QGB->setGeometry(QRect(10, 340, 631, 201));
        newGame_QGB->setStyleSheet(QString::fromUtf8(""));
        newGame_QL = new QLabel(newGame_QGB);
        newGame_QL->setObjectName("newGame_QL");
        newGame_QL->setGeometry(QRect(30, 20, 261, 41));
        newGame_QL->setFont(font);
        newGameIcon_QL = new QLabel(newGame_QGB);
        newGameIcon_QL->setObjectName("newGameIcon_QL");
        newGameIcon_QL->setGeometry(QRect(0, 30, 131, 151));
        newGameIcon_QL->setPixmap(QPixmap(QString::fromUtf8(":/RAWDATA/menu/newGameIcon.png")));
        newGameIcon_QL->setScaledContents(true);
        easyStart_QGB = new QGroupBox(newGame_QGB);
        easyStart_QGB->setObjectName("easyStart_QGB");
        easyStart_QGB->setEnabled(true);
        easyStart_QGB->setGeometry(QRect(20, 80, 190, 107));
        easyStart_QGB->setStyleSheet(QString::fromUtf8("QLabel {\n"
"    qproperty-alignment: 'AlignCenter'; /* \320\262\321\213\321\200\320\260\320\262\320\275\320\270\320\262\320\260\320\275\320\270\320\265 \321\202\320\265\320\272\321\201\321\202\320\260 \320\277\320\276 \321\206\320\265\320\275\321\202\321\200\321\203 */\n"
"}\n"
""));
        easyDescr_QL = new QLabel(easyStart_QGB);
        easyDescr_QL->setObjectName("easyDescr_QL");
        easyDescr_QL->setGeometry(QRect(1, 41, 181, 24));
        easyDescr_QL->setFont(font);
        easyTxt_QL = new QLabel(easyStart_QGB);
        easyTxt_QL->setObjectName("easyTxt_QL");
        easyTxt_QL->setGeometry(QRect(-2, 71, 191, 20));
        QFont font6;
        font6.setFamilies({QString::fromUtf8("Bahnschrift Light Condensed")});
        font6.setPointSize(11);
        font6.setBold(false);
        font6.setItalic(false);
        font6.setKerning(true);
        font6.setStyleStrategy(QFont::PreferDefault);
        easyTxt_QL->setFont(font6);
        easyStart_QPB = new QPushButton(easyStart_QGB);
        easyStart_QPB->setObjectName("easyStart_QPB");
        easyStart_QPB->setGeometry(QRect(0, 3, 191, 101));
        easyStart_QPB->setFont(font1);
        easyStart_QPB->setStyleSheet(QString::fromUtf8("QPushButton {\n"
"    border: 0px; /* \321\206\320\262\320\265\321\202 \321\200\320\260\320\274\320\272\320\270 */\n"
"    border-radius: 15px; /* \321\200\320\260\320\264\320\270\321\203\321\201 \321\201\320\272\321\200\321\203\320\263\320\273\320\265\320\275\320\270\321\217 */\n"
"    padding: 5px 15px; /* \320\262\320\275\321\203\321\202\321\200\320\265\320\275\320\275\320\270\320\265 \320\276\321\202\321\201\321\202\321\203\320\277\321\213 */\n"
"    background-color: qlineargradient(\n"
"        spread:pad, \n"
"        x1:0, y1:0, x2:0, y2:1, \n"
"        stop:0 rgba(67, 80, 133, 0.1), /* \320\262\320\265\321\200\321\205\320\275\320\270\320\271 \321\206\320\262\320\265\321\202 \321\201 \320\277\321\200\320\276\320\267\321\200\320\260\321\207\320\275\320\276\321\201\321\202\321\214\321\216 80% */\n"
"        stop:1 rgba(46, 54, 101, 0.1)  /* \320\275\320\270\320\266\320\275\320\270\320\271 \321\206\320\262\320\265\321\202 \321\201 \320\277\321\200\320\276\320\267\321\200\320\260\321\207\320\275\320\276\321"
                        "\201\321\202\321\214\321\216 80% */\n"
"    ); /* \320\263\321\200\320\260\320\264\320\270\320\265\320\275\321\202 \321\201 \320\277\321\200\320\276\320\267\321\200\320\260\321\207\320\275\320\276\321\201\321\202\321\214\321\216 */\n"
"    color: white; /* \321\206\320\262\320\265\321\202 \321\202\320\265\320\272\321\201\321\202\320\260 */\n"
"}\n"
"\n"
"QPushButton:hover {\n"
"    background-color: qlineargradient(\n"
"        spread:pad, \n"
"        x1:0, y1:0, x2:0, y2:1, \n"
"        stop:0 rgba(80, 96, 153, 0.2), /* \320\262\320\265\321\200\321\205\320\275\320\270\320\271 \321\206\320\262\320\265\321\202 \321\201 \320\277\321\200\320\276\320\267\321\200\320\260\321\207\320\275\320\276\321\201\321\202\321\214\321\216 80% */\n"
"        stop:1 rgba(58, 68, 111, 0.2)  /* \320\275\320\270\320\266\320\275\320\270\320\271 \321\206\320\262\320\265\321\202 \321\201 \320\277\321\200\320\276\320\267\321\200\320\260\321\207\320\275\320\276\321\201\321\202\321\214\321\216 80% */\n"
"    ); /* \321\201\320\262\320\265"
                        "\321\202\320\273\320\265\320\265 \320\263\321\200\320\260\320\264\320\270\320\265\320\275\321\202 \320\277\321\200\320\270 \320\275\320\260\320\262\320\265\320\264\320\265\320\275\320\270\320\270 */\n"
"}\n"
"\n"
"QPushButton:pressed {\n"
"    background-color: qlineargradient(\n"
"        spread:pad, \n"
"        x1:0, y1:0, x2:0, y2:1, \n"
"        stop:0 rgba(46, 54, 101, 0.2), /* \320\262\320\265\321\200\321\205\320\275\320\270\320\271 \321\206\320\262\320\265\321\202 \321\201 \320\277\321\200\320\276\320\267\321\200\320\260\321\207\320\275\320\276\321\201\321\202\321\214\321\216 80% */\n"
"        stop:1 rgba(31, 38, 73, 0.2)   /* \320\275\320\270\320\266\320\275\320\270\320\271 \321\206\320\262\320\265\321\202 \321\201 \320\277\321\200\320\276\320\267\321\200\320\260\321\207\320\275\320\276\321\201\321\202\321\214\321\216 80% */\n"
"    ); /* \320\261\320\276\320\273\320\265\320\265 \321\202\321\221\320\274\320\275\321\213\320\271 \320\263\321\200\320\260\320\264\320\270\320\265\320\275\321\202 \320\277\321"
                        "\200\320\270 \320\275\320\260\320\266\320\260\321\202\320\270\320\270 */\n"
"}"));
        midStart_QGB = new QGroupBox(newGame_QGB);
        midStart_QGB->setObjectName("midStart_QGB");
        midStart_QGB->setEnabled(true);
        midStart_QGB->setGeometry(QRect(225, 40, 190, 151));
        midStart_QGB->setStyleSheet(QString::fromUtf8("QLabel {\n"
"    qproperty-alignment: 'AlignCenter'; /* \320\262\321\213\321\200\320\260\320\262\320\275\320\270\320\262\320\260\320\275\320\270\320\265 \321\202\320\265\320\272\321\201\321\202\320\260 \320\277\320\276 \321\206\320\265\320\275\321\202\321\200\321\203 */\n"
"}\n"
""));
        midTxt_QL = new QLabel(midStart_QGB);
        midTxt_QL->setObjectName("midTxt_QL");
        midTxt_QL->setGeometry(QRect(1, 50, 191, 24));
        midTxt_QL->setFont(font);
        midDescr_QL = new QLabel(midStart_QGB);
        midDescr_QL->setObjectName("midDescr_QL");
        midDescr_QL->setGeometry(QRect(1, 100, 191, 20));
        midDescr_QL->setFont(font6);
        midStart_QPB = new QPushButton(midStart_QGB);
        midStart_QPB->setObjectName("midStart_QPB");
        midStart_QPB->setGeometry(QRect(0, 0, 191, 151));
        midStart_QPB->setFont(font1);
        midStart_QPB->setStyleSheet(QString::fromUtf8("QPushButton {\n"
"    border: 0px; /* \321\206\320\262\320\265\321\202 \321\200\320\260\320\274\320\272\320\270 */\n"
"    border-radius: 15px; /* \321\200\320\260\320\264\320\270\321\203\321\201 \321\201\320\272\321\200\321\203\320\263\320\273\320\265\320\275\320\270\321\217 */\n"
"    padding: 5px 15px; /* \320\262\320\275\321\203\321\202\321\200\320\265\320\275\320\275\320\270\320\265 \320\276\321\202\321\201\321\202\321\203\320\277\321\213 */\n"
"    background-color: qlineargradient(\n"
"        spread:pad, \n"
"        x1:0, y1:0, x2:0, y2:1, \n"
"        stop:0 rgba(67, 80, 133, 0.1), /* \320\262\320\265\321\200\321\205\320\275\320\270\320\271 \321\206\320\262\320\265\321\202 \321\201 \320\277\321\200\320\276\320\267\321\200\320\260\321\207\320\275\320\276\321\201\321\202\321\214\321\216 80% */\n"
"        stop:1 rgba(46, 54, 101, 0.1)  /* \320\275\320\270\320\266\320\275\320\270\320\271 \321\206\320\262\320\265\321\202 \321\201 \320\277\321\200\320\276\320\267\321\200\320\260\321\207\320\275\320\276\321"
                        "\201\321\202\321\214\321\216 80% */\n"
"    ); /* \320\263\321\200\320\260\320\264\320\270\320\265\320\275\321\202 \321\201 \320\277\321\200\320\276\320\267\321\200\320\260\321\207\320\275\320\276\321\201\321\202\321\214\321\216 */\n"
"    color: white; /* \321\206\320\262\320\265\321\202 \321\202\320\265\320\272\321\201\321\202\320\260 */\n"
"}\n"
"\n"
"QPushButton:hover {\n"
"    background-color: qlineargradient(\n"
"        spread:pad, \n"
"        x1:0, y1:0, x2:0, y2:1, \n"
"        stop:0 rgba(80, 96, 153, 0.2), /* \320\262\320\265\321\200\321\205\320\275\320\270\320\271 \321\206\320\262\320\265\321\202 \321\201 \320\277\321\200\320\276\320\267\321\200\320\260\321\207\320\275\320\276\321\201\321\202\321\214\321\216 80% */\n"
"        stop:1 rgba(58, 68, 111, 0.2)  /* \320\275\320\270\320\266\320\275\320\270\320\271 \321\206\320\262\320\265\321\202 \321\201 \320\277\321\200\320\276\320\267\321\200\320\260\321\207\320\275\320\276\321\201\321\202\321\214\321\216 80% */\n"
"    ); /* \321\201\320\262\320\265"
                        "\321\202\320\273\320\265\320\265 \320\263\321\200\320\260\320\264\320\270\320\265\320\275\321\202 \320\277\321\200\320\270 \320\275\320\260\320\262\320\265\320\264\320\265\320\275\320\270\320\270 */\n"
"}\n"
"\n"
"QPushButton:pressed {\n"
"    background-color: qlineargradient(\n"
"        spread:pad, \n"
"        x1:0, y1:0, x2:0, y2:1, \n"
"        stop:0 rgba(46, 54, 101, 0.2), /* \320\262\320\265\321\200\321\205\320\275\320\270\320\271 \321\206\320\262\320\265\321\202 \321\201 \320\277\321\200\320\276\320\267\321\200\320\260\321\207\320\275\320\276\321\201\321\202\321\214\321\216 80% */\n"
"        stop:1 rgba(31, 38, 73, 0.2)   /* \320\275\320\270\320\266\320\275\320\270\320\271 \321\206\320\262\320\265\321\202 \321\201 \320\277\321\200\320\276\320\267\321\200\320\260\321\207\320\275\320\276\321\201\321\202\321\214\321\216 80% */\n"
"    ); /* \320\261\320\276\320\273\320\265\320\265 \321\202\321\221\320\274\320\275\321\213\320\271 \320\263\321\200\320\260\320\264\320\270\320\265\320\275\321\202 \320\277\321"
                        "\200\320\270 \320\275\320\260\320\266\320\260\321\202\320\270\320\270 */\n"
"}"));
        highStart_QGB = new QGroupBox(newGame_QGB);
        highStart_QGB->setObjectName("highStart_QGB");
        highStart_QGB->setEnabled(true);
        highStart_QGB->setGeometry(QRect(430, 20, 181, 171));
        highStart_QGB->setStyleSheet(QString::fromUtf8("QLabel {\n"
"    qproperty-alignment: 'AlignCenter'; /* \320\262\321\213\321\200\320\260\320\262\320\275\320\270\320\262\320\260\320\275\320\270\320\265 \321\202\320\265\320\272\321\201\321\202\320\260 \320\277\320\276 \321\206\320\265\320\275\321\202\321\200\321\203 */\n"
"}\n"
""));
        highTxt_QL = new QLabel(highStart_QGB);
        highTxt_QL->setObjectName("highTxt_QL");
        highTxt_QL->setGeometry(QRect(1, 60, 181, 24));
        highTxt_QL->setFont(font);
        highDescr_QL = new QLabel(highStart_QGB);
        highDescr_QL->setObjectName("highDescr_QL");
        highDescr_QL->setGeometry(QRect(21, 120, 139, 16));
        highDescr_QL->setFont(font6);
        highStart_QPB = new QPushButton(highStart_QGB);
        highStart_QPB->setObjectName("highStart_QPB");
        highStart_QPB->setGeometry(QRect(0, 0, 181, 171));
        highStart_QPB->setFont(font1);
        highStart_QPB->setStyleSheet(QString::fromUtf8("QPushButton {\n"
"    border: 0px; /* \321\206\320\262\320\265\321\202 \321\200\320\260\320\274\320\272\320\270 */\n"
"    border-radius: 15px; /* \321\200\320\260\320\264\320\270\321\203\321\201 \321\201\320\272\321\200\321\203\320\263\320\273\320\265\320\275\320\270\321\217 */\n"
"    padding: 5px 15px; /* \320\262\320\275\321\203\321\202\321\200\320\265\320\275\320\275\320\270\320\265 \320\276\321\202\321\201\321\202\321\203\320\277\321\213 */\n"
"    background-color: qlineargradient(\n"
"        spread:pad, \n"
"        x1:0, y1:0, x2:0, y2:1, \n"
"        stop:0 rgba(67, 80, 133, 0.1), /* \320\262\320\265\321\200\321\205\320\275\320\270\320\271 \321\206\320\262\320\265\321\202 \321\201 \320\277\321\200\320\276\320\267\321\200\320\260\321\207\320\275\320\276\321\201\321\202\321\214\321\216 80% */\n"
"        stop:1 rgba(46, 54, 101, 0.1)  /* \320\275\320\270\320\266\320\275\320\270\320\271 \321\206\320\262\320\265\321\202 \321\201 \320\277\321\200\320\276\320\267\321\200\320\260\321\207\320\275\320\276\321"
                        "\201\321\202\321\214\321\216 80% */\n"
"    ); /* \320\263\321\200\320\260\320\264\320\270\320\265\320\275\321\202 \321\201 \320\277\321\200\320\276\320\267\321\200\320\260\321\207\320\275\320\276\321\201\321\202\321\214\321\216 */\n"
"    color: white; /* \321\206\320\262\320\265\321\202 \321\202\320\265\320\272\321\201\321\202\320\260 */\n"
"}\n"
"\n"
"QPushButton:hover {\n"
"    background-color: qlineargradient(\n"
"        spread:pad, \n"
"        x1:0, y1:0, x2:0, y2:1, \n"
"        stop:0 rgba(80, 96, 153, 0.2), /* \320\262\320\265\321\200\321\205\320\275\320\270\320\271 \321\206\320\262\320\265\321\202 \321\201 \320\277\321\200\320\276\320\267\321\200\320\260\321\207\320\275\320\276\321\201\321\202\321\214\321\216 80% */\n"
"        stop:1 rgba(58, 68, 111, 0.2)  /* \320\275\320\270\320\266\320\275\320\270\320\271 \321\206\320\262\320\265\321\202 \321\201 \320\277\321\200\320\276\320\267\321\200\320\260\321\207\320\275\320\276\321\201\321\202\321\214\321\216 80% */\n"
"    ); /* \321\201\320\262\320\265"
                        "\321\202\320\273\320\265\320\265 \320\263\321\200\320\260\320\264\320\270\320\265\320\275\321\202 \320\277\321\200\320\270 \320\275\320\260\320\262\320\265\320\264\320\265\320\275\320\270\320\270 */\n"
"}\n"
"\n"
"QPushButton:pressed {\n"
"    background-color: qlineargradient(\n"
"        spread:pad, \n"
"        x1:0, y1:0, x2:0, y2:1, \n"
"        stop:0 rgba(46, 54, 101, 0.2), /* \320\262\320\265\321\200\321\205\320\275\320\270\320\271 \321\206\320\262\320\265\321\202 \321\201 \320\277\321\200\320\276\320\267\321\200\320\260\321\207\320\275\320\276\321\201\321\202\321\214\321\216 80% */\n"
"        stop:1 rgba(31, 38, 73, 0.2)   /* \320\275\320\270\320\266\320\275\320\270\320\271 \321\206\320\262\320\265\321\202 \321\201 \320\277\321\200\320\276\320\267\321\200\320\260\321\207\320\275\320\276\321\201\321\202\321\214\321\216 80% */\n"
"    ); /* \320\261\320\276\320\273\320\265\320\265 \321\202\321\221\320\274\320\275\321\213\320\271 \320\263\321\200\320\260\320\264\320\270\320\265\320\275\321\202 \320\277\321"
                        "\200\320\270 \320\275\320\260\320\266\320\260\321\202\320\270\320\270 */\n"
"}"));
        newGameIcon_QL->raise();
        newGame_QL->raise();
        easyStart_QGB->raise();
        midStart_QGB->raise();
        highStart_QGB->raise();
        stackedWidget->addWidget(menu_QW);
        game_QW = new QWidget();
        game_QW->setObjectName("game_QW");
        saveExitMenu_QPB = new QPushButton(game_QW);
        saveExitMenu_QPB->setObjectName("saveExitMenu_QPB");
        saveExitMenu_QPB->setGeometry(QRect(10, 10, 251, 31));
        saveExitMenu_QPB->setFont(font1);
        saveExitMenu_QPB->setStyleSheet(QString::fromUtf8("QPushButton {\n"
"    border: 2px solid rgba(0, 0, 25, 50); /* \321\206\320\262\320\265\321\202 \321\200\320\260\320\274\320\272\320\270 */\n"
"    border-radius: 10px; /* \321\200\320\260\320\264\320\270\321\203\321\201 \321\201\320\272\321\200\321\203\320\263\320\273\320\265\320\275\320\270\321\217 */\n"
"    padding: 5px 15px; /* \320\262\320\275\321\203\321\202\321\200\320\265\320\275\320\275\320\270\320\265 \320\276\321\202\321\201\321\202\321\203\320\277\321\213 */\n"
"    background-color: qlineargradient(\n"
"        spread:pad, \n"
"        x1:0, y1:0, x2:0, y2:1, \n"
"        stop:0 rgba(67, 80, 133, 1.0), /* \320\262\320\265\321\200\321\205\320\275\320\270\320\271 \321\206\320\262\320\265\321\202 \321\201 \320\277\321\200\320\276\320\267\321\200\320\260\321\207\320\275\320\276\321\201\321\202\321\214\321\216 80% */\n"
"        stop:1 rgba(46, 54, 101, 1.0)  /* \320\275\320\270\320\266\320\275\320\270\320\271 \321\206\320\262\320\265\321\202 \321\201 \320\277\321\200\320\276\320\267\321\200\320\260\321"
                        "\207\320\275\320\276\321\201\321\202\321\214\321\216 80% */\n"
"    ); /* \320\263\321\200\320\260\320\264\320\270\320\265\320\275\321\202 \321\201 \320\277\321\200\320\276\320\267\321\200\320\260\321\207\320\275\320\276\321\201\321\202\321\214\321\216 */\n"
"    color: white; /* \321\206\320\262\320\265\321\202 \321\202\320\265\320\272\321\201\321\202\320\260 */\n"
"}\n"
"\n"
"QPushButton:hover {\n"
"    background-color: qlineargradient(\n"
"        spread:pad, \n"
"        x1:0, y1:0, x2:0, y2:1, \n"
"        stop:0 rgba(80, 96, 153, 1.0), /* \320\262\320\265\321\200\321\205\320\275\320\270\320\271 \321\206\320\262\320\265\321\202 \321\201 \320\277\321\200\320\276\320\267\321\200\320\260\321\207\320\275\320\276\321\201\321\202\321\214\321\216 80% */\n"
"        stop:1 rgba(58, 68, 111, 1.0)  /* \320\275\320\270\320\266\320\275\320\270\320\271 \321\206\320\262\320\265\321\202 \321\201 \320\277\321\200\320\276\320\267\321\200\320\260\321\207\320\275\320\276\321\201\321\202\321\214\321\216 80% */\n"
"    ); /*"
                        " \321\201\320\262\320\265\321\202\320\273\320\265\320\265 \320\263\321\200\320\260\320\264\320\270\320\265\320\275\321\202 \320\277\321\200\320\270 \320\275\320\260\320\262\320\265\320\264\320\265\320\275\320\270\320\270 */\n"
"    border: 2px solid rgba(67, 80, 133, 0.2); /* \320\277\321\200\320\276\320\267\321\200\320\260\321\207\320\275\320\260\321\217 \321\200\320\260\320\274\320\272\320\260 \320\277\321\200\320\270 \320\275\320\260\320\262\320\265\320\264\320\265\320\275\320\270\320\270 */\n"
"}\n"
"\n"
"QPushButton:pressed {\n"
"    background-color: qlineargradient(\n"
"        spread:pad, \n"
"        x1:0, y1:0, x2:0, y2:1, \n"
"        stop:0 rgba(46, 54, 101, 1.0), /* \320\262\320\265\321\200\321\205\320\275\320\270\320\271 \321\206\320\262\320\265\321\202 \321\201 \320\277\321\200\320\276\320\267\321\200\320\260\321\207\320\275\320\276\321\201\321\202\321\214\321\216 80% */\n"
"        stop:1 rgba(31, 38, 73, 1.0)   /* \320\275\320\270\320\266\320\275\320\270\320\271 \321\206\320\262\320\265\321\202"
                        " \321\201 \320\277\321\200\320\276\320\267\321\200\320\260\321\207\320\275\320\276\321\201\321\202\321\214\321\216 80% */\n"
"    ); /* \320\261\320\276\320\273\320\265\320\265 \321\202\321\221\320\274\320\275\321\213\320\271 \320\263\321\200\320\260\320\264\320\270\320\265\320\275\321\202 \320\277\321\200\320\270 \320\275\320\260\320\266\320\260\321\202\320\270\320\270 */\n"
"    border: 2px solid rgba(0, 0, 25, 0.2); /* \320\267\320\260\321\202\320\265\320\274\320\275\321\221\320\275\320\275\320\260\321\217 \321\200\320\260\320\274\320\272\320\260 \320\277\321\200\320\270 \320\275\320\260\320\266\320\260\321\202\320\270\320\270 */\n"
"}"));
        fieldPlay_QGB = new QGroupBox(game_QW);
        fieldPlay_QGB->setObjectName("fieldPlay_QGB");
        fieldPlay_QGB->setEnabled(true);
        fieldPlay_QGB->setGeometry(QRect(10, 50, 801, 681));
        fieldPlay_QGB->setStyleSheet(QString::fromUtf8(""));
        shop_QGB = new QGroupBox(game_QW);
        shop_QGB->setObjectName("shop_QGB");
        shop_QGB->setEnabled(true);
        shop_QGB->setGeometry(QRect(820, 290, 281, 441));
        shop_QGB->setStyleSheet(QString::fromUtf8(""));
        buyFlag_QGB = new QGroupBox(shop_QGB);
        buyFlag_QGB->setObjectName("buyFlag_QGB");
        buyFlag_QGB->setEnabled(true);
        buyFlag_QGB->setGeometry(QRect(20, 60, 241, 51));
        buyFlag_QGB->setStyleSheet(QString::fromUtf8("QLabel {\n"
"    qproperty-alignment: 'AlignCenter'; /* \320\262\321\213\321\200\320\260\320\262\320\275\320\270\320\262\320\260\320\275\320\270\320\265 \321\202\320\265\320\272\321\201\321\202\320\260 \320\277\320\276 \321\206\320\265\320\275\321\202\321\200\321\203 */\n"
"}\n"
"QGroupBox{\n"
"border-radius: 8px; /* \321\200\320\260\320\264\320\270\321\203\321\201 \321\201\320\272\321\200\321\203\320\263\320\273\320\265\320\275\320\270\321\217 */\n"
"}"));
        flagDescr_QL = new QLabel(buyFlag_QGB);
        flagDescr_QL->setObjectName("flagDescr_QL");
        flagDescr_QL->setGeometry(QRect(50, 8, 61, 24));
        QFont font7;
        font7.setFamilies({QString::fromUtf8("Bahnschrift Light Condensed")});
        font7.setPointSize(14);
        font7.setBold(false);
        font7.setItalic(false);
        font7.setKerning(true);
        font7.setStyleStrategy(QFont::PreferDefault);
        flagDescr_QL->setFont(font7);
        flagTxt_QL = new QLabel(buyFlag_QGB);
        flagTxt_QL->setObjectName("flagTxt_QL");
        flagTxt_QL->setGeometry(QRect(50, 28, 91, 20));
        flagTxt_QL->setFont(font6);
        flagCost_QL = new QLabel(buyFlag_QGB);
        flagCost_QL->setObjectName("flagCost_QL");
        flagCost_QL->setGeometry(QRect(158, 15, 40, 20));
        flagCost_QL->setFont(font4);
        icon_QL_9 = new QLabel(buyFlag_QGB);
        icon_QL_9->setObjectName("icon_QL_9");
        icon_QL_9->setGeometry(QRect(190, 15, 21, 21));
        icon_QL_9->setFont(font4);
        icon_QL_9->setPixmap(QPixmap(QString::fromUtf8(":/RAWDATA/menu/moneyIcon.png")));
        icon_QL_9->setScaledContents(true);
        icon_QL_14 = new QLabel(buyFlag_QGB);
        icon_QL_14->setObjectName("icon_QL_14");
        icon_QL_14->setGeometry(QRect(10, 5, 41, 41));
        icon_QL_14->setFont(font4);
        icon_QL_14->setPixmap(QPixmap(QString::fromUtf8(":/RAWDATA/menu/flagIcon.png")));
        icon_QL_14->setScaledContents(true);
        buyFlags_QPB = new QPushButton(buyFlag_QGB);
        buyFlags_QPB->setObjectName("buyFlags_QPB");
        buyFlags_QPB->setGeometry(QRect(0, 0, 241, 51));
        buyFlags_QPB->setFont(font1);
        buyFlags_QPB->setStyleSheet(QString::fromUtf8("QPushButton {\n"
"    border: 0px; /* \321\206\320\262\320\265\321\202 \321\200\320\260\320\274\320\272\320\270 */\n"
"    border-radius: 15px; /* \321\200\320\260\320\264\320\270\321\203\321\201 \321\201\320\272\321\200\321\203\320\263\320\273\320\265\320\275\320\270\321\217 */\n"
"    padding: 5px 15px; /* \320\262\320\275\321\203\321\202\321\200\320\265\320\275\320\275\320\270\320\265 \320\276\321\202\321\201\321\202\321\203\320\277\321\213 */\n"
"    background-color: qlineargradient(\n"
"        spread:pad, \n"
"        x1:0, y1:0, x2:0, y2:1, \n"
"        stop:0 rgba(67, 80, 133, 0.1), /* \320\262\320\265\321\200\321\205\320\275\320\270\320\271 \321\206\320\262\320\265\321\202 \321\201 \320\277\321\200\320\276\320\267\321\200\320\260\321\207\320\275\320\276\321\201\321\202\321\214\321\216 80% */\n"
"        stop:1 rgba(46, 54, 101, 0.1)  /* \320\275\320\270\320\266\320\275\320\270\320\271 \321\206\320\262\320\265\321\202 \321\201 \320\277\321\200\320\276\320\267\321\200\320\260\321\207\320\275\320\276\321"
                        "\201\321\202\321\214\321\216 80% */\n"
"    ); /* \320\263\321\200\320\260\320\264\320\270\320\265\320\275\321\202 \321\201 \320\277\321\200\320\276\320\267\321\200\320\260\321\207\320\275\320\276\321\201\321\202\321\214\321\216 */\n"
"    color: white; /* \321\206\320\262\320\265\321\202 \321\202\320\265\320\272\321\201\321\202\320\260 */\n"
"}\n"
"\n"
"QPushButton:hover {\n"
"    background-color: qlineargradient(\n"
"        spread:pad, \n"
"        x1:0, y1:0, x2:0, y2:1, \n"
"        stop:0 rgba(80, 96, 153, 0.2), /* \320\262\320\265\321\200\321\205\320\275\320\270\320\271 \321\206\320\262\320\265\321\202 \321\201 \320\277\321\200\320\276\320\267\321\200\320\260\321\207\320\275\320\276\321\201\321\202\321\214\321\216 80% */\n"
"        stop:1 rgba(58, 68, 111, 0.2)  /* \320\275\320\270\320\266\320\275\320\270\320\271 \321\206\320\262\320\265\321\202 \321\201 \320\277\321\200\320\276\320\267\321\200\320\260\321\207\320\275\320\276\321\201\321\202\321\214\321\216 80% */\n"
"    ); /* \321\201\320\262\320\265"
                        "\321\202\320\273\320\265\320\265 \320\263\321\200\320\260\320\264\320\270\320\265\320\275\321\202 \320\277\321\200\320\270 \320\275\320\260\320\262\320\265\320\264\320\265\320\275\320\270\320\270 */\n"
"}\n"
"\n"
"QPushButton:pressed {\n"
"    background-color: qlineargradient(\n"
"        spread:pad, \n"
"        x1:0, y1:0, x2:0, y2:1, \n"
"        stop:0 rgba(46, 54, 101, 0.2), /* \320\262\320\265\321\200\321\205\320\275\320\270\320\271 \321\206\320\262\320\265\321\202 \321\201 \320\277\321\200\320\276\320\267\321\200\320\260\321\207\320\275\320\276\321\201\321\202\321\214\321\216 80% */\n"
"        stop:1 rgba(31, 38, 73, 0.2)   /* \320\275\320\270\320\266\320\275\320\270\320\271 \321\206\320\262\320\265\321\202 \321\201 \320\277\321\200\320\276\320\267\321\200\320\260\321\207\320\275\320\276\321\201\321\202\321\214\321\216 80% */\n"
"    ); /* \320\261\320\276\320\273\320\265\320\265 \321\202\321\221\320\274\320\275\321\213\320\271 \320\263\321\200\320\260\320\264\320\270\320\265\320\275\321\202 \320\277\321"
                        "\200\320\270 \320\275\320\260\320\266\320\260\321\202\320\270\320\270 */\n"
"}"));
        shopTxt_QL = new QLabel(shop_QGB);
        shopTxt_QL->setObjectName("shopTxt_QL");
        shopTxt_QL->setGeometry(QRect(20, 20, 241, 41));
        shopTxt_QL->setFont(font);
        randBomb_QGB = new QGroupBox(shop_QGB);
        randBomb_QGB->setObjectName("randBomb_QGB");
        randBomb_QGB->setEnabled(true);
        randBomb_QGB->setGeometry(QRect(20, 370, 241, 51));
        randBomb_QGB->setStyleSheet(QString::fromUtf8("QLabel {\n"
"    qproperty-alignment: 'AlignCenter'; /* \320\262\321\213\321\200\320\260\320\262\320\275\320\270\320\262\320\260\320\275\320\270\320\265 \321\202\320\265\320\272\321\201\321\202\320\260 \320\277\320\276 \321\206\320\265\320\275\321\202\321\200\321\203 */\n"
"}\n"
"QGroupBox{\n"
"border-radius: 8px; /* \321\200\320\260\320\264\320\270\321\203\321\201 \321\201\320\272\321\200\321\203\320\263\320\273\320\265\320\275\320\270\321\217 */\n"
"}"));
        easyDescr_QL_3 = new QLabel(randBomb_QGB);
        easyDescr_QL_3->setObjectName("easyDescr_QL_3");
        easyDescr_QL_3->setGeometry(QRect(50, 8, 51, 24));
        easyDescr_QL_3->setFont(font7);
        easyTxt_QL_4 = new QLabel(randBomb_QGB);
        easyTxt_QL_4->setObjectName("easyTxt_QL_4");
        easyTxt_QL_4->setGeometry(QRect(50, 28, 101, 20));
        easyTxt_QL_4->setFont(font6);
        opRandCost_QL = new QLabel(randBomb_QGB);
        opRandCost_QL->setObjectName("opRandCost_QL");
        opRandCost_QL->setGeometry(QRect(170, 15, 16, 20));
        opRandCost_QL->setFont(font4);
        icon_QL_15 = new QLabel(randBomb_QGB);
        icon_QL_15->setObjectName("icon_QL_15");
        icon_QL_15->setGeometry(QRect(190, 15, 21, 21));
        icon_QL_15->setFont(font4);
        icon_QL_15->setPixmap(QPixmap(QString::fromUtf8(":/RAWDATA/menu/moneyIcon.png")));
        icon_QL_15->setScaledContents(true);
        icon_QL_16 = new QLabel(randBomb_QGB);
        icon_QL_16->setObjectName("icon_QL_16");
        icon_QL_16->setGeometry(QRect(10, 5, 41, 41));
        icon_QL_16->setFont(font4);
        icon_QL_16->setPixmap(QPixmap(QString::fromUtf8(":/RAWDATA/menu/flagIcon.png")));
        icon_QL_16->setScaledContents(true);
        opRandBomb_QPB = new QPushButton(randBomb_QGB);
        opRandBomb_QPB->setObjectName("opRandBomb_QPB");
        opRandBomb_QPB->setGeometry(QRect(0, 0, 241, 51));
        opRandBomb_QPB->setFont(font1);
        opRandBomb_QPB->setStyleSheet(QString::fromUtf8("QPushButton {\n"
"    border: 0px; /* \321\206\320\262\320\265\321\202 \321\200\320\260\320\274\320\272\320\270 */\n"
"    border-radius: 15px; /* \321\200\320\260\320\264\320\270\321\203\321\201 \321\201\320\272\321\200\321\203\320\263\320\273\320\265\320\275\320\270\321\217 */\n"
"    padding: 5px 15px; /* \320\262\320\275\321\203\321\202\321\200\320\265\320\275\320\275\320\270\320\265 \320\276\321\202\321\201\321\202\321\203\320\277\321\213 */\n"
"    background-color: qlineargradient(\n"
"        spread:pad, \n"
"        x1:0, y1:0, x2:0, y2:1, \n"
"        stop:0 rgba(67, 80, 133, 0.1), /* \320\262\320\265\321\200\321\205\320\275\320\270\320\271 \321\206\320\262\320\265\321\202 \321\201 \320\277\321\200\320\276\320\267\321\200\320\260\321\207\320\275\320\276\321\201\321\202\321\214\321\216 80% */\n"
"        stop:1 rgba(46, 54, 101, 0.1)  /* \320\275\320\270\320\266\320\275\320\270\320\271 \321\206\320\262\320\265\321\202 \321\201 \320\277\321\200\320\276\320\267\321\200\320\260\321\207\320\275\320\276\321"
                        "\201\321\202\321\214\321\216 80% */\n"
"    ); /* \320\263\321\200\320\260\320\264\320\270\320\265\320\275\321\202 \321\201 \320\277\321\200\320\276\320\267\321\200\320\260\321\207\320\275\320\276\321\201\321\202\321\214\321\216 */\n"
"    color: white; /* \321\206\320\262\320\265\321\202 \321\202\320\265\320\272\321\201\321\202\320\260 */\n"
"}\n"
"\n"
"QPushButton:hover {\n"
"    background-color: qlineargradient(\n"
"        spread:pad, \n"
"        x1:0, y1:0, x2:0, y2:1, \n"
"        stop:0 rgba(80, 96, 153, 0.2), /* \320\262\320\265\321\200\321\205\320\275\320\270\320\271 \321\206\320\262\320\265\321\202 \321\201 \320\277\321\200\320\276\320\267\321\200\320\260\321\207\320\275\320\276\321\201\321\202\321\214\321\216 80% */\n"
"        stop:1 rgba(58, 68, 111, 0.2)  /* \320\275\320\270\320\266\320\275\320\270\320\271 \321\206\320\262\320\265\321\202 \321\201 \320\277\321\200\320\276\320\267\321\200\320\260\321\207\320\275\320\276\321\201\321\202\321\214\321\216 80% */\n"
"    ); /* \321\201\320\262\320\265"
                        "\321\202\320\273\320\265\320\265 \320\263\321\200\320\260\320\264\320\270\320\265\320\275\321\202 \320\277\321\200\320\270 \320\275\320\260\320\262\320\265\320\264\320\265\320\275\320\270\320\270 */\n"
"}\n"
"\n"
"QPushButton:pressed {\n"
"    background-color: qlineargradient(\n"
"        spread:pad, \n"
"        x1:0, y1:0, x2:0, y2:1, \n"
"        stop:0 rgba(46, 54, 101, 0.2), /* \320\262\320\265\321\200\321\205\320\275\320\270\320\271 \321\206\320\262\320\265\321\202 \321\201 \320\277\321\200\320\276\320\267\321\200\320\260\321\207\320\275\320\276\321\201\321\202\321\214\321\216 80% */\n"
"        stop:1 rgba(31, 38, 73, 0.2)   /* \320\275\320\270\320\266\320\275\320\270\320\271 \321\206\320\262\320\265\321\202 \321\201 \320\277\321\200\320\276\320\267\321\200\320\260\321\207\320\275\320\276\321\201\321\202\321\214\321\216 80% */\n"
"    ); /* \320\261\320\276\320\273\320\265\320\265 \321\202\321\221\320\274\320\275\321\213\320\271 \320\263\321\200\320\260\320\264\320\270\320\265\320\275\321\202 \320\277\321"
                        "\200\320\270 \320\275\320\260\320\266\320\260\321\202\320\270\320\270 */\n"
"}"));
        statMap_QL = new QLabel(randBomb_QGB);
        statMap_QL->setObjectName("statMap_QL");
        statMap_QL->setGeometry(QRect(130, 10, 41, 20));
        statMap_QL->setFont(font4);
        easyDescr_QL_3->raise();
        easyTxt_QL_4->raise();
        opRandCost_QL->raise();
        icon_QL_15->raise();
        icon_QL_16->raise();
        statMap_QL->raise();
        opRandBomb_QPB->raise();
        updInvent_QGB = new QGroupBox(shop_QGB);
        updInvent_QGB->setObjectName("updInvent_QGB");
        updInvent_QGB->setEnabled(true);
        updInvent_QGB->setGeometry(QRect(20, 120, 241, 51));
        updInvent_QGB->setStyleSheet(QString::fromUtf8("QLabel {\n"
"    qproperty-alignment: 'AlignCenter'; /* \320\262\321\213\321\200\320\260\320\262\320\275\320\270\320\262\320\260\320\275\320\270\320\265 \321\202\320\265\320\272\321\201\321\202\320\260 \320\277\320\276 \321\206\320\265\320\275\321\202\321\200\321\203 */\n"
"}\n"
"QGroupBox{\n"
"border-radius: 8px; /* \321\200\320\260\320\264\320\270\321\203\321\201 \321\201\320\272\321\200\321\203\320\263\320\273\320\265\320\275\320\270\321\217 */\n"
"}"));
        easyDescr_QL_15 = new QLabel(updInvent_QGB);
        easyDescr_QL_15->setObjectName("easyDescr_QL_15");
        easyDescr_QL_15->setGeometry(QRect(50, 8, 71, 24));
        easyDescr_QL_15->setFont(font7);
        easyTxt_QL_28 = new QLabel(updInvent_QGB);
        easyTxt_QL_28->setObjectName("easyTxt_QL_28");
        easyTxt_QL_28->setGeometry(QRect(50, 28, 101, 20));
        easyTxt_QL_28->setFont(font6);
        upgradeCost_QL = new QLabel(updInvent_QGB);
        upgradeCost_QL->setObjectName("upgradeCost_QL");
        upgradeCost_QL->setGeometry(QRect(170, 15, 16, 20));
        upgradeCost_QL->setFont(font4);
        icon_QL_39 = new QLabel(updInvent_QGB);
        icon_QL_39->setObjectName("icon_QL_39");
        icon_QL_39->setGeometry(QRect(190, 15, 21, 21));
        icon_QL_39->setFont(font4);
        icon_QL_39->setPixmap(QPixmap(QString::fromUtf8(":/RAWDATA/menu/moneyIcon.png")));
        icon_QL_39->setScaledContents(true);
        icon_QL_40 = new QLabel(updInvent_QGB);
        icon_QL_40->setObjectName("icon_QL_40");
        icon_QL_40->setGeometry(QRect(10, 5, 41, 41));
        icon_QL_40->setFont(font4);
        icon_QL_40->setPixmap(QPixmap(QString::fromUtf8(":/RAWDATA/menu/flagIcon.png")));
        icon_QL_40->setScaledContents(true);
        updInvent_QPB = new QPushButton(updInvent_QGB);
        updInvent_QPB->setObjectName("updInvent_QPB");
        updInvent_QPB->setGeometry(QRect(0, 0, 241, 51));
        updInvent_QPB->setFont(font1);
        updInvent_QPB->setStyleSheet(QString::fromUtf8("QPushButton {\n"
"    border: 0px; /* \321\206\320\262\320\265\321\202 \321\200\320\260\320\274\320\272\320\270 */\n"
"    border-radius: 15px; /* \321\200\320\260\320\264\320\270\321\203\321\201 \321\201\320\272\321\200\321\203\320\263\320\273\320\265\320\275\320\270\321\217 */\n"
"    padding: 5px 15px; /* \320\262\320\275\321\203\321\202\321\200\320\265\320\275\320\275\320\270\320\265 \320\276\321\202\321\201\321\202\321\203\320\277\321\213 */\n"
"    background-color: qlineargradient(\n"
"        spread:pad, \n"
"        x1:0, y1:0, x2:0, y2:1, \n"
"        stop:0 rgba(67, 80, 133, 0.1), /* \320\262\320\265\321\200\321\205\320\275\320\270\320\271 \321\206\320\262\320\265\321\202 \321\201 \320\277\321\200\320\276\320\267\321\200\320\260\321\207\320\275\320\276\321\201\321\202\321\214\321\216 80% */\n"
"        stop:1 rgba(46, 54, 101, 0.1)  /* \320\275\320\270\320\266\320\275\320\270\320\271 \321\206\320\262\320\265\321\202 \321\201 \320\277\321\200\320\276\320\267\321\200\320\260\321\207\320\275\320\276\321"
                        "\201\321\202\321\214\321\216 80% */\n"
"    ); /* \320\263\321\200\320\260\320\264\320\270\320\265\320\275\321\202 \321\201 \320\277\321\200\320\276\320\267\321\200\320\260\321\207\320\275\320\276\321\201\321\202\321\214\321\216 */\n"
"    color: white; /* \321\206\320\262\320\265\321\202 \321\202\320\265\320\272\321\201\321\202\320\260 */\n"
"}\n"
"\n"
"QPushButton:hover {\n"
"    background-color: qlineargradient(\n"
"        spread:pad, \n"
"        x1:0, y1:0, x2:0, y2:1, \n"
"        stop:0 rgba(80, 96, 153, 0.2), /* \320\262\320\265\321\200\321\205\320\275\320\270\320\271 \321\206\320\262\320\265\321\202 \321\201 \320\277\321\200\320\276\320\267\321\200\320\260\321\207\320\275\320\276\321\201\321\202\321\214\321\216 80% */\n"
"        stop:1 rgba(58, 68, 111, 0.2)  /* \320\275\320\270\320\266\320\275\320\270\320\271 \321\206\320\262\320\265\321\202 \321\201 \320\277\321\200\320\276\320\267\321\200\320\260\321\207\320\275\320\276\321\201\321\202\321\214\321\216 80% */\n"
"    ); /* \321\201\320\262\320\265"
                        "\321\202\320\273\320\265\320\265 \320\263\321\200\320\260\320\264\320\270\320\265\320\275\321\202 \320\277\321\200\320\270 \320\275\320\260\320\262\320\265\320\264\320\265\320\275\320\270\320\270 */\n"
"}\n"
"\n"
"QPushButton:pressed {\n"
"    background-color: qlineargradient(\n"
"        spread:pad, \n"
"        x1:0, y1:0, x2:0, y2:1, \n"
"        stop:0 rgba(46, 54, 101, 0.2), /* \320\262\320\265\321\200\321\205\320\275\320\270\320\271 \321\206\320\262\320\265\321\202 \321\201 \320\277\321\200\320\276\320\267\321\200\320\260\321\207\320\275\320\276\321\201\321\202\321\214\321\216 80% */\n"
"        stop:1 rgba(31, 38, 73, 0.2)   /* \320\275\320\270\320\266\320\275\320\270\320\271 \321\206\320\262\320\265\321\202 \321\201 \320\277\321\200\320\276\320\267\321\200\320\260\321\207\320\275\320\276\321\201\321\202\321\214\321\216 80% */\n"
"    ); /* \320\261\320\276\320\273\320\265\320\265 \321\202\321\221\320\274\320\275\321\213\320\271 \320\263\321\200\320\260\320\264\320\270\320\265\320\275\321\202 \320\277\321"
                        "\200\320\270 \320\275\320\260\320\266\320\260\321\202\320\270\320\270 */\n"
"}"));
        fUpgrInvFlag_QL = new QLabel(updInvent_QGB);
        fUpgrInvFlag_QL->setObjectName("fUpgrInvFlag_QL");
        fUpgrInvFlag_QL->setGeometry(QRect(130, 10, 41, 20));
        fUpgrInvFlag_QL->setFont(font4);
        easyDescr_QL_15->raise();
        easyTxt_QL_28->raise();
        upgradeCost_QL->raise();
        icon_QL_39->raise();
        icon_QL_40->raise();
        fUpgrInvFlag_QL->raise();
        updInvent_QPB->raise();
        buyScan_QGB = new QGroupBox(shop_QGB);
        buyScan_QGB->setObjectName("buyScan_QGB");
        buyScan_QGB->setEnabled(true);
        buyScan_QGB->setGeometry(QRect(20, 180, 241, 51));
        buyScan_QGB->setStyleSheet(QString::fromUtf8("QLabel {\n"
"    qproperty-alignment: 'AlignCenter'; /* \320\262\321\213\321\200\320\260\320\262\320\275\320\270\320\262\320\260\320\275\320\270\320\265 \321\202\320\265\320\272\321\201\321\202\320\260 \320\277\320\276 \321\206\320\265\320\275\321\202\321\200\321\203 */\n"
"}\n"
"QGroupBox{\n"
"border-radius: 8px; /* \321\200\320\260\320\264\320\270\321\203\321\201 \321\201\320\272\321\200\321\203\320\263\320\273\320\265\320\275\320\270\321\217 */\n"
"}"));
        easyDescr_QL_16 = new QLabel(buyScan_QGB);
        easyDescr_QL_16->setObjectName("easyDescr_QL_16");
        easyDescr_QL_16->setGeometry(QRect(35, 8, 81, 24));
        easyDescr_QL_16->setFont(font7);
        easyTxt_QL_30 = new QLabel(buyScan_QGB);
        easyTxt_QL_30->setObjectName("easyTxt_QL_30");
        easyTxt_QL_30->setGeometry(QRect(37, 28, 111, 20));
        easyTxt_QL_30->setFont(font6);
        scannerCost_QL = new QLabel(buyScan_QGB);
        scannerCost_QL->setObjectName("scannerCost_QL");
        scannerCost_QL->setGeometry(QRect(170, 15, 16, 20));
        scannerCost_QL->setFont(font4);
        icon_QL_41 = new QLabel(buyScan_QGB);
        icon_QL_41->setObjectName("icon_QL_41");
        icon_QL_41->setGeometry(QRect(190, 15, 21, 21));
        icon_QL_41->setFont(font4);
        icon_QL_41->setPixmap(QPixmap(QString::fromUtf8(":/RAWDATA/menu/moneyIcon.png")));
        icon_QL_41->setScaledContents(true);
        icon_QL_42 = new QLabel(buyScan_QGB);
        icon_QL_42->setObjectName("icon_QL_42");
        icon_QL_42->setGeometry(QRect(10, 5, 41, 41));
        icon_QL_42->setFont(font4);
        icon_QL_42->setPixmap(QPixmap(QString::fromUtf8(":/RAWDATA/menu/flagIcon.png")));
        icon_QL_42->setScaledContents(true);
        buyScanner_QPB = new QPushButton(buyScan_QGB);
        buyScanner_QPB->setObjectName("buyScanner_QPB");
        buyScanner_QPB->setGeometry(QRect(0, 0, 241, 51));
        buyScanner_QPB->setFont(font1);
        buyScanner_QPB->setStyleSheet(QString::fromUtf8("QPushButton {\n"
"    border: 0px; /* \321\206\320\262\320\265\321\202 \321\200\320\260\320\274\320\272\320\270 */\n"
"    border-radius: 15px; /* \321\200\320\260\320\264\320\270\321\203\321\201 \321\201\320\272\321\200\321\203\320\263\320\273\320\265\320\275\320\270\321\217 */\n"
"    padding: 5px 15px; /* \320\262\320\275\321\203\321\202\321\200\320\265\320\275\320\275\320\270\320\265 \320\276\321\202\321\201\321\202\321\203\320\277\321\213 */\n"
"    background-color: qlineargradient(\n"
"        spread:pad, \n"
"        x1:0, y1:0, x2:0, y2:1, \n"
"        stop:0 rgba(67, 80, 133, 0.1), /* \320\262\320\265\321\200\321\205\320\275\320\270\320\271 \321\206\320\262\320\265\321\202 \321\201 \320\277\321\200\320\276\320\267\321\200\320\260\321\207\320\275\320\276\321\201\321\202\321\214\321\216 80% */\n"
"        stop:1 rgba(46, 54, 101, 0.1)  /* \320\275\320\270\320\266\320\275\320\270\320\271 \321\206\320\262\320\265\321\202 \321\201 \320\277\321\200\320\276\320\267\321\200\320\260\321\207\320\275\320\276\321"
                        "\201\321\202\321\214\321\216 80% */\n"
"    ); /* \320\263\321\200\320\260\320\264\320\270\320\265\320\275\321\202 \321\201 \320\277\321\200\320\276\320\267\321\200\320\260\321\207\320\275\320\276\321\201\321\202\321\214\321\216 */\n"
"    color: white; /* \321\206\320\262\320\265\321\202 \321\202\320\265\320\272\321\201\321\202\320\260 */\n"
"}\n"
"\n"
"QPushButton:hover {\n"
"    background-color: qlineargradient(\n"
"        spread:pad, \n"
"        x1:0, y1:0, x2:0, y2:1, \n"
"        stop:0 rgba(80, 96, 153, 0.2), /* \320\262\320\265\321\200\321\205\320\275\320\270\320\271 \321\206\320\262\320\265\321\202 \321\201 \320\277\321\200\320\276\320\267\321\200\320\260\321\207\320\275\320\276\321\201\321\202\321\214\321\216 80% */\n"
"        stop:1 rgba(58, 68, 111, 0.2)  /* \320\275\320\270\320\266\320\275\320\270\320\271 \321\206\320\262\320\265\321\202 \321\201 \320\277\321\200\320\276\320\267\321\200\320\260\321\207\320\275\320\276\321\201\321\202\321\214\321\216 80% */\n"
"    ); /* \321\201\320\262\320\265"
                        "\321\202\320\273\320\265\320\265 \320\263\321\200\320\260\320\264\320\270\320\265\320\275\321\202 \320\277\321\200\320\270 \320\275\320\260\320\262\320\265\320\264\320\265\320\275\320\270\320\270 */\n"
"}\n"
"\n"
"QPushButton:pressed {\n"
"    background-color: qlineargradient(\n"
"        spread:pad, \n"
"        x1:0, y1:0, x2:0, y2:1, \n"
"        stop:0 rgba(46, 54, 101, 0.2), /* \320\262\320\265\321\200\321\205\320\275\320\270\320\271 \321\206\320\262\320\265\321\202 \321\201 \320\277\321\200\320\276\320\267\321\200\320\260\321\207\320\275\320\276\321\201\321\202\321\214\321\216 80% */\n"
"        stop:1 rgba(31, 38, 73, 0.2)   /* \320\275\320\270\320\266\320\275\320\270\320\271 \321\206\320\262\320\265\321\202 \321\201 \320\277\321\200\320\276\320\267\321\200\320\260\321\207\320\275\320\276\321\201\321\202\321\214\321\216 80% */\n"
"    ); /* \320\261\320\276\320\273\320\265\320\265 \321\202\321\221\320\274\320\275\321\213\320\271 \320\263\321\200\320\260\320\264\320\270\320\265\320\275\321\202 \320\277\321"
                        "\200\320\270 \320\275\320\260\320\266\320\260\321\202\320\270\320\270 */\n"
"}"));
        upgrInvScan_QGB = new QGroupBox(shop_QGB);
        upgrInvScan_QGB->setObjectName("upgrInvScan_QGB");
        upgrInvScan_QGB->setEnabled(true);
        upgrInvScan_QGB->setGeometry(QRect(20, 310, 241, 51));
        upgrInvScan_QGB->setStyleSheet(QString::fromUtf8("QLabel {\n"
"    qproperty-alignment: 'AlignCenter'; /* \320\262\321\213\321\200\320\260\320\262\320\275\320\270\320\262\320\260\320\275\320\270\320\265 \321\202\320\265\320\272\321\201\321\202\320\260 \320\277\320\276 \321\206\320\265\320\275\321\202\321\200\321\203 */\n"
"}\n"
"QGroupBox{\n"
"border-radius: 8px; /* \321\200\320\260\320\264\320\270\321\203\321\201 \321\201\320\272\321\200\321\203\320\263\320\273\320\265\320\275\320\270\321\217 */\n"
"}"));
        easyDescr_QL_17 = new QLabel(upgrInvScan_QGB);
        easyDescr_QL_17->setObjectName("easyDescr_QL_17");
        easyDescr_QL_17->setGeometry(QRect(50, 8, 81, 24));
        easyDescr_QL_17->setFont(font7);
        easyTxt_QL_32 = new QLabel(upgrInvScan_QGB);
        easyTxt_QL_32->setObjectName("easyTxt_QL_32");
        easyTxt_QL_32->setGeometry(QRect(43, 28, 111, 20));
        easyTxt_QL_32->setFont(font6);
        scanVisCost_QL = new QLabel(upgrInvScan_QGB);
        scanVisCost_QL->setObjectName("scanVisCost_QL");
        scanVisCost_QL->setGeometry(QRect(170, 15, 16, 20));
        scanVisCost_QL->setFont(font4);
        icon_QL_43 = new QLabel(upgrInvScan_QGB);
        icon_QL_43->setObjectName("icon_QL_43");
        icon_QL_43->setGeometry(QRect(190, 14, 21, 21));
        icon_QL_43->setFont(font4);
        icon_QL_43->setPixmap(QPixmap(QString::fromUtf8(":/RAWDATA/menu/moneyIcon.png")));
        icon_QL_43->setScaledContents(true);
        icon_QL_44 = new QLabel(upgrInvScan_QGB);
        icon_QL_44->setObjectName("icon_QL_44");
        icon_QL_44->setGeometry(QRect(10, 5, 41, 41));
        icon_QL_44->setFont(font4);
        icon_QL_44->setPixmap(QPixmap(QString::fromUtf8(":/RAWDATA/menu/flagIcon.png")));
        icon_QL_44->setScaledContents(true);
        incrVisible_QPB = new QPushButton(upgrInvScan_QGB);
        incrVisible_QPB->setObjectName("incrVisible_QPB");
        incrVisible_QPB->setGeometry(QRect(0, 0, 241, 51));
        incrVisible_QPB->setFont(font1);
        incrVisible_QPB->setStyleSheet(QString::fromUtf8("QPushButton {\n"
"    border: 0px; /* \321\206\320\262\320\265\321\202 \321\200\320\260\320\274\320\272\320\270 */\n"
"    border-radius: 15px; /* \321\200\320\260\320\264\320\270\321\203\321\201 \321\201\320\272\321\200\321\203\320\263\320\273\320\265\320\275\320\270\321\217 */\n"
"    padding: 5px 15px; /* \320\262\320\275\321\203\321\202\321\200\320\265\320\275\320\275\320\270\320\265 \320\276\321\202\321\201\321\202\321\203\320\277\321\213 */\n"
"    background-color: qlineargradient(\n"
"        spread:pad, \n"
"        x1:0, y1:0, x2:0, y2:1, \n"
"        stop:0 rgba(67, 80, 133, 0.1), /* \320\262\320\265\321\200\321\205\320\275\320\270\320\271 \321\206\320\262\320\265\321\202 \321\201 \320\277\321\200\320\276\320\267\321\200\320\260\321\207\320\275\320\276\321\201\321\202\321\214\321\216 80% */\n"
"        stop:1 rgba(46, 54, 101, 0.1)  /* \320\275\320\270\320\266\320\275\320\270\320\271 \321\206\320\262\320\265\321\202 \321\201 \320\277\321\200\320\276\320\267\321\200\320\260\321\207\320\275\320\276\321"
                        "\201\321\202\321\214\321\216 80% */\n"
"    ); /* \320\263\321\200\320\260\320\264\320\270\320\265\320\275\321\202 \321\201 \320\277\321\200\320\276\320\267\321\200\320\260\321\207\320\275\320\276\321\201\321\202\321\214\321\216 */\n"
"    color: white; /* \321\206\320\262\320\265\321\202 \321\202\320\265\320\272\321\201\321\202\320\260 */\n"
"}\n"
"\n"
"QPushButton:hover {\n"
"    background-color: qlineargradient(\n"
"        spread:pad, \n"
"        x1:0, y1:0, x2:0, y2:1, \n"
"        stop:0 rgba(80, 96, 153, 0.2), /* \320\262\320\265\321\200\321\205\320\275\320\270\320\271 \321\206\320\262\320\265\321\202 \321\201 \320\277\321\200\320\276\320\267\321\200\320\260\321\207\320\275\320\276\321\201\321\202\321\214\321\216 80% */\n"
"        stop:1 rgba(58, 68, 111, 0.2)  /* \320\275\320\270\320\266\320\275\320\270\320\271 \321\206\320\262\320\265\321\202 \321\201 \320\277\321\200\320\276\320\267\321\200\320\260\321\207\320\275\320\276\321\201\321\202\321\214\321\216 80% */\n"
"    ); /* \321\201\320\262\320\265"
                        "\321\202\320\273\320\265\320\265 \320\263\321\200\320\260\320\264\320\270\320\265\320\275\321\202 \320\277\321\200\320\270 \320\275\320\260\320\262\320\265\320\264\320\265\320\275\320\270\320\270 */\n"
"}\n"
"\n"
"QPushButton:pressed {\n"
"    background-color: qlineargradient(\n"
"        spread:pad, \n"
"        x1:0, y1:0, x2:0, y2:1, \n"
"        stop:0 rgba(46, 54, 101, 0.2), /* \320\262\320\265\321\200\321\205\320\275\320\270\320\271 \321\206\320\262\320\265\321\202 \321\201 \320\277\321\200\320\276\320\267\321\200\320\260\321\207\320\275\320\276\321\201\321\202\321\214\321\216 80% */\n"
"        stop:1 rgba(31, 38, 73, 0.2)   /* \320\275\320\270\320\266\320\275\320\270\320\271 \321\206\320\262\320\265\321\202 \321\201 \320\277\321\200\320\276\320\267\321\200\320\260\321\207\320\275\320\276\321\201\321\202\321\214\321\216 80% */\n"
"    ); /* \320\261\320\276\320\273\320\265\320\265 \321\202\321\221\320\274\320\275\321\213\320\271 \320\263\321\200\320\260\320\264\320\270\320\265\320\275\321\202 \320\277\321"
                        "\200\320\270 \320\275\320\260\320\266\320\260\321\202\320\270\320\270 */\n"
"}"));
        statUpgrScan_QL = new QLabel(upgrInvScan_QGB);
        statUpgrScan_QL->setObjectName("statUpgrScan_QL");
        statUpgrScan_QL->setGeometry(QRect(130, 10, 41, 20));
        statUpgrScan_QL->setFont(font4);
        easyDescr_QL_17->raise();
        easyTxt_QL_32->raise();
        scanVisCost_QL->raise();
        icon_QL_43->raise();
        icon_QL_44->raise();
        statUpgrScan_QL->raise();
        incrVisible_QPB->raise();
        updInventSc_QGB = new QGroupBox(shop_QGB);
        updInventSc_QGB->setObjectName("updInventSc_QGB");
        updInventSc_QGB->setEnabled(true);
        updInventSc_QGB->setGeometry(QRect(20, 240, 241, 51));
        updInventSc_QGB->setStyleSheet(QString::fromUtf8("QLabel {\n"
"    qproperty-alignment: 'AlignCenter'; /* \320\262\321\213\321\200\320\260\320\262\320\275\320\270\320\262\320\260\320\275\320\270\320\265 \321\202\320\265\320\272\321\201\321\202\320\260 \320\277\320\276 \321\206\320\265\320\275\321\202\321\200\321\203 */\n"
"}\n"
"QGroupBox{\n"
"border-radius: 8px; /* \321\200\320\260\320\264\320\270\321\203\321\201 \321\201\320\272\321\200\321\203\320\263\320\273\320\265\320\275\320\270\321\217 */\n"
"}"));
        easyDescr_QL_18 = new QLabel(updInventSc_QGB);
        easyDescr_QL_18->setObjectName("easyDescr_QL_18");
        easyDescr_QL_18->setGeometry(QRect(50, 8, 71, 24));
        easyDescr_QL_18->setFont(font7);
        easyTxt_QL_29 = new QLabel(updInventSc_QGB);
        easyTxt_QL_29->setObjectName("easyTxt_QL_29");
        easyTxt_QL_29->setGeometry(QRect(50, 28, 101, 20));
        easyTxt_QL_29->setFont(font6);
        upgradeCostS_QL = new QLabel(updInventSc_QGB);
        upgradeCostS_QL->setObjectName("upgradeCostS_QL");
        upgradeCostS_QL->setGeometry(QRect(170, 15, 16, 20));
        upgradeCostS_QL->setFont(font4);
        icon_QL_45 = new QLabel(updInventSc_QGB);
        icon_QL_45->setObjectName("icon_QL_45");
        icon_QL_45->setGeometry(QRect(190, 15, 21, 21));
        icon_QL_45->setFont(font4);
        icon_QL_45->setPixmap(QPixmap(QString::fromUtf8(":/RAWDATA/menu/moneyIcon.png")));
        icon_QL_45->setScaledContents(true);
        icon_QL_46 = new QLabel(updInventSc_QGB);
        icon_QL_46->setObjectName("icon_QL_46");
        icon_QL_46->setGeometry(QRect(10, 5, 41, 41));
        icon_QL_46->setFont(font4);
        icon_QL_46->setPixmap(QPixmap(QString::fromUtf8(":/RAWDATA/menu/flagIcon.png")));
        icon_QL_46->setScaledContents(true);
        updInventSc_QPB = new QPushButton(updInventSc_QGB);
        updInventSc_QPB->setObjectName("updInventSc_QPB");
        updInventSc_QPB->setGeometry(QRect(0, 0, 241, 51));
        updInventSc_QPB->setFont(font1);
        updInventSc_QPB->setStyleSheet(QString::fromUtf8("QPushButton {\n"
"    border: 0px; /* \321\206\320\262\320\265\321\202 \321\200\320\260\320\274\320\272\320\270 */\n"
"    border-radius: 15px; /* \321\200\320\260\320\264\320\270\321\203\321\201 \321\201\320\272\321\200\321\203\320\263\320\273\320\265\320\275\320\270\321\217 */\n"
"    padding: 5px 15px; /* \320\262\320\275\321\203\321\202\321\200\320\265\320\275\320\275\320\270\320\265 \320\276\321\202\321\201\321\202\321\203\320\277\321\213 */\n"
"    background-color: qlineargradient(\n"
"        spread:pad, \n"
"        x1:0, y1:0, x2:0, y2:1, \n"
"        stop:0 rgba(67, 80, 133, 0.1), /* \320\262\320\265\321\200\321\205\320\275\320\270\320\271 \321\206\320\262\320\265\321\202 \321\201 \320\277\321\200\320\276\320\267\321\200\320\260\321\207\320\275\320\276\321\201\321\202\321\214\321\216 80% */\n"
"        stop:1 rgba(46, 54, 101, 0.1)  /* \320\275\320\270\320\266\320\275\320\270\320\271 \321\206\320\262\320\265\321\202 \321\201 \320\277\321\200\320\276\320\267\321\200\320\260\321\207\320\275\320\276\321"
                        "\201\321\202\321\214\321\216 80% */\n"
"    ); /* \320\263\321\200\320\260\320\264\320\270\320\265\320\275\321\202 \321\201 \320\277\321\200\320\276\320\267\321\200\320\260\321\207\320\275\320\276\321\201\321\202\321\214\321\216 */\n"
"    color: white; /* \321\206\320\262\320\265\321\202 \321\202\320\265\320\272\321\201\321\202\320\260 */\n"
"}\n"
"\n"
"QPushButton:hover {\n"
"    background-color: qlineargradient(\n"
"        spread:pad, \n"
"        x1:0, y1:0, x2:0, y2:1, \n"
"        stop:0 rgba(80, 96, 153, 0.2), /* \320\262\320\265\321\200\321\205\320\275\320\270\320\271 \321\206\320\262\320\265\321\202 \321\201 \320\277\321\200\320\276\320\267\321\200\320\260\321\207\320\275\320\276\321\201\321\202\321\214\321\216 80% */\n"
"        stop:1 rgba(58, 68, 111, 0.2)  /* \320\275\320\270\320\266\320\275\320\270\320\271 \321\206\320\262\320\265\321\202 \321\201 \320\277\321\200\320\276\320\267\321\200\320\260\321\207\320\275\320\276\321\201\321\202\321\214\321\216 80% */\n"
"    ); /* \321\201\320\262\320\265"
                        "\321\202\320\273\320\265\320\265 \320\263\321\200\320\260\320\264\320\270\320\265\320\275\321\202 \320\277\321\200\320\270 \320\275\320\260\320\262\320\265\320\264\320\265\320\275\320\270\320\270 */\n"
"}\n"
"\n"
"QPushButton:pressed {\n"
"    background-color: qlineargradient(\n"
"        spread:pad, \n"
"        x1:0, y1:0, x2:0, y2:1, \n"
"        stop:0 rgba(46, 54, 101, 0.2), /* \320\262\320\265\321\200\321\205\320\275\320\270\320\271 \321\206\320\262\320\265\321\202 \321\201 \320\277\321\200\320\276\320\267\321\200\320\260\321\207\320\275\320\276\321\201\321\202\321\214\321\216 80% */\n"
"        stop:1 rgba(31, 38, 73, 0.2)   /* \320\275\320\270\320\266\320\275\320\270\320\271 \321\206\320\262\320\265\321\202 \321\201 \320\277\321\200\320\276\320\267\321\200\320\260\321\207\320\275\320\276\321\201\321\202\321\214\321\216 80% */\n"
"    ); /* \320\261\320\276\320\273\320\265\320\265 \321\202\321\221\320\274\320\275\321\213\320\271 \320\263\321\200\320\260\320\264\320\270\320\265\320\275\321\202 \320\277\321"
                        "\200\320\270 \320\275\320\260\320\266\320\260\321\202\320\270\320\270 */\n"
"}"));
        sUpgrInvFlag_QL = new QLabel(updInventSc_QGB);
        sUpgrInvFlag_QL->setObjectName("sUpgrInvFlag_QL");
        sUpgrInvFlag_QL->setGeometry(QRect(130, 10, 41, 20));
        sUpgrInvFlag_QL->setFont(font4);
        easyDescr_QL_18->raise();
        easyTxt_QL_29->raise();
        upgradeCostS_QL->raise();
        icon_QL_45->raise();
        icon_QL_46->raise();
        sUpgrInvFlag_QL->raise();
        updInventSc_QPB->raise();
        gameStatisticsO_QGB = new QGroupBox(game_QW);
        gameStatisticsO_QGB->setObjectName("gameStatisticsO_QGB");
        gameStatisticsO_QGB->setEnabled(true);
        gameStatisticsO_QGB->setGeometry(QRect(820, 140, 281, 141));
        gameStatisticsO_QGB->setStyleSheet(QString::fromUtf8(""));
        moneyCount_QGB = new QGroupBox(gameStatisticsO_QGB);
        moneyCount_QGB->setObjectName("moneyCount_QGB");
        moneyCount_QGB->setGeometry(QRect(0, -30, 101, 171));
        moneyCount_QGB->setStyleSheet(QString::fromUtf8("QGroupBox {\n"
"	border: 0px;\n"
"	background-color: rgba(0,0,0,0.0);\n"
"}\n"
"\n"
"QLabel {\n"
"    qproperty-alignment: 'AlignCenter'; /* \320\262\321\213\321\200\320\260\320\262\320\275\320\270\320\262\320\260\320\275\320\270\320\265 \321\202\320\265\320\272\321\201\321\202\320\260 \320\277\320\276 \321\206\320\265\320\275\321\202\321\200\321\203 */\n"
"}\n"
""));
        icon_QL_10 = new QLabel(moneyCount_QGB);
        icon_QL_10->setObjectName("icon_QL_10");
        icon_QL_10->setGeometry(QRect(35, 39, 41, 51));
        icon_QL_10->setFont(font4);
        icon_QL_10->setPixmap(QPixmap(QString::fromUtf8(":/RAWDATA/menu/moneyIcon.png")));
        icon_QL_10->setScaledContents(true);
        line_QL_10 = new QLabel(moneyCount_QGB);
        line_QL_10->setObjectName("line_QL_10");
        line_QL_10->setGeometry(QRect(20, 138, 71, 2));
        line_QL_10->setMaximumSize(QSize(16777215, 2));
        line_QL_10->setFont(font4);
        line_QL_10->setStyleSheet(QString::fromUtf8("border: 1px solid white;"));
        text_QL_10 = new QLabel(moneyCount_QGB);
        text_QL_10->setObjectName("text_QL_10");
        text_QL_10->setGeometry(QRect(0, 97, 111, 35));
        text_QL_10->setFont(font5);
        money_QL = new QLabel(moneyCount_QGB);
        money_QL->setObjectName("money_QL");
        money_QL->setGeometry(QRect(20, 146, 71, 16));
        money_QL->setFont(font5);
        timeSession_QGB = new QGroupBox(gameStatisticsO_QGB);
        timeSession_QGB->setObjectName("timeSession_QGB");
        timeSession_QGB->setGeometry(QRect(80, -30, 101, 171));
        timeSession_QGB->setStyleSheet(QString::fromUtf8("QGroupBox {\n"
"	border: 0px;\n"
"	background-color: rgba(0,0,0,0.0);\n"
"}\n"
"\n"
"QLabel {\n"
"    qproperty-alignment: 'AlignCenter'; /* \320\262\321\213\321\200\320\260\320\262\320\275\320\270\320\262\320\260\320\275\320\270\320\265 \321\202\320\265\320\272\321\201\321\202\320\260 \320\277\320\276 \321\206\320\265\320\275\321\202\321\200\321\203 */\n"
"}\n"
""));
        icon_QL_11 = new QLabel(timeSession_QGB);
        icon_QL_11->setObjectName("icon_QL_11");
        icon_QL_11->setGeometry(QRect(30, 39, 44, 44));
        icon_QL_11->setFont(font4);
        icon_QL_11->setPixmap(QPixmap(QString::fromUtf8(":/RAWDATA/menu/timeIcon.png")));
        icon_QL_11->setScaledContents(true);
        line_QL_11 = new QLabel(timeSession_QGB);
        line_QL_11->setObjectName("line_QL_11");
        line_QL_11->setGeometry(QRect(20, 138, 71, 2));
        line_QL_11->setMaximumSize(QSize(16777215, 2));
        line_QL_11->setFont(font4);
        line_QL_11->setStyleSheet(QString::fromUtf8("border: 1px solid white;"));
        text_QL_11 = new QLabel(timeSession_QGB);
        text_QL_11->setObjectName("text_QL_11");
        text_QL_11->setGeometry(QRect(0, 97, 111, 35));
        text_QL_11->setFont(font5);
        scans_QL = new QLabel(timeSession_QGB);
        scans_QL->setObjectName("scans_QL");
        scans_QL->setGeometry(QRect(20, 146, 71, 16));
        scans_QL->setFont(font5);
        flags_QGB = new QGroupBox(gameStatisticsO_QGB);
        flags_QGB->setObjectName("flags_QGB");
        flags_QGB->setGeometry(QRect(160, -30, 101, 171));
        flags_QGB->setStyleSheet(QString::fromUtf8("QGroupBox {\n"
"	border: 0px;\n"
"	background-color: rgba(0,0,0,0.0);\n"
"}\n"
"\n"
"QLabel {\n"
"    qproperty-alignment: 'AlignCenter'; /* \320\262\321\213\321\200\320\260\320\262\320\275\320\270\320\262\320\260\320\275\320\270\320\265 \321\202\320\265\320\272\321\201\321\202\320\260 \320\277\320\276 \321\206\320\265\320\275\321\202\321\200\321\203 */\n"
"}\n"
""));
        icon_QL_12 = new QLabel(flags_QGB);
        icon_QL_12->setObjectName("icon_QL_12");
        icon_QL_12->setGeometry(QRect(30, 39, 44, 44));
        icon_QL_12->setFont(font4);
        icon_QL_12->setPixmap(QPixmap(QString::fromUtf8(":/RAWDATA/menu/flagIcon.png")));
        icon_QL_12->setScaledContents(true);
        line_QL_12 = new QLabel(flags_QGB);
        line_QL_12->setObjectName("line_QL_12");
        line_QL_12->setGeometry(QRect(20, 138, 71, 2));
        line_QL_12->setMaximumSize(QSize(16777215, 2));
        line_QL_12->setFont(font4);
        line_QL_12->setStyleSheet(QString::fromUtf8("border: 1px solid white;"));
        text_QL_12 = new QLabel(flags_QGB);
        text_QL_12->setObjectName("text_QL_12");
        text_QL_12->setGeometry(QRect(0, 97, 111, 35));
        text_QL_12->setFont(font5);
        flags_QL = new QLabel(flags_QGB);
        flags_QL->setObjectName("flags_QL");
        flags_QL->setGeometry(QRect(20, 146, 71, 16));
        flags_QL->setFont(font5);
        demoMove_QPB = new QPushButton(game_QW);
        demoMove_QPB->setObjectName("demoMove_QPB");
        demoMove_QPB->setGeometry(QRect(690, 10, 131, 31));
        demoCoord_QLE = new QLineEdit(game_QW);
        demoCoord_QLE->setObjectName("demoCoord_QLE");
        demoCoord_QLE->setGeometry(QRect(490, 20, 181, 22));
        gameStatisticsO_QGB_2 = new QGroupBox(game_QW);
        gameStatisticsO_QGB_2->setObjectName("gameStatisticsO_QGB_2");
        gameStatisticsO_QGB_2->setEnabled(true);
        gameStatisticsO_QGB_2->setGeometry(QRect(820, 50, 281, 81));
        gameStatisticsO_QGB_2->setStyleSheet(QString::fromUtf8(""));
        icon_QL_17 = new QLabel(gameStatisticsO_QGB_2);
        icon_QL_17->setObjectName("icon_QL_17");
        icon_QL_17->setGeometry(QRect(20, 19, 44, 44));
        icon_QL_17->setFont(font4);
        icon_QL_17->setPixmap(QPixmap(QString::fromUtf8(":/RAWDATA/menu/timeIcon.png")));
        icon_QL_17->setScaledContents(true);
        timeSess_QL = new QLabel(gameStatisticsO_QGB_2);
        timeSess_QL->setObjectName("timeSess_QL");
        timeSess_QL->setGeometry(QRect(90, 20, 151, 41));
        QFont font8;
        font8.setFamilies({QString::fromUtf8("Bahnschrift Light Condensed")});
        font8.setPointSize(26);
        font8.setBold(true);
        font8.setItalic(false);
        font8.setUnderline(false);
        font8.setStrikeOut(false);
        font8.setKerning(true);
        timeSess_QL->setFont(font8);
        stackedWidget->addWidget(game_QW);
        fieldPlay_QGB->raise();
        shop_QGB->raise();
        saveExitMenu_QPB->raise();
        gameStatisticsO_QGB->raise();
        demoMove_QPB->raise();
        demoCoord_QLE->raise();
        gameStatisticsO_QGB_2->raise();
        saperGameWindow->setCentralWidget(centralwidget);
        menubar = new QMenuBar(saperGameWindow);
        menubar->setObjectName("menubar");
        menubar->setGeometry(QRect(0, 0, 1145, 22));
        saperGameWindow->setMenuBar(menubar);
        statusbar = new QStatusBar(saperGameWindow);
        statusbar->setObjectName("statusbar");
        saperGameWindow->setStatusBar(statusbar);

        retranslateUi(saperGameWindow);

        stackedWidget->setCurrentIndex(0);


        QMetaObject::connectSlotsByName(saperGameWindow);
    } // setupUi

    void retranslateUi(QMainWindow *saperGameWindow)
    {
        saperGameWindow->setWindowTitle(QCoreApplication::translate("saperGameWindow", "saperGameWindow", nullptr));
        exitGame_QGB->setTitle(QString());
        exitGame_QL->setText(QCoreApplication::translate("saperGameWindow", "\320\227\320\220\320\232\320\240\320\253\320\242\320\254 \320\230\320\223\320\240\320\243", nullptr));
        exitGame_QPB->setText(QString());
        exitGameIcon_QL->setText(QString());
        levelPlayer_QGB->setTitle(QString());
        levelPlayer_QL->setText(QCoreApplication::translate("saperGameWindow", "\320\243\320\240\320\236\320\222\320\225\320\235\320\254 \320\230\320\223\320\240\320\236\320\232\320\220", nullptr));
        lvlPlayer_QL->setText(QCoreApplication::translate("saperGameWindow", "1", nullptr));
        gameStatistics_QGB->setTitle(QString());
        fastWin_QGB->setTitle(QString());
        icon_QL_5->setText(QString());
        line_QL_5->setText(QString());
        text_QL_5->setText(QCoreApplication::translate("saperGameWindow", "\320\241\320\220\320\234\320\220\320\257 \320\221\320\253\320\241\320\242\320\240\320\220\320\257\n"
"\320\237\320\236\320\221\320\225\320\224\320\220 ", nullptr));
        winTime_QL->setText(QCoreApplication::translate("saperGameWindow", "\320\235\320\225\320\242", nullptr));
        win_QGB->setTitle(QString());
        icon_QL_6->setText(QString());
        line_QL_6->setText(QString());
        text_QL_6->setText(QCoreApplication::translate("saperGameWindow", "\320\232\320\236\320\233-\320\222\320\236\n"
"\320\237\320\236\320\221\320\225\320\224", nullptr));
        winCount_QL->setText(QCoreApplication::translate("saperGameWindow", "\320\235\320\225\320\242", nullptr));
        lose_QGB->setTitle(QString());
        icon_QL_7->setText(QString());
        line_QL_7->setText(QString());
        text_QL_7->setText(QCoreApplication::translate("saperGameWindow", "\320\232\320\236\320\233-\320\222\320\236\n"
"\320\237\320\236\320\240\320\220\320\226\320\225\320\235\320\230\320\231", nullptr));
        loseCount_QL->setText(QCoreApplication::translate("saperGameWindow", "\320\235\320\225\320\242", nullptr));
        loadGame_QGB->setTitle(QString());
        loadTxt_QL->setText(QCoreApplication::translate("saperGameWindow", "\320\227\320\220\320\223\320\240\320\243\320\227\320\230\320\242\320\254 \320\241\320\236\320\245\320\240\320\220\320\235\320\225\320\235\320\235\320\243\320\256 \320\230\320\223\320\240\320\243", nullptr));
        loadGameIcon_QL->setText(QString());
        difficultInfo_QGB->setTitle(QString());
        icon_QL_3->setText(QString());
        line_QL_3->setText(QString());
        text_QL_3->setText(QCoreApplication::translate("saperGameWindow", "\320\241\320\233\320\236\320\226\320\235\320\236\320\241\320\242\320\254\n"
"\320\230\320\223\320\240\320\253", nullptr));
        difficultTxt_QL->setText(QCoreApplication::translate("saperGameWindow", "\320\235\320\225\320\242", nullptr));
        bombInfo_QGB->setTitle(QString());
        icon_QL_4->setText(QString());
        line_QL_4->setText(QString());
        text_QL_4->setText(QCoreApplication::translate("saperGameWindow", "\320\234\320\230\320\235 \320\235\320\220\n"
"\320\232\320\220\320\240\320\242\320\225", nullptr));
        bombInfo_QL->setText(QCoreApplication::translate("saperGameWindow", "\320\235\320\225\320\242", nullptr));
        moneyInfo_QGB->setTitle(QString());
        icon_QL_2->setText(QString());
        line_QL_2->setText(QString());
        text_QL_2->setText(QCoreApplication::translate("saperGameWindow", "\320\232\320\236\320\233-\320\222\320\236\n"
"\320\234\320\236\320\235\320\225\320\242", nullptr));
        moneyCount_QL->setText(QCoreApplication::translate("saperGameWindow", "\320\235\320\225\320\242", nullptr));
        sessionInfo_QGB->setTitle(QString());
        icon_QL->setText(QString());
        line_QL->setText(QString());
        text_QL->setText(QCoreApplication::translate("saperGameWindow", "\320\222\320\240\320\225\320\234\320\257\n"
"\320\241\320\225\320\241\320\241\320\230\320\230", nullptr));
        sessionTime_QL->setText(QCoreApplication::translate("saperGameWindow", "\320\235\320\225\320\242", nullptr));
        loadGame_QPB->setText(QString());
        newGame_QGB->setTitle(QString());
        newGame_QL->setText(QCoreApplication::translate("saperGameWindow", "\320\235\320\236\320\222\320\220\320\257 \320\230\320\223\320\240\320\220", nullptr));
        newGameIcon_QL->setText(QString());
        easyStart_QGB->setTitle(QString());
        easyDescr_QL->setText(QCoreApplication::translate("saperGameWindow", "\320\233\320\225\320\223\320\232\320\236", nullptr));
        easyTxt_QL->setText(QCoreApplication::translate("saperGameWindow", "\320\234\320\220\320\233\320\225\320\235\320\254\320\232\320\236\320\225 \320\237\320\236\320\233\320\225. \320\234\320\220\320\233\320\236 \320\234\320\230\320\235", nullptr));
        easyStart_QPB->setText(QString());
        midStart_QGB->setTitle(QString());
        midTxt_QL->setText(QCoreApplication::translate("saperGameWindow", "\320\241\320\240\320\225\320\224\320\235\320\230\320\231", nullptr));
        midDescr_QL->setText(QCoreApplication::translate("saperGameWindow", "\320\241\320\240\320\225\320\224\320\235\320\225\320\225 \320\237\320\236\320\233\320\225. \320\235\320\225\320\234\320\235\320\236\320\223\320\236 \320\234\320\230\320\235", nullptr));
        midStart_QPB->setText(QString());
        highStart_QGB->setTitle(QString());
        highTxt_QL->setText(QCoreApplication::translate("saperGameWindow", "\320\222\320\253\320\241\320\236\320\232\320\230\320\231", nullptr));
        highDescr_QL->setText(QCoreApplication::translate("saperGameWindow", "\320\221\320\236\320\233\320\254\320\250\320\236\320\225 \320\237\320\236\320\233\320\225. \320\234\320\235\320\236\320\223\320\236 \320\234\320\230\320\235", nullptr));
        highStart_QPB->setText(QString());
        saveExitMenu_QPB->setText(QCoreApplication::translate("saperGameWindow", "\320\241\320\236\320\245\320\240\320\220\320\235\320\230\320\242\320\254 \320\230 \320\222\320\253\320\231\320\242\320\230", nullptr));
        fieldPlay_QGB->setTitle(QString());
        shop_QGB->setTitle(QString());
        buyFlag_QGB->setTitle(QString());
        flagDescr_QL->setText(QCoreApplication::translate("saperGameWindow", "\320\244\320\233\320\220\320\226\320\236\320\232", nullptr));
        flagTxt_QL->setText(QCoreApplication::translate("saperGameWindow", "\320\232\320\243\320\237\320\230\320\242\320\254 \320\244\320\233\320\220\320\226\320\236\320\232", nullptr));
        flagCost_QL->setText(QCoreApplication::translate("saperGameWindow", "0", nullptr));
        icon_QL_9->setText(QString());
        icon_QL_14->setText(QString());
        buyFlags_QPB->setText(QString());
        shopTxt_QL->setText(QCoreApplication::translate("saperGameWindow", "\320\234\320\220\320\223\320\220\320\227\320\230\320\235 [\320\235\320\225 \320\224\320\236\320\241\320\242\320\243\320\237\320\225\320\235]", nullptr));
        randBomb_QGB->setTitle(QString());
        easyDescr_QL_3->setText(QCoreApplication::translate("saperGameWindow", "\320\232\320\220\320\240\320\242\320\220", nullptr));
        easyTxt_QL_4->setText(QCoreApplication::translate("saperGameWindow", "\320\241\320\233\320\243\320\247\320\220\320\231\320\235\320\220\320\257 \320\221\320\236\320\234\320\221\320\220", nullptr));
        opRandCost_QL->setText(QCoreApplication::translate("saperGameWindow", "0", nullptr));
        icon_QL_15->setText(QString());
        icon_QL_16->setText(QString());
        opRandBomb_QPB->setText(QString());
        statMap_QL->setText(QCoreApplication::translate("saperGameWindow", "0/0", nullptr));
        updInvent_QGB->setTitle(QString());
        easyDescr_QL_15->setText(QCoreApplication::translate("saperGameWindow", "\320\230\320\235\320\222\320\225\320\235\320\242\320\220\320\240\320\254", nullptr));
        easyTxt_QL_28->setText(QCoreApplication::translate("saperGameWindow", "+\320\232\320\236\320\233-\320\222\320\236 \320\244\320\233\320\220\320\226\320\232\320\236\320\222", nullptr));
        upgradeCost_QL->setText(QCoreApplication::translate("saperGameWindow", "0", nullptr));
        icon_QL_39->setText(QString());
        icon_QL_40->setText(QString());
        updInvent_QPB->setText(QString());
        fUpgrInvFlag_QL->setText(QCoreApplication::translate("saperGameWindow", "0/0", nullptr));
        buyScan_QGB->setTitle(QString());
        easyDescr_QL_16->setText(QCoreApplication::translate("saperGameWindow", "\320\241\320\232\320\220\320\235\320\225\320\240", nullptr));
        easyTxt_QL_30->setText(QCoreApplication::translate("saperGameWindow", "\320\232\320\243\320\237\320\230\320\242\320\254 \320\241\320\232\320\220\320\235\320\225\320\240", nullptr));
        scannerCost_QL->setText(QCoreApplication::translate("saperGameWindow", "0", nullptr));
        icon_QL_41->setText(QString());
        icon_QL_42->setText(QString());
        buyScanner_QPB->setText(QString());
        upgrInvScan_QGB->setTitle(QString());
        easyDescr_QL_17->setText(QCoreApplication::translate("saperGameWindow", "\320\222\320\230\320\224\320\230\320\234\320\236\320\241\320\242\320\254", nullptr));
        easyTxt_QL_32->setText(QCoreApplication::translate("saperGameWindow", "+\320\236\320\221\320\233\320\220\320\241\320\242\320\254 \320\241\320\232\320\220\320\235\320\225\320\240\320\220", nullptr));
        scanVisCost_QL->setText(QCoreApplication::translate("saperGameWindow", "0", nullptr));
        icon_QL_43->setText(QString());
        icon_QL_44->setText(QString());
        incrVisible_QPB->setText(QString());
        statUpgrScan_QL->setText(QCoreApplication::translate("saperGameWindow", "0/0", nullptr));
        updInventSc_QGB->setTitle(QString());
        easyDescr_QL_18->setText(QCoreApplication::translate("saperGameWindow", "\320\230\320\235\320\222\320\225\320\235\320\242\320\220\320\240\320\254", nullptr));
        easyTxt_QL_29->setText(QCoreApplication::translate("saperGameWindow", "+\320\232\320\236\320\233-\320\222\320\236 \320\241\320\232\320\220\320\235\320\225\320\240\320\236\320\222", nullptr));
        upgradeCostS_QL->setText(QCoreApplication::translate("saperGameWindow", "0", nullptr));
        icon_QL_45->setText(QString());
        icon_QL_46->setText(QString());
        updInventSc_QPB->setText(QString());
        sUpgrInvFlag_QL->setText(QCoreApplication::translate("saperGameWindow", "0/0", nullptr));
        gameStatisticsO_QGB->setTitle(QString());
        moneyCount_QGB->setTitle(QString());
        icon_QL_10->setText(QString());
        line_QL_10->setText(QString());
        text_QL_10->setText(QCoreApplication::translate("saperGameWindow", "\320\232\320\236\320\233-\320\222\320\236\n"
"\320\234\320\236\320\235\320\225\320\242", nullptr));
        money_QL->setText(QCoreApplication::translate("saperGameWindow", "0", nullptr));
        timeSession_QGB->setTitle(QString());
        icon_QL_11->setText(QString());
        line_QL_11->setText(QString());
        text_QL_11->setText(QCoreApplication::translate("saperGameWindow", "\320\232\320\236\320\233-\320\222\320\236\n"
"\320\241\320\232\320\220\320\235\320\225\320\240\320\236\320\222", nullptr));
        scans_QL->setText(QCoreApplication::translate("saperGameWindow", "0/0", nullptr));
        flags_QGB->setTitle(QString());
        icon_QL_12->setText(QString());
        line_QL_12->setText(QString());
        text_QL_12->setText(QCoreApplication::translate("saperGameWindow", "\320\232\320\236\320\233-\320\222\320\236\n"
"\320\244\320\233\320\220\320\226\320\232\320\236\320\222", nullptr));
        flags_QL->setText(QCoreApplication::translate("saperGameWindow", "0/0", nullptr));
        demoMove_QPB->setText(QCoreApplication::translate("saperGameWindow", "\320\241\320\224\320\225\320\233\320\220\320\242\320\254 \320\245\320\236\320\224", nullptr));
        demoCoord_QLE->setInputMask(QString());
        demoCoord_QLE->setText(QString());
        demoCoord_QLE->setPlaceholderText(QCoreApplication::translate("saperGameWindow", "X:Y", nullptr));
        gameStatisticsO_QGB_2->setTitle(QString());
        icon_QL_17->setText(QString());
        timeSess_QL->setText(QCoreApplication::translate("saperGameWindow", "00:00:00", nullptr));
    } // retranslateUi

};

namespace Ui {
    class saperGameWindow: public Ui_saperGameWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_SAPERGAMEWINDOW_H
