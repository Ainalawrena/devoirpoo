#include <iostream>
#include "Rationnel.h"
using namespace std;
int main()
{   
    int n(0) ,d(0);
    isa::Rationnel r1 = isa::Rationnel();
    isa::Rationnel r2 = isa::Rationnel();
    isa::Rationnel r3 = isa::Rationnel();

    cout << "pour la premiere fration" << endl;
    cout << "num =" << "";
    cin >> n;
    cout << "denom =" << "";
    cin >> d;

    r1.setNum(n);
    r1.setDenom(d);

    cout << r1.getNum() << "/" << r1.getDenum() << endl;

    cout << "\npour la deuxieme fration" << endl;
    cout << "num =" << "";
    cin >> n;
    cout << "denom =" << "";
    cin >> d;

    r2.setNum(n);
    r2.setDenom(d);

    cout << r2.getNum() << "/" << r2.getDenum() << endl;

    r3 = r1.addition(r2);
    cout << "Resultat :" << endl;
    cout << r3.getNum() << "/" << r3.getDenum() << endl;
    r3 = r1.soustraction(r2);
    r3 = r1.multiplication(r2);
    r3 = r1.division(r2);
}

