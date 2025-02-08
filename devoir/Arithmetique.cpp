#include <iostream>
#include "Complexe.h"
#include "Arithmetique.h"
#include "Rationnel.h"

namespace isa
{
    Complexe Arithmetique::addition0(int a,Complexe& c)
    {
        Complexe r1;
        r1.setReel(a+c.getReel());
        r1.setImaginaire(c.getImaginaire());
        return r1;
    }

    ComplexeRationnel Arithmetique::addition1(Complexe& c,Rationnel& r)
    {
        isa::ComplexeRationnel rc;
        int reelNum = r.getNum() + (r.getDenum() * c.getReel());
        Rationnel reel = rc.getReel();
        reel.setNum(reelNum);      
        reel.setDenom(r.getDenum()); 
        rc.setReel(reel); 

        rc.setR(c.getImaginaire());
        return rc;
    }

    Rationnel Arithmetique::addition2(int a,Rationnel& r)
    {
        isa::Rationnel rr;
        rr.setNum(r.getNum()+(r.getDenum()*a));
        rr.setDenom(r.getDenum());
        return rr;
    }

    Complexe Arithmetique::addition3(double d,Complexe& c)
    {
        Complexe r1;
        r1.setReel(d+c.getReel());
        r1.setImaginaire(c.getImaginaire());
        return r1;
    }

    ComplexeRationnel Arithmetique::addition4(ComplexeRationnel& rc,int a)
    {
        ComplexeRationnel rcc;
        Rationnel r;
        r.setNum(rc.getReel().getNum()+(rc.getReel().getDenum()*a));
        r.setDenom(rc.getReel().getDenum());
        rcc.setReel(r);
        rcc.setImaginaire(rc.getImaginaire());
        return rcc;
    }

    //Les fonctions pour les affichages
    void Arithmetique::affiche_resultat0()
    {   
        int a(0);
        double b(0);
        isa::Complexe c,c_resultat;
        std::cout << "1-Addition entre entier et complexe :\nentier =" << "" ;
        std::cin >> a;
        std::cout << "Complexe :\nreel = " << "";
        std::cin >> b; 
        c.setReel(b);
        std::cout << "imaginaire = " << "";
        std::cin >> b; 
        c.setImaginaire(b);
        c_resultat = isa::Arithmetique::addition0(a,c);
        std::cout << c_resultat.getReel() << "+" << c_resultat.getImaginaire() << "i" << std::endl;
    }
    void Arithmetique::affiche_resultat1()
    {
        int a(0);
        double b(0);
        isa::Rationnel ra;
        isa::Complexe c;
        isa::ComplexeRationnel cr_resultat;
        std::cout << "2-Addition entre rationnel et complexe :\nRationnel :\nnum =" << "" ;
        std::cin >> a;
        ra.setNum(a);
        std::cout << "denom =" << "";
        std::cin >> a;
        ra.setDenom(a);
        std::cout << "Complexe :\nreel=" << "";
        std::cin >> b; 
        c.setReel(b);
        std::cout << "imaginaire = " << "";
        std::cin >> b; 
        c.setImaginaire(b);
        cr_resultat = isa::Arithmetique::addition1(c,ra);
        std::cout << cr_resultat.getReel().getNum() << "/" << cr_resultat.getReel().getDenum() << " + " << cr_resultat.getR() << "i" << std::endl;

    }

    void Arithmetique::affiche_resultat2()
    {
        int a(0),b(0);
        isa::Rationnel ra,r_resultat;
        std::cout << "3-Addition entre entier et rationnel :\nentier = " << "" ;
        std::cin >> a;
        std::cout << "Rationnel :\nnum=" << "";
        std::cin >> b;
        ra.setNum(b);
        std::cout << "denom =" << "";
        std::cin >> b;
        ra.setDenom(b);
        r_resultat = isa::Arithmetique::addition2(a,ra);
        std::cout << r_resultat.getNum() << "/" << r_resultat.getDenum() << std::endl;
    }

    void Arithmetique::affiche_resultat3()
    {
        double d(0),b(0);
        isa::Complexe c,c_resultat;
        std::cout << "4-Addition entre reel et complexe :\nreel = " << "" ;
        std::cin >> d;
        std::cout << "Complexe :\nreel = " << "";
        std::cin >> b; 
        c.setReel(b);
        std::cout << "imaginaire = " << "";
        std::cin >> b; 
        c.setImaginaire(b);
        c_resultat = isa::Arithmetique::addition3(d,c);
        std::cout << c_resultat.getReel() << "+" << "i(" << c_resultat.getImaginaire() << ")" << std::endl;
    }

    void Arithmetique::affiche_resultat4()
    {
        int a(0);
        double b(0);
        ComplexeRationnel c,rc_resultat;
        Rationnel r;
        std::cout << "5-Addition entre entier et complexe rationnel :\nentier = " << "" ;
        std::cin >> a;
        std::cout << "Complexe_rationnel :\nreel_num = " << "";
        std::cin >> b; 
        r.setNum(b);
        std::cout << "denom = " << "";
        std::cin >> b; 
        r.setDenom(b);
        c.setReel(r);
        std::cout << "Imaginaire_num = " << "";
        std::cin >> b; 
        r.setNum(b);
        std::cout << "denom = " << "";
        std::cin >> b; 
        r.setDenom(b);
        c.setImaginaire(r);
        rc_resultat = isa::Arithmetique::addition4(c,a);
        std::cout << rc_resultat.getReel().getNum() << "/" << rc_resultat.getReel().getDenum() 
                  << "+" << rc_resultat.getImaginaire().getNum() << "" << rc_resultat.getImaginaire().getDenum() << std::endl;

    }
}




