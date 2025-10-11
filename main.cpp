#include <QCoreApplication>
#include <QLoggingCategory>
#include "ftmsdevice.h"

int main(int argc, char *argv[])
{
    QLoggingCategory::setFilterRules(
        "qt.bluetooth*.debug=true\n"
        "qt.bluetooth*.info=true\n"
        "qt.bluetooth.bluez*.debug=true\n"
    );
    QCoreApplication a(argc, argv);

    FTMSDevice *ftms = new FTMSDevice(100);
    ftms->initialize();

    return a.exec();
}
