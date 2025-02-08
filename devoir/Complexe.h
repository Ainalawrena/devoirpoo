#ifndef COMPLEXE_H
#define COMPLEXE_H
namespace isa
{
    class Complexe
    {
        private:
            double reel;
            double imaginaire;
        public:
            Complexe();
            ~Complexe();
            void setReel(double val);
            void setImaginaire(double val);
            double getReel();
            double getImaginaire();

            Complexe getComplexe();
            Complexe addition(Complexe c2);
            Complexe soustraction(Complexe c2);
            Complexe multiplication(Complexe c2);
            Complexe division(Complexe c2);

            void affichage();
    };
}
#endif