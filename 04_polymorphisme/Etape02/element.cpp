#include "element.h"

Element::Element():
    numero(0),
    vitesse(1)
{

}

Element::~Element()
{

}

int Element::getNumero()
{
    return numero;
}

void Element::setNumero(int valueN)
{
    numero = valueN;
}

int Element::getVitesse()
{
    return vitesse;
}

void Element::setVitesse(int valueV)
{
    vitesse = valueV;
}

/*
Vecteur Element::ObtenirVecteurArrivee()
{

}

double Element::ObtenirDuree()
{

}

double Element::ObtenirLongueur()
{

}

void Element::Afficher()
{

}
*/
