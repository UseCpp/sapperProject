#include "sapergamewindow.h"
#include "ui_sapergamewindow.h"

saperGameWindow::saperGameWindow(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::saperGameWindow)
    , _kX{0}
    , _kY{0}
    , _bEnableMovement {false}
    , timer{new TimerCore()}
    , qtTimer{new QTimer(this)}
{
    ui->setupUi(this);
    _ptrPlayerProfile = new PlayerProfile();
    loadGame("gameData.save"); // переделать под загрузку данных в меню

    // connect для QTimer
    QObject::connect(qtTimer, &QTimer::timeout, this, [&]() {
        ui->timeSess_QL->setText(QString::fromStdString(timer->elapsedString()));
    });
}

saperGameWindow::~saperGameWindow()
{
    delete ui;
}
// Выйти из игры
void saperGameWindow::on_exitGame_QPB_clicked()
{
    QCoreApplication::quit();
}

void saperGameWindow::destroyGame(){
    qtTimer->stop();
    timer->stop();
    timer->reset();
    _bEnableMovement = false;
    delete _ptrShopGame;    _ptrShopGame = nullptr;
    delete _ptrGridLayout;  _ptrGridLayout = nullptr;
    delete _ptrGameField;   _ptrGameField = nullptr;
    delete _ptrPlayer;      _ptrPlayer = nullptr;
    delete _ptrPlayerLabel; _ptrPlayerLabel = nullptr;
}
// Выйти в главное меню и сохранится
void saperGameWindow::on_saveExitMenu_QPB_clicked()
{
    destroyGame();
    ui->scans_QL->setText("00:00:00");
    ui->stackedWidget->setCurrentIndex(0);
}
// Проиграть звук
void saperGameWindow::playSound(QString qsUrl){
    QMediaPlayer *playerSound {new QMediaPlayer};
    QAudioOutput *audioOutput {new QAudioOutput};
    playerSound->setAudioOutput(audioOutput);
    playerSound->setSource(QUrl(qsUrl));
    playerSound->play();
}
// Кастомный mbox
void saperGameWindow::messageCustBox(QString qsMessage){
    QMessageBox msgBox;
    msgBox.setIcon(QMessageBox::NoIcon);
    msgBox.setText(qsMessage);
    msgBox.exec();
}
void saperGameWindow::on_demoMove_QPB_clicked()
{
    QStringList parts {ui->demoCoord_QLE->text().split(':')};
    int x; int y;
    if (parts.size() == 2) {
        x = parts[0].toInt();
        y = parts[1].toInt();
        movePlayer(x, y);
    }
}

void saperGameWindow::saveGame(const std::string &fileName) {
    SaveData data{};
    data.experience = _ptrPlayerProfile->getPlayerXP();
    data.levelPlayer = _ptrPlayerProfile->getPlayerLvl();
    data.sTime = _ptrPlayerProfile->getTime();
    data.iWinCount = _ptrPlayerProfile->getWin();
    data.iLoseCount = _ptrPlayerProfile->getLose();
    SaveManager::save(data, fileName);
}

void saperGameWindow::loadGame(const std::string &fileName) {
    SaveData data = SaveManager::load(fileName);

    _ptrPlayerProfile->setExpirience(data.experience);
    _ptrPlayerProfile->setPlayerLvl(data.levelPlayer);
    _ptrPlayerProfile->setLose(data.iLoseCount);
    _ptrPlayerProfile->setWin(data.iWinCount);
    _ptrPlayerProfile->setTime(data.sTime);

    ui->lvlProgress_QPB->setValue(_ptrPlayerProfile->getPlayerXP());
    ui->lvlPlayer_QL->setText(QString::number(_ptrPlayerProfile->getPlayerLvl()));
    ui->loseCount_QL->setText(QString::number(_ptrPlayerProfile->getLose()));
    ui->winCount_QL->setText(QString::number(_ptrPlayerProfile->getWin()));
    ui->winTime_QL->setText(QString::fromStdString(_ptrPlayerProfile->getTime()));
}

