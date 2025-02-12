#include <iostream>
#include <string>
#include "Teacher.h"
#include "Person.h"
#include "Student.h"
#include "Etablishment.h"
#include "Doctor.h"

using namespace humain;
using namespace object;
using namespace std;

humain::Student createStudent()
{
    Student s = Student();
    string name;
    string levels;
    int age;
    int number;
    cout << "==> About a student <==" << endl;
    cout << "Name : " << "";
    getline(cin,name);
    s.setName(name);
    cout << "Age :" << "";
    cin >> age;
    cin.ignore();
    s.setAge(age);
    cout << "Levels :"<< "";
    cin >> levels;
    cin.ignore();
    s.setLevels(levels);
    cout << "Number :" << "";
    cin >> number;
    cin.ignore();
    s.setNumber(number);
    
    
    return s;
}

object::Etablishment createEtablishment()
{
    Etablishment e = Etablishment();
    string name;
    string address;
    string type;
    cout << "Etablishment: " << "";
    getline(cin,name);
    e.setName(name);
    cout << "Etablishment address : " << "";
    getline(cin,address);
    e.setAddress(address);
    cout << "Type: " << "";
    cin >> type;
    cin.ignore();
    e.setType(type);
    return e;
}

humain::Doctor createDoctor()
{
    Doctor d = Doctor();
    string name;
    int age;
    cout << "==> About a doctor <==" << endl;
    cout << "Doctor's name : " << "";
    getline(cin,name);
    d.setName(name);
    
    cout << "Age :" << "";
    cin >> age;
    cin.ignore();
    d.setAge(age);
    cout << "Speciality :" << "";
    getline(cin,name);
    
    d.setSpeciality(name);
    return d;
}

object::Hospital doctors_Hospital()
{
    Hospital h = Hospital();
    string name;
    string address;
    string type;
    int n;
    cout << "Doctor's hospital : " << "";
    getline(cin,name);
    h.setName(name);
    cout << "Address : " << "";
    getline(cin,address);
    h.setAddress(address);
    cout << "Type : " << "";
    getline(cin,type);
    h.setType(type);
    
    return h;
}

object::Hospital createHospital()
{
    Hospital h = Hospital();
    string name;
    string address;
    string type;
    int n;
    cout << "==> About a hospital <=="<< endl;
    cout << "The name of the hospital : " << "";
    getline(cin,name);
    h.setName(name);
    cout << "Address : " << "";
    getline(cin,address);
    h.setAddress(address);
    cout << "Type : " << "";
    getline(cin,type);
    h.setType(type);
    cout << "Number of the patient : " << "";
    cin >> n;
    cin.ignore();
    h.setNumberPatient(n);
    cout << "Number of the Doctor : " << "";
    cin >> n;
    cin.ignore();
    h.setNumberDoctor(n);

    return h;
}

humain::Teacher createTeacher()
{   
    Teacher t = Teacher();
    string name;
    string subject;
    int age;
    cout << "==> About a Teacher <==" << endl;
    cout << "Name : " << "";
    getline(cin,name);
    t.setName(name);
    cout << "Age :" << "";
    cin >> age;
    cin.ignore();
    t.setAge(age);
    cout << "Subject :" << "";
    getline(cin,subject);
    t.setSubject(subject);
    return t;
}