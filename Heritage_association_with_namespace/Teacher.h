#ifndef TEACHER_H
#define TEACHER_H

#include "Person.h"
#include "Etablishment.h"
using namespace std;
using namespace object;

namespace humain
{
    class Teacher : public Person
    {
        private:
            Etablishment workPlace;
            string subject;
        public:
            Teacher();
            ~Teacher();

            void setWorkPlace(Etablishment name_place);
            void setSubject(string name_subject);

            Etablishment getEtablishment();
            string getSubject();

            void infoTeacher(Etablishment e);

    };
}
#endif
