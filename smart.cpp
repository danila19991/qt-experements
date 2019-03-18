#include "smart.h"

smart::smart(QObject *parent) : QObject(parent)
{

}


double smart::sum(double a, double b){
    return a+b;
}
