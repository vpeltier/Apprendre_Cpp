#ifndef VECTEUR_H
#define VECTEUR_H
#include <iostream>
#include <string.h>

using namespace std;

class Vecteur{
    private:
        double x;
        double y;
    public:
        Vecteur(const double _x, const double _y);
        Vecteur operator+(string _autre);
        Vecteur operator-(string _autre);
        void Afficher();
        double getX();
        void setX(const double _x);
        double getY();
        void setY(const double _y);
};

#endif // VECTEUR_H
