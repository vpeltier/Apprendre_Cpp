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
        Vecteur operator+(Vecteur _autre);
        Vecteur operator-(Vecteur _autre);
        void Afficher();
        double getX();
        void setX(const double valueX);
        double getY();
        void setY(const double valueY);
};
#endif // VECTEUR_H
