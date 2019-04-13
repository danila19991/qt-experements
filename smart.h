#ifndef SMART_H
#define SMART_H

#include <QObject>

class smart : public QObject
{
    Q_OBJECT
public:
    explicit smart(QObject *parent = nullptr);

    double sum(double a, double b);

signals:

public slots:
};

#endif // SMART_H
