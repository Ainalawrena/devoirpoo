#include <iostream>
#include "Complexe.h"
using namespace std;
namespace isa{
Complexe::Complexe()
{

}
Complexe::~Complexe()
{

}
void Complexe::setReel(double val)
{
    reel = val;
}
void Complexe::setImaginaire(double val)
{
    imaginaire = val;
}
double Complexe::getReel()
{
    return reel;
}
double Complexe::getImaginaire()
{
    return imaginaire;
}

Complexe Complexe::getComplexe()
{   
    double r(0) , i(0);
    Complexe c = Complexe();
    cout << "Données pour le nombre complexe" << endl;
    cout << "Reel =" << "";
    cin >> r;
    cout << "Imaginaire =" << "";
    cin >> i;
    c.setReel(r);
    c.setImaginaire(i);
    return c;
}

Complexe Complexe::addition(Complexe c2)
{
    Complexe c3 = Complexe();
    c3.setReel(this->reel + c2.reel);
    c3.setImaginaire(this->imaginaire + c2.imaginaire);
    return c3;
}

Complexe Complexe::soustraction(Complexe c2)
{
    Complexe c3 = Complexe();
    c3.setReel(this->reel - c2.reel);
    c3.setImaginaire(this->imaginaire - c2.imaginaire);
    return c3;
}

Complexe Complexe::multiplication(Complexe c2)
{
    Complexe c3 = Complexe();
    c3.setReel((this->reel * c2.reel) - (this->imaginaire * c2.imaginaire));
    c3.setImaginaire((this->reel*c2.imaginaire) + (this->imaginaire * c2.reel));
    return c3;
}

Complexe Complexe::division(Complexe c2)
{
    Complexe c3 = Complexe();
    c3.setReel(((this->reel * c2.reel) + (this->imaginaire * c2.imaginaire))/((c2.reel*c2.reel) + (c2.imaginaire*c2.imaginaire)));
    c3.setImaginaire(((this->imaginaire * c2.reel) - (this->reel*c2.imaginaire))/((c2.reel*c2.reel) + (c2.imaginaire*c2.imaginaire)));
    return c3;
}

void Complexe::affichage()
{
    isa::Complexe c1,c2,c3;
    c1 = getComplexe();
    c2 = getComplexe();

    cout << "Resultat_addition :" << endl;
    c3 = c1.addition(c2);
    cout << c3.getReel() << "+" << c3.getImaginaire() << "i" << endl;

    cout << "Resultat_soustraction :" << endl;
    c3 = c1.soustraction(c2);
    cout << c3.getReel() << "+" << c3.getImaginaire() << "i" << endl;

    cout << "Resultat_multiplication :" << endl;
    c3 = c1.multiplication(c2);
    cout << c3.getReel() << "+" << c3.getImaginaire() << "i" << endl;

    cout << "Resultat_division :" << endl;
    c3 = c1.division(c2);
    cout << c3.getReel() << "+" << c3.getImaginaire() << "i" << endl;
}
}


