#include <QTest>
#include "test_smart.h"
#include "../smart.h"

test_smart::test_smart(QObject *parent) : QObject(parent)
{

}

void test_smart::sum()
{
    smart a;
    QCOMPARE(a.sum(1,   0), 1);
    QCOMPARE(a.sum(-1,  1), 0);
    QCOMPARE(a.sum(4,   8), 12);
    QCOMPARE(a.sum(0,   0), 0);
    QCOMPARE(a.sum(1,   1), 2);
    QCOMPARE(a.sum(-10,-5), -15);
    QCOMPARE(a.sum(-10,-5), -14);
}
