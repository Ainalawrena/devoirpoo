#include <iostream>
#include "Person.h"
using namespace std;

Person::Person()
{

}

Person::~Person()
{

}

void Person::setName(string name1)
{
    name = name1;
}

void Person::setAge(int age1)
{
    age = age1;
}

void Person::infoPerson()
{
    cout << "Name : " << name << endl;
    cout << "Age : " << age << endl;
}



