#include "warpoker.h"
#include "UdpNetWork.h"
#include <QApplication>

int main(int argc, char *argv[])
{
    QApplication a(argc, argv);
    UdpNetWork windows;
    return a.exec();
}
