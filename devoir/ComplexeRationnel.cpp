#include <iostream>
#include "Rationnel.h"
#include "ComplexeRationnel.h"
using namespace std;
namespace isa{
ComplexeRationnel::ComplexeRationnel()
{

}
ComplexeRationnel::~ComplexeRationnel()
{

}
void ComplexeRationnel::setReel(Rationnel val)
{
    reel = val;
}
void ComplexeRationnel::setImaginaire(Rationnel val)
{
    imaginaire = val;
}
void ComplexeRationnel::setR(int val)
{
    r = val;
}
Rationnel ComplexeRationnel::getReel()
{
    return reel;
}
Rationnel ComplexeRationnel::getImaginaire()
{
    return imaginaire;
}

int ComplexeRationnel::getR()
{
    return r;
}
ComplexeRationnel ComplexeRationnel::getComplexeRationnel()
{
    int n1(0),d1(0),n2(0),d2(0);
    isa::Rationnel r1 = isa::Rationnel();
    isa::Rationnel r2 = isa::Rationnel();
    isa::ComplexeRationnel cr = ComplexeRationnel();
    cout << "Données pour le nbre complexe rationnel :\nReel_numerateur = " << "";
    cin >> n1;
    cout << "Reel_denominateur = " << "";
    cin >> d1;
    r1.setNum(n1);
    r1.setDenom(d1);
    cr.setReel(r1);
    cout << "Imaginaire_numerateur = " << "";
    cin >> n2;
    cout << "Imaginaire_denominateur = " << "";
    cin >> d2;
    r2.setNum(n2);
    r2.setDenom(d2);
    cr.setImaginaire(r2);
    return cr;

}
ComplexeRationnel ComplexeRationnel::addition(ComplexeRationnel c2)
{
    ComplexeRationnel c3;
    c3.setReel(this->reel.addition(c2.getReel()));
    c3.setImaginaire(this->imaginaire.addition(c2.getImaginaire()));
    return c3;

}

ComplexeRationnel ComplexeRationnel::soustraction(ComplexeRationnel c2)
{
    ComplexeRationnel c3;
    c3.setReel(this->reel.soustraction(c2.getReel()));
    c3.setImaginaire(this->imaginaire.soustraction(c2.getImaginaire()));
    return c3;
}

ComplexeRationnel ComplexeRationnel::multiplication(ComplexeRationnel c2)
{
    ComplexeRationnel c3;
    c3.setReel(
                (this->reel.multiplication(c2.getReel())).soustraction(this->imaginaire.multiplication(c2.getImaginaire()))
                );
    c3.setImaginaire (
                (this->reel.multiplication(c2.getImaginaire())).addition(this->imaginaire.multiplication(c2.getReel())));
    return c3;
}


ComplexeRationnel ComplexeRationnel::division(ComplexeRationnel c2)
{
    ComplexeRationnel c3;
    c3.setReel(
            ((this->reel.multiplication(c2.getReel())).addition(this->imaginaire.multiplication(c2.getImaginaire())))
            .division((c2.getReel().multiplication(c2.getReel())).addition(c2.getImaginaire().multiplication(c2.getImaginaire())))
            );
    c3.setImaginaire(
        ((this->imaginaire.multiplication(c2.reel)).soustraction(this->reel.multiplication(c2.imaginaire)))
        .division((c2.reel.multiplication(c2.reel)).addition(c2.imaginaire.multiplication(c2.imaginaire)))
        );
    return c3;
}

void ComplexeRationnel::affichage()
{
    isa::ComplexeRationnel c1 = isa::ComplexeRationnel();
    isa::ComplexeRationnel c2 = isa::ComplexeRationnel();
    isa::ComplexeRationnel c3 = isa::ComplexeRationnel();

    c1 = getComplexeRationnel();
    c2 = getComplexeRationnel();

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

}
}



