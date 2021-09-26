#include "clorela_os_v14.h"

#include <QApplication>

int main(int argc, char *argv[])
{
    QApplication a(argc, argv);
    clorela_os_v14 w;
    w.show();
    return a.exec();
}
