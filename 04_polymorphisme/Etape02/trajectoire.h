#ifndef TRAJECTOIRE_H
#define TRAJECTOIRE_H
#include "element.h"


class Trajectoire
{
public:
    Trajectoire(const int nbEtapesMax);
    ~Trajectoire();
    bool Ajouter(const Element* _pElement);
    void Afficher();
private:
    Element unElement;
    int nbEtapesMax;
    int prochaineEtape;
};

#endif // TRAJECTOIRE_H
