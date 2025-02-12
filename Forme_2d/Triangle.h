#include "Forme2d.h"

class Triangle:public Forme2d
{
    private:
        float cote1;
        float cote2;
        float cote3;
        //float hauteur;
    public:
        Triangle();
        ~Triangle();

        void setCote1(float valeur);
        void setCote2(float valeur);
        void setCote3(float valeur);
        //void setHauteur(float valeur);

        float surface();
        float perimetre();
        void affichage();
};