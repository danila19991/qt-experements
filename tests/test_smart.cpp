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

    QTest::newRow("sum_data_1") << 1. << 0. << 1.;
    QTest::newRow("sum_data_2") << -1. << 1. << 0.;
    QTest::newRow("sum_data_3") << 4. << 8. << 12.;
    QTest::newRow("sum_data_4") << 0. << 0. << 0.;
    QTest::newRow("sum_data_5") << 1. << 1. << 2.;
    QTest::newRow("sum_data_6") << 0. << 1. << 1.;
    QTest::newRow("sum_data_7") << -10. << -5. << -15.;
    QTest::newRow("sum_data_8") << -10. << -5. << -14.;
}

void test_smart::sum()
{

    smart a;
    QFETCH(double, first);
    QFETCH(double, second);
    QFETCH(double, result);
    QCOMPARE(a.sum(first, second), result);
}