void saperGameWindow::addExpPlayer(int iExp){
    int iNewLvl{_ptrPlayerProfile->getPlayerXP() + iExp};
    _ptrPlayerProfile->setExpirience(iNewLvl);

    if(_ptrPlayerProfile->getPlayerXP() >= 100) {
        _ptrPlayerProfile->setExpirience(0);

        int iNewLvl{_ptrPlayerProfile->getPlayerLvl()+1};
        _ptrPlayerProfile->setPlayerLvl(iNewLvl);
    }
}

// Начать легкую игру
void saperGameWindow::on_easyStart_QPB_clicked()
{
    // size AxA, shopCount, bombCount
    // ОТРЕДАКТИРОВАТЬ ГЕНЕРАЦИЮ ПУТИ!!!!!!!!!!!
    //_ptrGameField = new class gameField(18, 5, 200);       // Высокая сложность
    //_ptrGameField = new class gameField(11, 4, 15);       // Средняя сложность
    //_ptrGameField = new class gameField(8, 4, 12);      // Низкая сложность

    ui->stackedWidget->setCurrentIndex(1);
    _ptrGameField = new gameField(18, 5, 140);

    auto startCell = _ptrGameField->getStartCell();
    auto firstValue  = startCell.first;
    auto secondValue = startCell.second;
    _ptrPlayer = new player(firstValue, secondValue);

    _ptrPlayer->setMoneyStart(10);
    _ptrPlayer->setCostCell(5);
    ui->money_QL->setText(QString::number(_ptrPlayer->getMoney()));

    _ptrPlayer->setFlagsStart(5);
    _ptrPlayer->setMaxCountFlagsStart(10);

    _ptrShopGame = new shopgame();
    _ptrShopGame->setCostFlag(1);
    _ptrShopGame->setCostUpgradeInventoryFlag(15);
    _ptrShopGame->setMaxUpgradeInventoryFlag(20);
    ui->flags_QL->setText(QString("%1/%2").arg(_ptrPlayer->getCountFlags()).arg(_ptrPlayer->getMaxCountFlags()));
    ui->flagCost_QL->setText(QString::number(_ptrShopGame->getCostFlags()));
    ui->fUpgrInvFlag_QL->setText(QString("%1/%2").arg(_ptrShopGame->getCurrentUpgradeInventoryFlag()).arg(_ptrShopGame->getMaxUpgradeInventoryFlag()));
    ui->upgradeCost_QL->setText(QString::number(_ptrShopGame->getCostUpgradeInventoryFlag()));

    _ptrPlayer->setScannerCount(5);
    _ptrPlayer->setMaxCountScanner(5);
    _ptrPlayer->setRadiusScanner(1);
    _ptrShopGame->setCostScanner(2);
    _ptrShopGame->setCostUpgradeScanner(5);
    _ptrShopGame->setMaxUpgradeScanner(3);
    _ptrShopGame->setCostUpgradeInventoryScanner(5);
    _ptrShopGame->setMaxUpgradeInventoryScanner(3);
    ui->scans_QL->setText(QString("%1/%2").arg(_ptrPlayer->getScannerCount()).arg(_ptrPlayer->getMaxCountScanner()));
    ui->scannerCost_QL->setText(QString::number(_ptrShopGame->getCostScanner()));
    ui->statUpgrScan_QL->setText(QString("%1/%2").arg(_ptrShopGame->getCurrentUpgradeScanner()).arg(_ptrShopGame->getMaxUpgradeScanner()));
    ui->scanVisCost_QL->setText(QString::number(_ptrShopGame->getCostUpgradeScanner()));
    ui->upgradeCostS_QL->setText(QString::number(_ptrShopGame->getCostUpgradeScanner()));
    ui->sUpgrInvFlag_QL->setText(QString("%1/%2").arg(_ptrShopGame->getCurrentUpgradeInventoryScanner()).arg(_ptrShopGame->getMaxUpgradeInventoryScanner()));

    _ptrShopGame->setCostOpenRandBomb(2);
    _ptrShopGame->setMaxCountOpenRandBomb(19);
    ui->opRandCost_QL->setText(QString::number(_ptrShopGame->getCostOpenRandBomb()));
    ui->statMap_QL->setText(QString("%1/%2").arg(_ptrShopGame->getCurrentOpenRandBomb()).arg(_ptrShopGame->getMaxOpenRandBomb()));

    ui->shop_QGB->setEnabled(false);
    timer->start();
    qtTimer->start(1000);

    makeFieldWindow();
}

