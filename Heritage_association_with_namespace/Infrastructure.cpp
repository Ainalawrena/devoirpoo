#include <iostream>
#include "Infrastructure.h"
using namespace std;

Infrastructure::Infrastructure()
{

}

Infrastructure::~Infrastructure()
{

}

void Infrastructure::setName(string name1)
{
    name = name1;
}

void Infrastructure::setAddress(string address1)
{
    address = address1;
}

void Infrastructure::infoInfrastrucure()
{   
    cout << "The name :" << name << endl;
    cout << "And the address :" << address << endl;
}