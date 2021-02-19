#include <QCoreApplication>
#include "ftmsdevice.h"

int main(int argc, char *argv[])
{
    QCoreApplication a(argc, argv);

    FTMSDevice *ftms = new FTMSDevice(100);
    ftms->initialize();

    return a.exec();
}
