
#ifndef ELEMENT_H
#define ELEMENT_H
#include <iostream>
#include "vecteur.h"
#include <math.h>


class Element
{
public:
    Element();
    virtual ~Element();
    virtual void Afficher() = 0;
    int getNumero();
    void setNumero(int valueN);
    int getVitesse();
    void setVitesse(int valueV);
    virtual double ObtenirLongueur()=0;
    virtual double ObtenirDuree()=0;
    virtual Vecteur ObtenirVecteurArrivee()=0;
protected:
    int numero;
    int vitesse;

};


#endif // ELEMENT_H