void saperGameWindow::on_midStart_QPB_clicked()
{
     //ui->stackedWidget->setCurrentIndex(0);
}

void saperGameWindow::makeFieldWindow() {
    const auto &field = _ptrGameField->getField();
    auto size = field.size();
    _ptrGridLayout = new QGridLayout(ui->fieldPlay_QGB);

    for (size_t i = 0; i < size; ++i) {
        for (size_t j = 0; j < size; ++j) {
            QLabel *label = new QLabel(ui->fieldPlay_QGB);
            QString imagePath {field[i][j].isStartCell()    ? "://RAWDATA/game/startCell.png"
                                : field[i][j].isExitCell()     ? "://RAWDATA/game/exitCell.png"
                                : field[i][j].containsBomb()   ? "://RAWDATA/game/cellMine.png"
                                : field[i][j].isHasShop()      ? "://RAWDATA/game/cellShop.png"
                                                           : "://RAWDATA/game/emptyCell.png"};
            label->setPixmap(QPixmap(imagePath));
            label->setFixedSize(32, 32);
            label->setScaledContents(true);
            _ptrGridLayout->addWidget(label, i, j);
        }
    }

    ui->fieldPlay_QGB->setLayout(_ptrGridLayout);

    _ptrPlayerLabel = new QLabel(ui->fieldPlay_QGB);
    _ptrPlayerLabel->setPixmap(QPixmap("://RAWDATA/game/playerCell.png"));
    _ptrPlayerLabel->setFixedSize(32, 32);
    _ptrPlayerLabel->setScaledContents(true);

    auto startCell = _ptrGameField->getStartCell();
    _ptrGridLayout->addWidget(_ptrPlayerLabel, startCell.second, startCell.first);

    _bEnableMovement = true;
}


void saperGameWindow::keyPressEvent(QKeyEvent *event) {
    if (!_bEnableMovement) return;

    int dx {0}; // Горизонталь
    int dy {0}; // Вертикаль

    switch (event->key()) {
    case Qt::Key_W:
        dy = -1; // Вверх (уменьшаем y)
        break;
    case Qt::Key_S:
        dy = 1; // Вниз (увеличиваем y)
        break;
    case Qt::Key_A:
        dx = -1; // Влево (уменьшаем x)
        break;
    case Qt::Key_D:
        dx = 1; // Вправо (увеличиваем x)
        break;
    case Qt::Key_X:
        placeFlag();
        return;
        break;
    case Qt::Key_Z:
        useBombScanner();
        return;
        break;
    default:
        return;
    }
    movePlayer(dx, dy);
}

void saperGameWindow::placeFlag() {

    playerEventResult result {_ptrPlayer->placeFlag(_ptrGameField)};

    int newX {_ptrPlayer->getX()};
    int newY {_ptrPlayer->getY()};
    QLabel *cellLabel {static_cast<QLabel*>(_ptrGridLayout->itemAtPosition(newY, newX)->widget())};

    switch (result){
    case playerEventResult::success:
        if (cellLabel) cellLabel->setPixmap(QPixmap("://RAWDATA/game/flagCell.png"));
        playSound("qrc:/RAWDATA/sound/placeItem.mp3");
        break;
    case playerEventResult::undoEvent:
        if (cellLabel) cellLabel->setPixmap(QPixmap("://RAWDATA/game/emptyOpenCell.png"));
        playSound("qrc:/RAWDATA/sound/pickupItem.mp3");
        break;
    case playerEventResult::dontHaveItem:
    case playerEventResult::fail:
        playSound("qrc:/RAWDATA/sound/error.mp3");
        break;
    }
    ui->flags_QL->setText(QString::number(_ptrPlayer->getCountFlags()) + "/"
                          + QString::number(_ptrPlayer->getMaxCountFlags()));
}

