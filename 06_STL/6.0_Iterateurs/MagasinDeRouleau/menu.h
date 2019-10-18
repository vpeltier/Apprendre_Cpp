#ifndef MENU_H
#define MENU_H
#include <string>
#include <algorithm>

using namespace std;

class Menu{
    private:
        int *ptr;
        string nom;
        string * options;
        int nbOptions;
        int longueurMax;
    public:
        Menu(const string _nom);
        ~Menu();
        int Afficher();
        static void AttendreAppuiTouche();
};

class ErreurFichier{
    private:
        int codeErreur;
        string message;
    public:
        ErreurFichier(int _codeErreur,string _message);
        int ObtenirCodeErreur() const;
        string ObtenirDescription() const;
};

class ErreurVide{
    private:
        int codeErreur;
        string message;
    public:
        ErreurVide(int _codeErreur,string _message);
        int ObtenirCodeErreur() const;
        string ObtenirDescription() const;
};
#endif // MENU_H
