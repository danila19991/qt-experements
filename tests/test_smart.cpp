#include <QTest>
#include "test_smart.h"
#include "../smart.h"

test_smart::test_smart(QObject *parent) : QObject(parent)
{

}

void test_smart::sum_data()
{
    QTest::addColumn<double>("first");
    QTest::addColumn<double>("second");
    QTest::addColumn<double>("result");

    QTest::newRow("sum_data_1") << 1.l << 0.l << 1.l;
    QTest::newRow("sum_data_2") << -1.l << 1.l << 0.l;
    QTest::newRow("sum_data_3") << 4.l << 8.l << 12.l;
    QTest::newRow("sum_data_4") << 0.l << 0.l << 0.l;
    QTest::newRow("sum_data_5") << 1.l << 1.l << 2.l;
    QTest::newRow("sum_data_6") << 0.l << 1.l << 1.l;
    QTest::newRow("sum_data_7") << -10.l << -5.l << -15.l;
    //QTest::newRow("sum_data_8") << -10.l << -5.l << -14.l;
}

void test_smart::sum()
{

    smart a;
    QFETCH(double, first);
    QFETCH(double, second);
    QFETCH(double, result);
    QCOMPARE(a.sum(first, second), result);
}
