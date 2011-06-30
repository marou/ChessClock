#include <QtGui/QApplication>
#include "schachuhr.h"

int main(int argc, char *argv[])
{
    QApplication a(argc, argv);
    Schachuhr w;
    w.show();
    return a.exec();
}
