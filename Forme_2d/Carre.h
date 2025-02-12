#include "Forme2d.h"
class Carre : public Forme2d
{
    private:
        float cote;
    public:
        Carre();
        ~Carre();

        void setCote(float valeur);
        
        float surface();
        float perimetre();
        void affichage();
};