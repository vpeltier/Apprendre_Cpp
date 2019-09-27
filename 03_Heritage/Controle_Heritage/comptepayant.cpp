#include "comptepayant.h"

ComptePayant::ComptePayant()
{

}

void ComptePayant::Deposer(const float montant)
{
    solde = solde + montant -1;
}

void ComptePayant::Retirer(const float montant)
{
    solde = solde - montant -1;
}
