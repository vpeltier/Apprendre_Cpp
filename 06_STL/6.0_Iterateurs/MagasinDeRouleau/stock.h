#ifndef STOCK_H
#define STOCK_H
#include <set>
#include <iostream>
#include "rouleau.h"
#define POSITION_STOCK int

class Stock : public std::multiset<Rouleau>
{
public:
    void AjouterRouleau(const Rouleau _nouveau);
    int RechercherSerie(POSITION_STOCK &positionDebut);
    void SortirRouleau(POSITION_STOCK const positionRouleau);
    void Visualiser();
};
#endif // STOCK_H
