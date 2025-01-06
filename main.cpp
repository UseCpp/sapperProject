#include "sapergamewindow.h"

#include <QApplication>

int main(int argc, char *argv[])
{
    QApplication a(argc, argv);
    saperGameWindow w;
    w.show();
    return a.exec();
}