void saperGameWindow::useBombScanner() {
    std::vector<std::pair<int, int>> ibombCells;
    auto result = _ptrPlayer->useScanner(_ptrGameField, ibombCells);

    switch (result) {
    case playerEventResult::success: {
        // Подсвечиваем все найденные бомбы
        for (auto [x, y] : ibombCells) {
            QLabel* tempLabel = new QLabel;
            tempLabel->setPixmap(QPixmap("://RAWDATA/game/detectedCell.png"));
            tempLabel->setFixedSize(32, 32);
            tempLabel->setScaledContents(true);

            auto opacityEffect = new QGraphicsOpacityEffect(tempLabel);
            tempLabel->setGraphicsEffect(opacityEffect);

            // Плавное появление
            auto fadeIn = new QPropertyAnimation(opacityEffect, "opacity");
            fadeIn->setDuration(500);
            fadeIn->setStartValue(0.0);
            fadeIn->setEndValue(1.0);
            fadeIn->start(QAbstractAnimation::DeleteWhenStopped);

            _ptrGridLayout->addWidget(tempLabel, y, x);

            // Задержка и последующее плавное исчезновение
            QTimer::singleShot(900, [tempLabel, opacityEffect]() {
                auto fadeOut = new QPropertyAnimation(opacityEffect, "opacity");
                fadeOut->setDuration(500);
                fadeOut->setStartValue(1.0);
                fadeOut->setEndValue(0.0);
                QObject::connect(fadeOut, &QPropertyAnimation::finished, [tempLabel]() {
                    tempLabel->deleteLater();
                });
                fadeOut->start(QAbstractAnimation::DeleteWhenStopped);
            });
        }
        playSound("qrc:/RAWDATA/sound/bombScanner.mp3");
        break;
    }
    case playerEventResult::dontHaveItem:
    case playerEventResult::fail:
        playSound("qrc:/RAWDATA/sound/error.mp3");
        break;
    }

    ui->scans_QL->setText(QString("%1/%2")
                              .arg(_ptrPlayer->getScannerCount())
                              .arg(_ptrPlayer->getMaxCountScanner()));
}

void saperGameWindow::openRandomBomb() {
    std::pair<int, int> iRandBombCoord;
    playerEventResult result {_ptrPlayer->useOpenRandBomb(_ptrGameField, iRandBombCoord)};
    auto [x, y] = iRandBombCoord;
    QLabel *cellLabel {static_cast<QLabel*>(_ptrGridLayout->itemAtPosition(y, x)->widget())};

    switch (result){
    case playerEventResult::success:
        // Открываем выбранную ячейку
        if (cellLabel) {
            cellLabel->setPixmap(QPixmap("://RAWDATA/game/cellMine.png"));
            _ptrGameField->getCell(x, y).setVisibleBomb();
        }
        break;
    case playerEventResult::fail:
        playSound("qrc:/RAWDATA/sound/error.mp3");
        break;
    }
}

