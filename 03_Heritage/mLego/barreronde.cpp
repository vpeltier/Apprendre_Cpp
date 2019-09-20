#include "barreronde.h"
#include <iostream>
using namespace std;

BarreRonde::BarreRonde(const string _nom, const string _reference, const int _diametre, const int _taille) :
Barre(_nom, _reference,_taille), diametre(_diametre) {
}

void BarreRonde::AfficherCaracteristiques(){
    Barre::AfficherCaracteristiques();
    cout << "Diametre : " << diametre << endl;
}

double BarreRonde::CalculerSection(){
    double retour;
    retour = M_PI * diametre * diametre / 4 ;
    return retour;

}
