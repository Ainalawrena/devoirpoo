#include <iostream>
#include "Complexe.h"

namespace isa{
Complexe::Complexe()
{

}
Complexe::~Complexe()
{

}
void Complexe::setReel(int val)
{
    reel = val;
}
void Complexe::setImaginaire(int val)
{
    imaginaire = val;
}
int Complexe::getReel()
{
    return reel;
}
int Complexe::getImaginaire()
{
    return imaginaire;
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
}