void saperGameWindow::movePlayer(int dx, int dy) {
    int newX = _ptrPlayer->getX() + dx;
    int newY = _ptrPlayer->getY() + dy;
    int size = _ptrGameField->getField().size();

    // Проверяем выход за границы поля
    if (newX < 0 || newX >= size || newY < 0 || newY >= size) return;

    _ptrPlayer->move(newX, newY);
    _ptrPlayer->interactWithCell(_ptrGameField->getCell(newX, newY));

    auto &cell = _ptrGameField->getCell(newX, newY);
    if (cell.isOpened() && !cell.isFlagged()) {
        if (auto cellLabel = static_cast<QLabel*>(_ptrGridLayout->itemAtPosition(newY, newX)->widget()))
            cellLabel->setPixmap(QPixmap("://RAWDATA/game/emptyOpenCell.png"));
    }

    ui->money_QL->setText(QString::number(_ptrPlayer->getMoney()));

    auto gridLayout = static_cast<QGridLayout*>(ui->fieldPlay_QGB->layout());
    gridLayout->addWidget(_ptrPlayerLabel, newY, newX);



    _ptrPlayerProfile->setTime(timer->elapsedString());
    if (_ptrPlayer->getAvailableExit()) { // победа
        addExpPlayer(50);
        _ptrPlayerProfile->addWin();
        saveGame("gameData.save");

        destroyGame();
        ui->scans_QL->setText("00:00:00");
        messageCustBox("Выход найден. Игра окончена");

        loadGame("gameData.save");
        ui->stackedWidget->setCurrentIndex(0);
        return;
    }

    if (_ptrPlayer->getAvailableShop()) {
        ui->shopTxt_QL->setText("МАГАЗИН [ДОСТУПЕН]");
        ui->shop_QGB->setEnabled(true);
        playSound("qrc:/RAWDATA/sound/openShop.mp3");
    } else {
        ui->shop_QGB->setEnabled(false);
        ui->shopTxt_QL->setText("МАГАЗИН [НЕ ДОСТУПЕН]");
    }

    if (!_ptrPlayer->isLivePlayer()) {      // lose
        playSound("qrc:/RAWDATA/sound/explodeBomb.mp3");
        _ptrPlayerProfile->addLose();
        saveGame("gameData.save");

        destroyGame();
        ui->scans_QL->setText("00:00:00");
        messageCustBox("Бомба взорвалась. Игра окончена");

        loadGame("gameData.save");
        ui->stackedWidget->setCurrentIndex(0);
    }
}

/* shop */
void saperGameWindow::on_buyFlags_QPB_clicked()
{
    ShopResult result {_ptrShopGame->buyFlags(_ptrPlayer)};

    switch (result){
        case ShopResult::success:
        ui->flags_QL->setText(QString::number(_ptrPlayer->getCountFlags()) + "/"
                              + QString::number(_ptrPlayer->getMaxCountFlags()));
        ui->money_QL->setText(QString::number(_ptrPlayer->getMoney()));
        playSound("qrc:/RAWDATA/sound/buyShop.mp3");
        break;
    case ShopResult::noInventorySpace:
        playSound("qrc:/RAWDATA/sound/error.mp3");
        messageCustBox("Нет места в инвентаре");
        break;
    case ShopResult::notEnoughMoney:
        playSound("qrc:/RAWDATA/sound/error.mp3");
        messageCustBox("Не хватает денег");
        break;
    }
}

void saperGameWindow::on_updInvent_QPB_clicked()
{
    ShopResult result {_ptrShopGame->buyUpgradeInventoryFlags(_ptrPlayer)};

    switch (result){
    case ShopResult::success:
        ui->flags_QL->setText(QString::number(_ptrPlayer->getCountFlags()) + "/"
                              + QString::number(_ptrPlayer->getMaxCountFlags()));
        ui->fUpgrInvFlag_QL->setText(QString::number(_ptrShopGame->getCurrentUpgradeInventoryFlag()) + "/"
                                     + QString::number(_ptrShopGame->getMaxUpgradeInventoryFlag()));
        ui->money_QL->setText(QString::number(_ptrPlayer->getMoney()));
        playSound("qrc:/RAWDATA/sound/buyShop.mp3");
        break;
    case ShopResult::maxSoldOutLimit:
        playSound("qrc:/RAWDATA/sound/error.mp3");
        break;
    case ShopResult::notEnoughMoney:
        playSound("qrc:/RAWDATA/sound/error.mp3");
        messageCustBox("Не хватает денег");
        break;
    }
}

