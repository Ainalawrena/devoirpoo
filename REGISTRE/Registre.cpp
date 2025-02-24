#include <vector>
#include <iostream>
#include <string>
#include <algorithm>
#include "Registre.h"
#include "Personne.h"
using namespace std;

Registre::Registre()
{

}

Registre::~Registre()
{

}

//ceci est une methode pour pouvoir utiliser begin dans main() 
vector<Personne>::iterator Registre::begin()
{
    return liste.begin();
}

void Registre::insert(std::vector<Personne> :: iterator it,Personne p1)
{
    liste.insert(it,p1);
}

void Registre::affichage()
{   
    for(auto it = liste.begin() ; it != liste.end() ; ++it)
    {
        it->affichage();
    }  
}

void Registre::modif()
{   
    string name, nouveau_nom;
    int age(0),nouveau_age(0);
    cout << "Entrer le nom de la personne à chercher : " << "";
    cin >> name;
    cout << "Entrer son age :" << "";
    cin >> age;
    cout << "nouveau nom : " << "";
    cin >> nouveau_nom;
    cout << "nouveau age : " << "";
    cin >> nouveau_age;
    cin.ignore();
    Personne p;
    p.setNom(name);
    p.setAge(age);
    auto it = find(liste.begin(), liste.end() , p);
    if(it != liste.end())
    {   
            it->setNom(nouveau_nom);
            it->setAge(nouveau_age);          
    }
    else 
    {
        cout << "cette personne n'est pas sur le registre" << endl;
    }   
}

void Registre::supr()
{   
    string name;
    int age(0);
    cout << "Entrer le nom de la personne à chercher : " << "";
    cin >> name;
    cin.ignore();
    cout << "Entrer son age :" << "";
    cin >> age;
    cin.ignore();
  
    Personne p;
    p.setNom(name);
    p.setAge(age);
    auto it = std::find(liste.begin(), liste.end(), p);
    if (it != liste.end())
    {
        liste.erase(it);  // Suppression de l'objet en utilisant l'itérateur
    }
    else
    {
        cout << "Personne non trouvée dans le registre!" << endl;
    }
}
