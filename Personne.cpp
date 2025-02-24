#include <iostream>
#include <string>
#include "Personne.h"
using namespace std;

Personne::Personne()
{

}

Personne::~Personne()
{

}

void Personne::setNom(string name)
{
    nom = name;
}

void Personne::setAge(int agee)
{
    age = agee;
}

string Personne::getNom()
{
    return nom;
}

int Personne::getAge()
{
    return age;
}

void Personne::affichage()
{
    cout << "Nom : "<< nom << endl;
    cout << "Age : " << age << endl;
}