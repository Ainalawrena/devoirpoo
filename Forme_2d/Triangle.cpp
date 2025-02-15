#include <iostream>
#include <cmath>
#include "Triangle.h"
using namespace std;

Triangle::Triangle()
{

}

Triangle::~Triangle()
{

}

void Triangle::setCote1(float valeur)
{
    cote1 = valeur;
}

void Triangle::setCote2(float valeur)
{
    cote2 = valeur;
}

void Triangle::setCote3(float valeur)
{
    cote3 = valeur;
}

float Triangle::surface()
{   
    float hauteur(0);
    if(cote1 == cote2 && cote2== cote3)
    {
        hauteur = sqrt((cote3*cote3) - (cote1/2*cote1/2));
        return (hauteur*cote1)/2;
    }
    else
    {
        cout << "hauteur du triangle :" << "";
        cin >> hauteur;
        return (hauteur*cote1)/2;
    }
}

float Triangle::perimetre()
{
    return cote1+cote2+cote3;
}

void Triangle::affichage()
{   
    double s = surface();
    cout << "Surface  du triangle : " << s << endl;
    cout << "Perimetre du triangle : " << perimetre() << endl;
}
