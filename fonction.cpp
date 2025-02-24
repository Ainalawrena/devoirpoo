#include <iostream>
#include <vector>
#include "Personne.h"
#include "prorotype.h"
#include "Registre.h"
using namespace std;

Personne createPersonne()
{
    Personne p = Personne();
    string name;
    int age(0);
    cout << "nom : " << "";
    cin >> name;
    cout << "Age : " << "";
    cin >> age;
    p.setNom(name);
    p.setAge(age);
    return p;
}

void test()
{
    int i(0);
    Registre l2 = Registre();
    Personne p1 = Personne();
    Personne p2 = Personne();
    
    cout << "Insertion de deux personne : " << endl;
    p1 = createPersonne();
    p2 = createPersonne();

    l2.insert(l2.begin(),p1);
    l2.insert(l2.begin()+1,p2);

    cout << "--Premiere affichage--- "<< endl;
    l2.affichage();

    cout << "----Modification-----" << endl;
    l2.modif();
    l2.affichage();
     
    cout << "--Avec suppression--- "<< endl;
    l2.supr();
    l2.affichage();
}