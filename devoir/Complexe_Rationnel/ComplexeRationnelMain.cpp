#include <iostream>
#include "Rationnel.h"
#include "ComplexeRationnel.h"
using namespace std;

int main()
{   
    int n(1),d(2);
    isa::Rationnel r1 = isa::Rationnel();
    isa::Rationnel r2 = isa::Rationnel();
    
    r1.setNum(n);
    r1.setDenom(d);

    r2.setNum(n);
    r2.setDenom(d);
    
    cout << r1.getNum() << "/" << r1.getDenum() << endl;
    cout << r2.getNum() << "/" << r2.getDenum() << endl;

    isa::ComplexeRationnel c1 = isa::ComplexeRationnel();
    c1.setReel(r1);
    c1.setImaginaire(r2);

    isa::Rationnel r3 = isa::Rationnel();
    isa::Rationnel r4 = isa::Rationnel();
   
    r3.setNum(n);
    r3.setDenom(d);

    r4.setNum(n);
    r4.setDenom(d);

    isa::ComplexeRationnel c2 = isa::ComplexeRationnel();
    c2.setReel(r3);
    c2.setImaginaire(r4);
    isa::ComplexeRationnel c3 = isa::ComplexeRationnel();


    c3 = c1.addition(c2);
    cout << "\n=> Addition" << endl;
    std::cout << "Resultat :" << "(" << c3.getReel().getNum() << "/" <<  c3.getReel().getDenum() << ")" 
            << "+" << "(" << c3.getImaginaire().getNum() << "/" << c3.getImaginaire().getDenum() << ")i" << endl;


    c3 = c1.soustraction(c2);
    cout << "\n==> Soustraction" << endl;
    std::cout << "Resultat :" << "(" << c3.getReel().getNum() << "/" <<  c3.getReel().getDenum() << ")" 
            << "+" << "(" << c3.getImaginaire().getNum() << "/" << c3.getImaginaire().getDenum() << ")i" << endl;

    c3 = c1.multiplication(c2);
    cout << "\n==> Multiplication" << endl;
    std::cout << "Resultat :" << "(" << c3.getReel().getNum() << "/" <<  c3.getReel().getDenum() << ")" 
            << "+" << "(" << c3.getImaginaire().getNum() << "/" << c3.getImaginaire().getDenum() << ")i" << endl;


    cout << "\n==> Division" << endl;
    c3 = c1.division(c2);

    std::cout << "Resultat :" <<  c3.getReel().getNum() << "/" <<  c3.getReel().getDenum() 
            << "+" << "i(" << c3.getImaginaire().getNum() << "/" << c3.getImaginaire().getDenum() << ")" << endl;

    return 0;
}