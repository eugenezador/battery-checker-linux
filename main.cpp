#include "battery_level.h"

#include <QApplication>

int main(int argc, char *argv[])
{
    QApplication a(argc, argv);
    battery_level w;
    w.show();
    return a.exec();
}
