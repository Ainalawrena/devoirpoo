#ifndef ETAB_H
#define ETAB_H
#include <string>
#include "Infrastructure.h"
using namespace std;

namespace object
{
    class Etablishment : public Infrastructure
    {
        private:
            string type;
        public:
            Etablishment();
            ~Etablishment();
            void setType(string name_type);
            string getType();
            void infoEtablishment();
    };
}
#endif