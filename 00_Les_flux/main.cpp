/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/*
 * File:   main.cpp
 * Author: vpeltier
 *
 * Created on 5 septembre 2019
 */
#include <iostream>
#include <fstream>
#include <string>
#include <iomanip>

using namespace std;

int main() {
    string inputFile;

    cout << "Entrer le nom du fichier à lire : ";
    cin >> inputFile;

    ifstream fichier(inputFile.c_str()); //Creation du flux en lecture sur le fichier
    if (!fichier.is_open())
        cerr << "Erreur lors de l'ouverture du fichier" << endl;

    else
    {
        string pays;
        int nbOr;
        int nbArgent;
        int nbBronze;

        //affichage de la premiere ligne du tableau
        cout << setfill('-');
        cout << "+" << setw(18) << "+" << setw(9) << "+" << setw(9) << "+" << setw(9) << "+" << endl;
        cout << setfill(' ');

        while (!fichier.eof())
        {
            fichier >> pays >> nbOr >> nbArgent >> nbBronze; //recuperation des valeurs
            if (fichier.good())//Si les valeurs ont bien été lues
            {
                //affichage des lignes du tableau
                cout << "| " << left << setw(16) << pays << "|" << right << setw(7) << nbOr << " |" << right << setw(7) << nbArgent << " |" << right << setw(7) << nbBronze << " |" << endl;
            }
        }
        //Affichage du bas du tableau.
        cout << setfill('-');
        cout << "+" << setw(18) << "+" << setw(9) << "+" << setw(9) << "+" << setw(9) << "+" << endl;
    }
    return 0;
}
