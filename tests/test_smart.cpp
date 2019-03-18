#include <QTest>
#include "test_smart.h"
#include "../smart.h"

test_smart::test_smart(QObject *parent) : QObject(parent)
{

}

void test_smart::sum()
{
    smart a;
    QCOMPARE(a.sum(1,   0), static_cast<double>(1));
    QCOMPARE(a.sum(-1,  1), static_cast<double>(0));
    QCOMPARE(a.sum(4,   8), static_cast<double>(12));
    QCOMPARE(a.sum(0,   0), static_cast<double>(0));
    QCOMPARE(a.sum(1,   1), static_cast<double>(2));
    QCOMPARE(a.sum(-10,-5), static_cast<double>(-15));
}
