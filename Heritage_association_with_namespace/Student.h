#include "Etablishment.h"
#include "Person.h"

namespace humain
{
    class Student : public Person
    {
        private:
            object::Etablishment school;
            int number;
            string levels;
        public:
            Student();
            ~Student();

            void setEtablishment(object::Etablishment e);
            void setNumber(int n);
            void setLevels(string name_levels);
            object::Etablishment getEtablishment();
            int getNumber();
            string getLevels();

            void infoStudent(object::Etablishment e);
 
    };
}