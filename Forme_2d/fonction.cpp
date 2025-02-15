#include <iostream>
#include "prototype.h"
#include "Triangle.h"
using namespace std;

Triangle f_triangle()
{   
    Triangle t1;
    double c1(0) ,c2(0),c3(0);
    cout << "premier coté : " << "";
    cin >> c1;
    cout << "deuxieme coté : " << "";
    cin >> c2;
    cout << "troisieme coté : " << "";
    cin >> c3;

    t1.setCote1(c1);
    t1.setCote2(c2);
    t1.setCote3(c3);

    return t1;   
}