#include "compte.h"


Compte::Compte()
{
    cout << "constructeur de la classe Compte"<< endl;
}

Compte::~Compte()
{
    cout << "destructeur de la classe Compte"<< endl;
}

void Compte::ConsulterSolde()
{
  cout << " Votre solde est de : " << solde << "€\n" <<endl;
}

void Compte::Deposer(float montant)
{
    cout << "Depot \n" << endl;
        cout << "le montant a déposer : " << endl;
        cin >> montant;

        solde = montant + solde;

        cout << "Nouveau solde : " << solde << "€" << endl;
}

void Compte::Retirer(float montant)
{
    cout << "Retrait \n" << endl;
        cout << "indiquer le montant a retirer : " << endl;
        cin >> montant;

        if (solde >= montant){
                solde = solde - montant;
                cout << "Nouveau solde : " << solde << "€\n" << endl;
            }
            else {
                cout << "erreur solde insuffisant "<< endl;
            }


}

Compte::Compte(float montant_initial)
{
    cout << "Création d'un compte\n" << endl;

        cout << "rajouter de l'argent sur ce compte " << endl;
        cout << "ajoutez : " <<endl;
        cin >> montant_initial ;

        solde = montant_initial + solde;

        cout << "Le solde initial de votre compte est de " << montant_initial << " €" << endl;
}
