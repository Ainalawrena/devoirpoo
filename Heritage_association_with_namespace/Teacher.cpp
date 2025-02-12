#include <iostream>
#include <string>
#include "Person.h"
#include "Teacher.h"
using namespace humain;

Teacher::Teacher()
{

}

Teacher::~Teacher()
{

}

void Teacher::setWorkPlace(object::Etablishment nplace)
{
    workPlace = nplace;
}

void Teacher::setSubject(string nsubject)
{
    subject = nsubject;
}

Etablishment Teacher::getEtablishment()
{
    return workPlace;
}

string Teacher::getSubject()
{
    return subject;
}

void Teacher::infoTeacher(Etablishment e)
{   
    cout << "\n==> Teacher's information :" << endl;
    Person::infoPerson();
    e.infoEtablishment();
    cout << "Subject :" << getSubject() << endl;
}