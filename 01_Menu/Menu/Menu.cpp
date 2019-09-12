#include "Menu.h"


Menu::Menu(const std::string &_nom):nom(_nom),longueurMax(0)
{
    nom = _nom;

    ifstream fichierMenu(nom.c_str());
    if(fichierMenu.fail()){
        cerr <<"erreur lors de l'ouverture du fichier :" << nom << endl;
    nbOptions = 0;
    }
    else {
        nbOptions = static_cast <int>(count(istreambuf_iterator<char>(fichierMenu),istreambuf_iterator<char>(),'\n'));
        fichierMenu.seekg(0,ios::beg);
        //allocation dynamique du tableaux
        option = new string[nbOptions];
        for (unsigned int i = 0;i<nbOptions; i++) {
            std::getline(fichierMenu,option[i]);
            if(option[i].length() > longueurMax)
                longueurMax = option[i].length();
        }
    }


}

Menu::~Menu()
{
    delete option;
}

int Menu::Afficher()
{
    int choix;
    int longueur =(int) longueurMax + 2;
    // si le fichier ne peut pas etre ouvert alors pas d'affichage
    if(nbOptions == 0)
        return -1;
    else{
    cout <<setfill('-');
    cout << "+-" << setw(4) << "-+-" << setw(longueur) << "-+" << endl;
    cout << setfill (' ');
    for (unsigned int i=0; i < nbOptions; i++) {
        cout << " |" << i << " | " << option[i] << "|" << endl;
    }
    cout <<setfill('-');
    cout << "+-" << setw(4) <<  "-+-" << setw(longueur) << "-+" << endl;
    cout << setfill (' ');
    do{
        cout << "votre choix :" << endl;
        cin >> choix;
    }while(choix <0 || choix > nbOptions);

    }
    return choix;
}

void Menu::AttendreAppuiTouche()
{
    string uneChaine;
    cout <<endl << "appuyer sur la touche entree pour continuer ...";
    getline(cin,uneChaine);
    cin.ignore(numeric_limits<streamsize>::max(),'\n');
    system("clear");
}
