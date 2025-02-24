#include <vector>
#include <string>
#include "Personne.h"
using namespace std;
class Registre
{
    private:
        vector<Personne> liste;
    public:
        Registre();
        ~Registre();
        std::vector<Personne>::iterator begin();
        void insert(std::vector<Personne> :: iterator it,Personne p1);
        void affichage();
        void modif();
        void supr();
};