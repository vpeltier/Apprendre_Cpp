#include <iostream>
#include <fstream>
#include <string>
#include <iomanip>


using namespace std;

int main()
{
    string nomDuFichier;
    cout << "Entrer le nom du fichier à lire : ";
    cin >> nomDuFichier;
    ifstream leFichier(nomDuFichier.c_str());
    if(!leFichier.is_open())
        cerr << "Erreur lors de l'ouverture" << endl;
    else {
            string pays;
            int nbor;
            int nbargent;
            int nbbronze;
            cout << "+" << setfill('-') << setw(21) << "+" << setfill(' ') << endl;

            do
            {
                leFichier >> pays >> nbor >> nbargent >> nbbronze;
                if(leFichier.good())
                {
                    cout << "|" << setw(20) << left << pays << "|" << setw(5) << right << nbor << "|" << setw(5) << right << nbargent << "|" << setw(5) << right << nbbronze << endl;

                }
            }while(!leFichier.eof());
        }
        return 0;
}
