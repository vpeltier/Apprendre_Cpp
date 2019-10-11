#include "iostream"
#include "trajectoire.h"

Trajectoire::Trajectoire(const int _nbEtapesMaxi, Vecteur _depart):
    nbEtapesMax(_nbEtapesMaxi),
    depart(_depart)
{
    lesEtapes = new Element *[nbEtapesMax];
    prochaineEtape = 0;
}

Trajectoire::~Trajectoire()
{
    delete[] lesEtapes;
}

bool Trajectoire::Ajouter(Element *pElement)
{
    bool retour = true;
    if(prochaineEtape < nbEtapesMax){
        lesEtapes[prochaineEtape++] = pElement;
        pElement->setNumero(prochaineEtape);
    }else{
        retour = false;
    }
    return retour;
}

void Trajectoire::Afficher()
{
    cout << "Trajectoire :" << endl << endl;
    for (int indice = 0; indice <nbEtapesMax; indice++){
            lesEtapes[indice]->Afficher();
    }
    cout << endl;
    cout << "Durée totale du parcours = " << endl;
    cout << "Longueur totale totale du parcours = " << endl << endl;

    cout << "Vecteur de départ = (" << depart.getX() << "," << depart.getY() << ")" << endl;
    cout << "Vecteur d'arrivée = (" << "" << "," << "" << ")" << endl;
}
