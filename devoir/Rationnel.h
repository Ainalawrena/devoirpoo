#ifndef RATIONNEL_H
#define RATIONNEL_H
namespace isa{
    class Rationnel
    {
    private:
            int num;
            int denom;
        public:
            Rationnel();
            ~Rationnel();
            void setNum(int val);
            void setDenom(int val);
            int getNum();
            int getDenum(); 

            Rationnel getfraction();
            Rationnel addition(Rationnel r2);  
            Rationnel soustraction(Rationnel r2);
            Rationnel division(Rationnel r2);   
            Rationnel multiplication(Rationnel r2);
                
            void affichage();
    };
}
#endif
