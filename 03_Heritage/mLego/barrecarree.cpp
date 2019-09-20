#include "barrecarree.h"
#include <iostream>
using namespace std;

BarreCarre::BarreCarre(const string _nom, const string _reference, const int _cote, const int _taille):
Barre(_nom,_reference,_taille), cote(_cote){
}

void BarreCarre::AfficherCaracteristiques(){
    Barre::AfficherCaracteristiques();
    cout << "Côté : " << cote << endl;
}

double BarreCarre::CalculerSection(){
    double retour;
    retour = cote * cote;
    return retour;

}
