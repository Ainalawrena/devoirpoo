#ifndef INFRA_H
#define INFRA_H
#include <string>
using namespace std;
class Infrastructure
{
    private:
        string name;
        string address;
    public:
        Infrastructure();
        ~Infrastructure();
        
        void setName(string name1);
        void setAddress(string address1);
        string getName();
        string getAddress();

        void infoInfrastrucure();
};

#endif