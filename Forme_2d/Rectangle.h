#include "Forme2d.h"
class Rectangle:public Forme2d
{
    private:
        float longueur;
        float largeur;
    public:
        Rectangle();
        ~Rectangle();

        void setLongueur(float val);
        void setLargeur(float val);

        float surface();
        float perimetre();
        void affichage();
};