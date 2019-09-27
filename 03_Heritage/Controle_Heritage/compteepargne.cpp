#include "compteepargne.h"

CompteEpargne::CompteEpargne(const float montant_initial, float _tauxInteret): Compte (montant_initial),tauxInteret(_tauxInteret)
{
cout << "constructeur de la classe CompteEpagrne"<< endl;

}

void CompteEpargne::CalculerInterets()
{
     solde = solde + (tauxInteret * solde / 100);
}
