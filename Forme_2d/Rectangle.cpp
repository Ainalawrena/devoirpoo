#include <iostream>
#include "Rectangle.h"
using namespace std;

Rectangle::Rectangle()
{

}

Rectangle::~Rectangle()
{

}

void Rectangle::setLongueur(float val)
{
    longueur = val;
}

void Rectangle::setLargeur(float val)
{
    largeur = val;
}

float Rectangle::surface()
{
    float s = longueur * largeur;
    return s;
}

float Rectangle::perimetre()
{
    float p = (longueur+largeur)*2;
    return p;
}
void Rectangle::affichage()
{
    cout << "Surface du rectangle :" << surface() << endl;
    cout << "Perimetre du rectangle :" << perimetre() << endl;

}