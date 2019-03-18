#include <QApplication>
#include <QTest>
#include "test_smart.h"

using namespace std;

int main(int argc, char *argv[])
{
    freopen("testing.log", "w", stdout);
    QApplication a(argc, argv);
    auto res = QTest::qExec(new test_smart, argc, argv);
    return res;
}
