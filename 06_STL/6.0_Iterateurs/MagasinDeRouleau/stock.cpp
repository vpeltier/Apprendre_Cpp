#include "stock.h"

void Stock::AjouterRouleau(const Rouleau _nouveau)
{
    insert(_nouveau);
}

int Stock::RechercherSerie(POSITION_STOCK &positionDebut)
{
    for(int indice =0; indice ; indice++){

    }
    if(positionDebut > 0){

    }
}

void Stock::SortirRouleau(const POSITION_STOCK positionRouleau)
{

}

void Stock::Visualiser()
{
    multiset<Rouleau>::iterator it;
        for(it = begin(); it != end(); it++){
            cout << &it << " ";
        }
        cout<<endl;
}
