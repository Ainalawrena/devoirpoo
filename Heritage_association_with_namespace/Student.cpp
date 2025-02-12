#include <iostream>
#include <string>
#include "Student.h"
using namespace humain;
using namespace object;
using namespace std;

Student::Student()
{

}

Student::~Student()
{

}

void Student::setEtablishment(Etablishment e)
{
    school = e;
}

void Student::setNumber(int n)
{
    number = n;
}

void Student::setLevels(string name_levels)
{
    levels = name_levels;
}

Etablishment Student::getEtablishment()
{
    return school;
}

int Student::getNumber()
{
    return number;
}

string Student::getLevels()
{
    return levels;
}

void Student::infoStudent(Etablishment e)
{   
    cout << "\n ==> Student information :" << endl;
    Person::infoPerson();
    cout << "Number : " << number << endl;
    cout << "Level : " << levels << endl;
    e.infoEtablishment();
}