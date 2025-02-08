#ifndef ARITHMETIQUE_H
#define ARITHMETIQUE_H

#include "Complexe.h"
#include "ComplexeRationnel.h"
#include "Rationnel.h"

namespace isa
{
    class Arithmetique
    {   
        public:
            static Complexe addition0(int a,Complexe& c);
            static ComplexeRationnel addition1(Complexe &c,Rationnel& r);
            static Rationnel addition2(int a,Rationnel& r);
            static Complexe addition3(double d,Complexe& c);
            static ComplexeRationnel addition4(ComplexeRationnel &rc,int a);

            static void affiche_resultat0();
            static void affiche_resultat1();
            static void affiche_resultat2();
            static void affiche_resultat3();
            static void affiche_resultat4();
    };
}
#endif