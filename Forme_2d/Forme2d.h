#ifndef FORME2D_H
#define FORME2D_H

//c'est une classe abstraite puisqu'il contient au moins un methode abstraite(virtuel pure)
class Forme2d
{
    public:
        Forme2d();
        ~Forme2d();
        virtual float surface()=0;
        virtual float perimetre()=0;
        virtual void affichage()=0;
};
#endif