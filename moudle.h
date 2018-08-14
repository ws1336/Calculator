#ifndef MOUDLE_H
#define MOUDLE_H
#include "qstring.h"

class moudle
{
public:
    moudle();
    void setNum1(float val);
    void setNum2(float val);
    void setSymbol(QString str);
    float getNum1();
    float getNum2();
    QString getSymbol();
    QString calculator();
private:
    float num1,num2;
    QString symbol;
};

#endif // MOUDLE_H
