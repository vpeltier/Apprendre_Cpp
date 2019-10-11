#include "vecteur.h"

Vecteur::Vecteur(const double _x, const double _y):
    x(_x),
    y(_y)
{

}

Vecteur Vecteur::operator+(Vecteur _autre)
{
    return Vecteur(x+ _autre.x, y+ _autre.y);
}

Vecteur Vecteur::operator-(Vecteur _autre)
{
    return Vecteur(x- _autre.x, y- _autre.y);
}

double Vecteur::getY()
{
    return y;
}

void Vecteur::setY(const double valueY)
{
    y = valueY;
}

double Vecteur::getX()
{
    return x;
}

void Vecteur::setX(const double valueX)
{
    x = valueX;
}
