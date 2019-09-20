#ifndef BARRERECTANGLE_H
#define BARRERECTANGLE_H
#include "barre.h"

class BarreRectangle : public Barre {

public:
    BarreRectangle(const string _nom, const string _reference, const int _longueur, const int _largeur, const int _taille = 250);
    void AfficherCaracteristiques();
    double CalculerSection();

private:
    int longueur;
    int largeur;

};
#endif // BARRERECTANGLE_H
