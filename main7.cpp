#include "reglinealmulti.h"
#include <QApplication>

int main(int argc, char *argv[])
{
    QApplication a(argc, argv);
    RegLinealMulti w;
    w.show();

    return a.exec();
}
