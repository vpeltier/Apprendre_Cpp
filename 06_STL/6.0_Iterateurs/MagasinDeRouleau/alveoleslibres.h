#ifndef ALVEOLESLIBRES_H
#define ALVEOLESLIBRES_H
#include <iostream>
#include <vector>
#define NB_ALVEOLES 16

using namespace std;

class AlveolesLibres:public vector<int>{
    private:
        int nbRangees;
        int nbColonnes;
    public:
        AlveolesLibres(const int _nbRangees, const int _nbColonnes);
        bool Reserver(int &_rangee, int &_colonne);
        void Liberer(const int _rangee, const int _colonne);
        void Visualisez();
};

#endif // ALVEOLESLIBRES_H
