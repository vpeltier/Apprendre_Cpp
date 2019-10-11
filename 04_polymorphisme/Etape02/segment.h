
#ifndef SEGMENT_H
#define SEGMENT_H
#include "element.h"

class Segment:public Element{
    private:
        double longueur;
        double angle;
    public:
        Segment(const double _longueur, const double _angle);
        virtual void Afficher();
        virtual double ObtenirLongueur();
        virtual double ObtenirDuree();
        virtual Vecteur ObtenirVecteurArrivee();
};

#endif // SEGMENT_H
