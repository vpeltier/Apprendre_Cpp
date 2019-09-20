#ifndef BARRERONDE_H
#define BARRERONDE_H
#include "barre.h"
using namespace std;

class BarreRonde : public Barre {

public:
    BarreRonde(const string _nom, const string _reference, const int _diametre, const int _taille = 250);
    void AfficherCaracteristiques();
    double CalculerSection();

private:
    int diametre;
};


#endif // BARRERONDE_H
