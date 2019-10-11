#include "segment.h"

Segment::Segment(const double _longueur, const double _angle):
    Element (),
    longueur(_longueur),
    angle(_angle)
{

}

Vecteur Segment::ObtenirVecteurArrivee()
{
    Vecteur initial(0,0);
    double x = longueur * cos(angle);
    double y = longueur * sin(angle);

}

double Segment::ObtenirDuree()
{
    double duree = longueur / vitesse;
    return duree;
}

double Segment::ObtenirLongueur()
{
    return longueur;
}

void Segment::Afficher()
{
    cout << "(" << numero << ")" << " SEGMENT L = " << longueur << "  " << "A = " << angle << "  " << "V = " << vitesse << endl;
    ObtenirVecteurArrivee();
    cout << endl;
}
