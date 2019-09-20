#ifndef BARRECARREE_H
#define BARRECARREE_H
#include "barre.h"

class BarreCarre : public Barre {

public:
    BarreCarre(const string _nom, const string _reference, const int _cote, const int _taille = 250);
    void AfficherCaracteristiques();
    double CalculerSection();

private:
    int cote;

};


#endif // BARRECARREE_H
