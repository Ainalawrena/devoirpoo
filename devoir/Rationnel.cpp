#include <iostream>
#include <numeric>
#include "Rationnel.h"
using namespace std;
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

Rationnel Rationnel::getfraction()
{
    int n(0),d(0);
    Rationnel r = Rationnel();
    cout << "Donnée de la fonction" << endl;
    cout << "num =" << "";
    cin >> n;
    r.setNum(n);
    cout << "denom =" << "";
    cin >> d;
    r.setDenom(d);
    return r;

}

Rationnel Rationnel::addition(Rationnel r2)
{   
    Rationnel r3 = Rationnel();
    int pgcd(0);
    r3.num = (this->num * r2.denom) + (r2.num * this->denom);
    r3.denom = r2.denom * this->denom;
    pgcd  = std::gcd(r3.num,r3.denom);
    r3.num /= pgcd;
    r3.denom /= pgcd;
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
 
void Rationnel::affichage()
{
    isa::Rationnel r1 = isa::Rationnel();
    isa::Rationnel r2 = isa::Rationnel();
    isa::Rationnel r3 = isa::Rationnel();
    r1=getfraction();
    r2=getfraction();

    cout << "Resultat_addition :" << endl;
    r3 = r1.addition(r2);
    cout << r3.getNum() << "/" << r3.getDenum() << endl;

    cout << "Resultat_soustraction :" << endl;
    r3 = r1.soustraction(r2);
    cout << r3.getNum() << "/" << r3.getDenum() << endl;

    cout << "Resultat_multiplication :" << endl;
    r3 = r1.multiplication(r2);
    cout << r3.getNum() << "/" << r3.getDenum() << endl;

    cout << "Resultat_division :" << endl;
    r3 = r1.division(r2);
    cout << r3.getNum() << "/" << r3.getDenum() << endl;
}
        
}