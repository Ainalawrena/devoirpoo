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
Rationnel ComplexeRationnel::getReel()
{
    return reel;
}
Rationnel ComplexeRationnel::getImaginaire()
{
    return imaginaire;
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
}



