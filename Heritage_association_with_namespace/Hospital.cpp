#include <iostream>
#include <string>
#include "Hospital.h"
using namespace object;
using namespace std;

Hospital::Hospital()
{

}

Hospital::~Hospital()
{

}

void Hospital::setType(string p_type)
{
    type = p_type;
}

void Hospital::setNumberPatient(int n)
{
    numberPatient = n ;
}

void Hospital::setNumberDoctor(int m)
{
    numberDoctor = m ;
}

string Hospital::getType()
{
    return type;
}

int Hospital::getNumberPatient()
{
    return numberPatient;
}

int Hospital::getNumberDoctor()
{
    return numberDoctor;
}

void Hospital::infoHospital_withDoctor()
{
    Infrastructure::infoInfrastrucure();
    cout << "Type : " << getType() << endl ;
}

void Hospital::infoHospital()
{
    Infrastructure::infoInfrastrucure();
    cout << "\n==> Hospital information :" << endl;
    cout << "Type : " << getType() << endl ;
    cout << "Number of the patient : " << getNumberPatient() << endl ;
    cout << "Number of the Doctor : " << getNumberDoctor() << endl ;
}

