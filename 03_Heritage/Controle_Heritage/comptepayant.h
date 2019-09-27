#ifndef COMPTEPAYANT_H
#define COMPTEPAYANT_H
#include "compte.h"

class ComptePayant: public Compte
{
public:
    ComptePayant();
    void Deposer(const float montant);
    void Retirer(const float montant);
};

#endif // COMPTEPAYANT_H
