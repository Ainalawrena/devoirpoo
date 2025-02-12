#include <iostream>
#include <string>
#include "Infrastructure.h"
#include "Etablishment.h"

using namespace object;

Etablishment::Etablishment()
{

}

Etablishment::~Etablishment()
{

}

void Etablishment::setType(string name_type)
{
    type = name_type;
}

string Etablishment::getType()
{
    return type;
}

void Etablishment::infoEtablishment()
{   
    cout << "Etablisement : " << endl;
    Infrastructure::infoInfrastrucure();
    cout << "Type : " << getType() << endl;
    
}