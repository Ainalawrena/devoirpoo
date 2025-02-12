#include <iostream>
#include "Forme2d.h"
#include "Carre.h"
#include "Rectangle.h"
#include "Triangle.h"
using namespace std;

int main()
{
    Carre c1 = Carre();
    Rectangle r1 = Rectangle();
    Triangle t1 = Triangle();

    c1.setCote(2);
    c1.affichage();
    r1.setLongueur(4);
    r1.setLargeur(2);
    r1.affichage();
    
    t1.setCote1(2);
    t1.setCote2(3);
    t1.setCote3(5);
    t1.affichage();
    return 0;
}