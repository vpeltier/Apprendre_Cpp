#include "rouleau.h"


Rouleau::Rouleau(const string _reference, const int _diametre):
    reference(_reference),
    diametre(_diametre)
{

}

void Rouleau::AffecterAlveole(const int _rangee, const int _colonne)
{
    rangee = _rangee;
    colonne = _colonne;
}

void Rouleau::ObtenirLocalisation(int &_rangee, int &_colonne)
{
    _rangee = rangee;
    _colonne = colonne;
}

bool Rouleau::operator <(const Rouleau &_autreRouleau)
{
    return this->diametre < _autreRouleau.diametre;
}

int Rouleau::operator -(const Rouleau &_autreRouleau)
{
    return this->diametre - _autreRouleau.diametre;

}

void Rouleau::Visualiser()
{
    cout << "Rouleau référence : " << reference << " Diametre : " << diametre << endl;
    cout << "Dans magasin en " << rangee << " - " << colonne << endl;
}
