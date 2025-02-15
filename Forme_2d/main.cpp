#include <iostream>
#include "Forme2d.h"
#include "Carre.h"
#include "Rectangle.h"
#include "Triangle.h"
#include "prototype.h"
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
    
    t1 = f_triangle();
    t1.affichage();
    return 0;
}
