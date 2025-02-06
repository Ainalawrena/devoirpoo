
namespace isa
{
    class Complexe
    {
        private:
            int reel;
            int imaginaire;
        public:
            Complexe();
            ~Complexe();
            void setReel(int val);
            void setImaginaire(int val);
            int getReel();
            int getImaginaire();
            Complexe addition(Complexe c2);
            Complexe soustraction(Complexe c2);
            Complexe multiplication(Complexe c2);
            Complexe division(Complexe c2);
    };
}
