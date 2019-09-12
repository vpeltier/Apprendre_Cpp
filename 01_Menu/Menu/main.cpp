#include <iostream>
#include "Menu.h"

using namespace std;

int main()
{
    int choix;
    Menu leMenu("menu.txt");
    choix = leMenu.Afficher();
    cout << "vous avez choisi l'option : " << choix << endl;
    return 0;
}

/**


do
{
    choix = leMenu.Afficher();
    switch (choix)
    {
    case OPTION_1:
        cout << "Vous avez choisi l'option n°1" << endl;
        Menu::AttendreAppuiTouche();
        break;
        // à compléter
    }
}while(choix != QUITTER);
**/
