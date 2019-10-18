#include <iostream>
#include <alveoleslibres.h>
#include <menu.h>
#include <rouleau.h>
#include <stock.h>
using namespace std;

int main()
{
    cout << "test rouleau " << endl;
    int rangee, colonne;
    AlveolesLibres lesAlveoleLibre(4,4);
    lesAlveoleLibre.Visualisez();

    for(int i=0; i < 16; i++){
     if(lesAlveoleLibre.Reserver(rangee,colonne)){
        cout<< "emplacement reserve : (" << rangee << " , " << colonne << ")" << endl;
    }
    else{
        cout << " tous les emplacements sont reservés" << endl;
    }
}

    lesAlveoleLibre.Liberer(4,2);
    lesAlveoleLibre.Liberer(2,2);

    lesAlveoleLibre.Visualisez();

    cout << "test classe rouleau" << endl;
    Rouleau r1("R001", 50);
    r1.AffecterAlveole(4,3);
    r1.Visualiser();
    Rouleau r2("R002", 75);
    r2.AffecterAlveole(1,1);
    r2.Visualiser();
    cout<< (r1 < r2) << endl;
    cout << (r1 - r2)<< endl;

    cout << "test classe stock" << endl;
    Stock leStock;
    return 0;
}
