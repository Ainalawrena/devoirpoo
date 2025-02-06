#include <iostream>
#include "Complexe.h"
using namespace std;

int main()
{   
    int r(0),i(0);
    isa::Complexe c1,c2,c3;

    cout << "pour la premiere compexe" << endl;
    cout << "Reel =" << "";
    cin >> r;
    cout << "Imaginaire =" << "";
    cin >> i;
    c1.setReel(r);
    c1.setImaginaire(i);

    cout << "pour la deuxieme compexe" << endl;
    cout << "Reel =" << "";
    cin >> r;
    cout << "Imaginaire =" << "";
    cin >> i;

    c2.setReel(r);
    c2.setImaginaire(i);

    c3 = c1.addition(c2);
    cout << "\nAddition\nc3.reel = " << c3.getReel() << endl;
    cout << "c3.imaginaire = " << c3.getImaginaire() << endl;

    c3 = c1.soustraction(c2);
    c3 = c1.multiplication(c2);
    c3 = c1.division(c2);

    return 0;
}