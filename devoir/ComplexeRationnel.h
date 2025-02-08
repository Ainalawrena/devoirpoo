#ifndef COMPLEXERATIONNEL_H
#define COMPLEXERATIONNEL_H

#include "Rationnel.h"
namespace isa
{
    class ComplexeRationnel
    {
        private:
            Rationnel reel;
            Rationnel imaginaire;
            int r;
        public:
            ComplexeRationnel();
            ~ComplexeRationnel();

            //Les setters
            void setReel(Rationnel val);
            void setImaginaire(Rationnel val);
            void setR(int val);

            //les getters
            Rationnel getReel();
            Rationnel getImaginaire();
            int getR();

            ComplexeRationnel getComplexeRationnel();
            ///les  calcules
            ComplexeRationnel addition(ComplexeRationnel c2);
            ComplexeRationnel soustraction(ComplexeRationnel c2);
            ComplexeRationnel multiplication(ComplexeRationnel c2);
            ComplexeRationnel division(ComplexeRationnel c2);

            void affichage();
    };
}
#endif