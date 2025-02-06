
namespace isa
{
    class ComplexeRationnel
    {
        private:
            Rationnel reel;
            Rationnel imaginaire;
        public:
            ComplexeRationnel();
            ~ComplexeRationnel();

            //Les setters
            void setReel(Rationnel val);
            void setImaginaire(Rationnel val);

            //les getters
            Rationnel getReel();
            Rationnel getImaginaire();

            ///les  calcules
            ComplexeRationnel addition(ComplexeRationnel c2);
            ComplexeRationnel soustraction(ComplexeRationnel c2);
            ComplexeRationnel multiplication(ComplexeRationnel c2);
            ComplexeRationnel division(ComplexeRationnel c2);
    };
}