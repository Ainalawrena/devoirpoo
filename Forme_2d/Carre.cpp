#include <iostream>
#include "Carre.h"
using namespace std;

Carre::Carre()
{

}

Carre::~Carre()
{

}

void Carre::setCote(float c)
{
    cote = c;
}

float Carre::surface()
{
    float s = cote * cote;
    return s;
}

float Carre::perimetre()
{
    float p = cote * 4;
    return p;
}

void Carre::affichage()
{   
    //float s = surface();
    cout << "Surface  du carre : " << surface() << endl;
    cout << "Perimetre du caree : " << perimetre() << endl;
}