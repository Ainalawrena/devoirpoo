#include <iostream>
#include "Doctor.h"
using namespace std;
using namespace humain;
using namespace object;
Doctor::Doctor()
{

}

Doctor::~Doctor()
{

}

void Doctor::setSpeciality(string speciality1)
{
    speciality = speciality1;
}

string Doctor::getSpeciality()
{
    return speciality;
}

void Doctor::infoDoctor(Hospital h)
{
    cout << "\n ==> Doctor information : " << endl;
    Person::infoPerson();
    cout << "Speciality : "<< getSpeciality() << endl;
    h.infoHospital_withDoctor();
}


