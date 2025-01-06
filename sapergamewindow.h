#ifndef SAPERGAMEWINDOW_H
#define SAPERGAMEWINDOW_H

#include <QMainWindow>
#include <QLayoutItem>
#include <QGridLayout>
#include <QKeyEvent>
#include <QMessageBox>
#include <QMediaPlayer>
#include <QAudioOutput>
#include <QLabel>

#include <QTimer>

#include <QGraphicsOpacityEffect>
#include <QPropertyAnimation>
#include <cstdlib>  // Для rand и srand
#include <ctime>    // Для генерации случайного числа

#include <playerprofile.h>

#include "gamefield.h"
#include "player.h"
#include "shopgame.h"
#include "timercore.h"

//TODO: почему такая мешанина русских и английских комментариев? 
//TODO: поля должны быть объявлены рядом, методы так же рядом. 

QT_BEGIN_NAMESPACE
namespace Ui {
class saperGameWindow;
}
QT_END_NAMESPACE

class saperGameWindow : public QMainWindow
{
    Q_OBJECT
private:
    /* Play Sound */
    void playSound(QString qsUrl);
    /* Custom message box */
    void messageCustBox(QString qsMessage);

public:
    saperGameWindow(QWidget *parent = nullptr);
    ~saperGameWindow();

private slots:
    void on_exitGame_QPB_clicked();

    void on_easyStart_QPB_clicked();

    void on_midStart_QPB_clicked();

    void on_buyFlags_QPB_clicked();

    void on_updInvent_QPB_clicked();

    void on_saveExitMenu_QPB_clicked();

    void on_opRandBomb_QPB_clicked();

    void on_incrVisible_QPB_clicked();

    void on_buyScanner_QPB_clicked();

    void on_updInventSc_QPB_clicked();

    void on_demoMove_QPB_clicked();

private:
    Ui::saperGameWindow *ui;
    PlayerProfile* _ptrPlayerProfile;

    /*Save Game*/
    void saveGame(const std::string &fileName);
    void loadGame(const std::string &fileName);
    /* Menu */
    void addExpPlayer(int iExp);
    /* Game */
    TimerCore* timer;  // Указатель на TimerCore
    QTimer* qtTimer;   // Указатель на QTimer

    gameField* _ptrGameField;
    QGridLayout* _ptrGridLayout;
    void makeFieldWindow();

    /* Player */
    // Отображение игрока в окне
    QLabel* _ptrPlayerLabel;

    player* _ptrPlayer;
    // Координаты
    int _kX;
    int _kY;
    bool _bEnableMovement;
    void movePlayer(int x, int y);
    void placeFlag();
    void useBombScanner();
    void openRandomBomb();

    void destroyGame();

    shopgame* _ptrShopGame;
protected:
    void keyPressEvent(QKeyEvent *event) override;
};
#endif // SAPERGAMEWINDOW_H
