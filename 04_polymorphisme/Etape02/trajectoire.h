#ifndef TRAJECTOIRE_H
#define TRAJECTOIRE_H
#include "element.h"


class Trajectoire{
    private:
        int nbEtapesMax; /// Nombre de vecteur maximum pour tracer le trajet
        int prochaineEtape; ///
        Element **lesEtapes; /// Tableau des vecteurs(segments) créés
        Vecteur depart; /// Vecteur de départ du trajet
    public:
        Trajectoire(const int _nbEtapesMaxi, Vecteur _depart);
        ~Trajectoire();
        bool Ajouter(Element *pElement);
        void Afficher();
};
#endif // TRAJECTOIRE_H
