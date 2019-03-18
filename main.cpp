#include <QCoreApplication>
#include "smart.h"

int main(int argc, char *argv[])
{
    QCoreApplication a(argc, argv);
    smart s;
    double t = s.sum(2,3);
    return a.exec();
}
