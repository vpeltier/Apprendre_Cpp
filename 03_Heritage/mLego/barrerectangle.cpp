#include "barrerectangle.h"
#include <iostream>
using namespace std;

BarreRectangle::BarreRectangle(const string _nom, const string _reference, const int _longueur, const int _largeur, const int _taille):
Barre(_nom,_reference,_taille), longueur(_longueur), largeur(_largeur){
}

double BarreRectangle::CalculerSection(){
    double retour;
    retour = longueur * largeur;
    return retour;
}

void BarreRectangle::AfficherCaracteristiques(){
    Barre::AfficherCaracteristiques();
    cout << "Longueur : " << longueur << endl << "Largeur : " << largeur << endl;
}


