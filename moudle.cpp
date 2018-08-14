#include "moudle.h"

moudle::moudle()
{  
    this->num1=0;
    this->num2=0;
    this->symbol="";
}

void moudle::setNum1(float val)
{
    this->num1=val;
}
void moudle::setNum2(float val)
{
    this->num2=val;
}

void moudle::setSymbol(QString str)
{
    this->symbol=str;
}

float moudle::getNum1()
{
    return this->num1;
}

float moudle::getNum2()
{
    return this->num2;
}

QString moudle::getSymbol()
{
    return this->symbol;
}

QString moudle::calculator()
{
    float result;
    if(symbol=="+")
        result=num1+num2;
    else if(symbol=="-")
        result=num1-num2;
    else if(symbol=="*")
        result=num1*num2;
    else if(symbol=="/"){
        if(num2==0)
            return "ERR";
        result=num1/num2;
    }
    else
        result=num1;
    return QString::number(result);

}
