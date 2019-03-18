#ifndef TEST_SMART_H
#define TEST_SMART_H

#include <QObject>

class test_smart : public QObject
{
    Q_OBJECT
public:
    explicit test_smart(QObject *parent = nullptr);

signals:

public slots:

private slots:
    void sum();
};

#endif // TEST_SMART_H
