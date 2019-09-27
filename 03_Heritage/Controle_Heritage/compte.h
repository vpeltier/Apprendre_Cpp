#ifndef COMPTE_H
#define COMPTE_H

#include <string>
#include <iostream>


using namespace std;

class Compte
{
public:
    Compte();
    ~Compte();
    void ConsulterSolde();
    void Deposer(float montant);
    void Retirer(float montant);
    Compte(float montant_initial);
protected:

    float solde;
};


#endif // COMPTE_H
