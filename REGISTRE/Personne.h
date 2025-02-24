#ifndef PERSONNE_H
#define PERSONNE_H

#include <string>
using namespace std;
class Personne
{
    private:
        string nom;
        int age;
    public:
        Personne();
        ~Personne();

        void setNom(string name);
        void setAge(int agee);

        string getNom();
        int getAge();

        void affichage();

        // Définir l'opérateur == pour permettre la comparaison
        bool operator==(const Personne& p) const {
            return (nom == p.nom) && (age == p.age);
        }
};

#endif