void saperGameWindow::on_buyScanner_QPB_clicked()
{
    ShopResult result {_ptrShopGame->buyBombScanner(_ptrPlayer)};

    switch (result){
    case ShopResult::success:
        ui->scans_QL->setText(QString::number(_ptrPlayer->getScannerCount()) + "/"
                              + QString::number(_ptrPlayer->getMaxCountScanner()));
        ui->money_QL->setText(QString::number(_ptrPlayer->getMoney()));
        playSound("qrc:/RAWDATA/sound/buyShop.mp3");
        break;
    case ShopResult::noInventorySpace:
        playSound("qrc:/RAWDATA/sound/error.mp3");
        messageCustBox("Нет места в инвентаре");
        break;
    case ShopResult::notEnoughMoney:
        playSound("qrc:/RAWDATA/sound/error.mp3");
        messageCustBox("Не хватает денег");
        break;
    }
}


void saperGameWindow::on_opRandBomb_QPB_clicked()
{
    ShopResult result {_ptrShopGame->buyOpenRandBomb(_ptrPlayer)};
    switch (result){
    case ShopResult::success:
        ui->money_QL->setText(QString::number(_ptrPlayer->getMoney()));
        ui->statMap_QL->setText(QString::number(_ptrShopGame->getCurrentOpenRandBomb()) + "/"
                                     + QString::number(_ptrShopGame->getMaxOpenRandBomb()));
        openRandomBomb();
        playSound("qrc:/RAWDATA/sound/buyShop.mp3");
        break;
    case ShopResult::maxSoldOutLimit:
        playSound("qrc:/RAWDATA/sound/error.mp3");
        break;
    case ShopResult::notEnoughMoney:
        playSound("qrc:/RAWDATA/sound/error.mp3");
        messageCustBox("Не хватает денег");
        break;
    }
}

void saperGameWindow::on_incrVisible_QPB_clicked()
{
    ShopResult result {_ptrShopGame->buyIncreaseRadiusScanner(_ptrPlayer)};
    switch (result){
    case ShopResult::success:
        ui->money_QL->setText(QString::number(_ptrPlayer->getMoney()));
        ui->statUpgrScan_QL->setText(QString::number(_ptrShopGame->getCurrentUpgradeScanner()) + "/"
                              + QString::number(_ptrShopGame->getMaxUpgradeScanner()));
        playSound("qrc:/RAWDATA/sound/buyShop.mp3");
        break;
    case ShopResult::maxSoldOutLimit:
        playSound("qrc:/RAWDATA/sound/error.mp3");
        break;
    case ShopResult::notEnoughMoney:
        playSound("qrc:/RAWDATA/sound/error.mp3");
        messageCustBox("Не хватает денег");
        break;
    }
}

void saperGameWindow::on_updInventSc_QPB_clicked()
{
    ShopResult result {_ptrShopGame->buyUpgradeInventoryScanner(_ptrPlayer)};

    switch (result){
    case ShopResult::success:
        ui->sUpgrInvFlag_QL->setText(QString::number(_ptrShopGame->getCurrentUpgradeInventoryScanner()) + "/"
                                     + QString::number(_ptrShopGame->getMaxUpgradeInventoryScanner()));
        ui->scans_QL->setText(QString::number(_ptrPlayer->getScannerCount()) + "/"
                              + QString::number(_ptrPlayer->getMaxCountScanner()));
        ui->money_QL->setText(QString::number(_ptrPlayer->getMoney()));
        playSound("qrc:/RAWDATA/sound/buyShop.mp3");
        break;
    case ShopResult::maxSoldOutLimit:
        playSound("qrc:/RAWDATA/sound/error.mp3");
        break;
    case ShopResult::notEnoughMoney:
        playSound("qrc:/RAWDATA/sound/error.mp3");
        messageCustBox("Не хватает денег");
        break;
    }
}
