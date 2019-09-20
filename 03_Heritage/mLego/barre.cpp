#include "barre.h"
using namespace std;

Barre::Barre(const string _nom, const string _reference, const int _taille) : nom(_nom), reference(_reference), taille(_taille) {
}

Barre::Barre(const Barre& orig) {
}

Barre::~Barre() {
}

void Barre::AfficherCaracteristiques(){
    cout << "Nom : " << nom << endl << "Reference : " << reference << endl << "Taille : " << taille << endl;
}
