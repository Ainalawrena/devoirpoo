#include <iostream>
#include "Person.h"
#include "Student.h"
#include "Etablishment.h"
#include "Doctor.h"
#include "Hospital.h"
#include "Infrastructure.h"
#include "prototype_fonction.h"
#include "Teacher.h"

using namespace humain;
using namespace object;
using namespace std;

int main()
{
    humain::Student p1 = humain::Student(); 
    object::Etablishment e_teacher = object::Etablishment();
    object::Etablishment e_student = object::Etablishment();
    object::Hospital h_doctor = object::Hospital();
    object::Hospital myHospital = object::Hospital();
    humain::Doctor d = humain::Doctor();
    humain::Teacher t = humain::Teacher();

    cout << "=============== Creation ==================" << endl;
    p1 = createStudent();
    e_student = createEtablishment();

    d = createDoctor();
    h_doctor = doctors_Hospital();

    myHospital = createHospital();
    
    t = createTeacher();
    e_teacher = createEtablishment();
    
    cout << "\n\n=============== Affichage ================"<< endl;
    p1.infoStudent(e_student);
    d.infoDoctor(h_doctor);
    myHospital.infoHospital();
    t.infoTeacher(e_teacher);

    return 0;
}