QT       += core gui multimedia

greaterThan(QT_MAJOR_VERSION, 4): QT += widgets

CONFIG += c++17

# You can make your code fail to compile if it uses deprecated APIs.
# In order to do so, uncomment the following line.
#DEFINES += QT_DISABLE_DEPRECATED_BEFORE=0x060000    # disables all the APIs deprecated before Qt 6.0.0

SOURCES += \
    cell.cpp \
    gamefield.cpp \
    main.cpp \
    player.cpp \
    playerprofile.cpp \
    sapergamewindow.cpp \
    savemanager.cpp \
    shopgame.cpp \
    timercore.cpp

HEADERS += \
    cell.h \
    gamefield.h \
    player.h \
    playerprofile.h \
    sapergamewindow.h \
    savemanager.h \
    shopgame.h \
    timercore.h

FORMS += \
    sapergamewindow.ui

# Default rules for deployment.
qnx: target.path = /tmp/$${TARGET}/bin
else: unix:!android: target.path = /opt/$${TARGET}/bin
!isEmpty(target.path): INSTALLS += target

RESOURCES += \
    RAWDATA.qrc
