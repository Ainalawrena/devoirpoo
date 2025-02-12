#include "Hospital.h"
#include "Person.h"
using namespace std;

namespace humain
{
    class Doctor : public Person
    {
        private:
            object::Hospital h;
            string speciality;
        public:
            Doctor();
            ~Doctor();
            void setSpeciality(string speciality1);
            string getSpeciality();

            void infoDoctor(object::Hospital h);
    };
}