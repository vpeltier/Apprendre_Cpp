#ifndef MENU_H
#define MENU_H
#include <string>
#include <iostream>
#include <iomanip>
#include <fstream>
#include <algorithm>

using namespace std;

class Menu
{
public:
    Menu(const std::string &_nom);
    ~Menu();
    int Afficher();
    static void AttendreAppuiTouche();
private:
    std::string nom;
    std::string *option;
    unsigned int nbOptions;
    size_t longueurMax;

};

enum CHOIX_MENU
{
    OPTION_1 = 1,
    OPTION_2,
    OPTION_3,
    OPTION_4,
    QUITTER
};

#endif // MENU_H
