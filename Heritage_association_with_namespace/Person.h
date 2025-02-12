#ifndef PERSON_H
#define PERSON_H
#include <string.h>
using namespace std;
class Person
{
    private:
        string name;
        int age;
    public:
        Person();
        ~Person();
        void setName(string name1);
        void setAge(int age1);
        void infoPerson();
};

#endif