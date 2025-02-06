#include <iostream>
#include "Rationnel.h"
//using namespace std;
namespace isa{
Rationnel::Rationnel()
{

}

Rationnel::~Rationnel()
{

}

void Rationnel::setNum(int val)
{
    num = val;
}

void Rationnel::setDenom(int val)
{
    denom = val;
}

int Rationnel::getNum()
{
    return num;
}

int Rationnel::getDenum()
{
    return denom;
}

Rationnel Rationnel::addition(Rationnel r2)
{   
    Rationnel r3 = Rationnel();
    r3.num = (this->num * r2.denom) + (r2.num * this->denom);
    r3.denom = r2.denom * this->denom;
    return r3;
}


Rationnel  Rationnel::soustraction(Rationnel r2)
{
    Rationnel r3 = Rationnel();
    r3.num = (this->num * r2.denom) - (r2.num * this->denom);
    r3.denom = r2.denom * this->denom;
    return r3;
}

Rationnel Rationnel::multiplication(Rationnel r2)
{   
    Rationnel r3 = Rationnel();
    r3.num = this->num * r2.num;
    r3.denom = this->denom * r2.denom;
    return r3;
}

Rationnel Rationnel::division(Rationnel r2)
{   
    Rationnel r3 = Rationnel();
    r3.num = this->num * r2.denom;
    r3.denom = this->denom * r2.num;
    return r3;
}
}