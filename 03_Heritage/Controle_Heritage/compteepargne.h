#ifndef COMPTEEPARGNE_H
#define COMPTEEPARGNE_H
#include "compte.h"

#include <iostream>
#include <iomanip>

class CompteEpargne : public Compte
{
public:
    CompteEpargne(const float montant_initial,float _tauxInteret);
    void CalculerInterets();
private:
    float tauxInteret;
};

#endif // COMPTEEPARGNE_H
