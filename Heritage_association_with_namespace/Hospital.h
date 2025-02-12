#ifndef HOSPITAL_H
#define HOSPITAL_H
#include "Infrastructure.h"
using namespace std;

namespace object
{
    class Hospital : public Infrastructure
    {
        private:
            string type;
            int numberPatient;
            int numberDoctor;
        public:
            Hospital();
            ~Hospital();
            void setType(string p_type);
            void setNumberPatient(int n);
            void setNumberDoctor(int m);
    
            string getType();
            int getNumberPatient();
            int getNumberDoctor();
    
            void infoHospital_withDoctor();
            void infoHospital();
    };
}
#endif