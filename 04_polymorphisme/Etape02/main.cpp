#include <iostream>
#include "trajectoire.h"
#include "element.h"
#include "segment.h"

using namespace std;

int main()
{
    Element *lesEtapes;
    Trajectoire uneTrajectoire(2);
    Segment unSegment1(9,0);
    Segment unSegment2(5,0.927295);


    uneTrajectoire.Ajouter(&unSegment1);
    uneTrajectoire.Ajouter(&unSegment2);
    uneTrajectoire.Afficher();
    unSegment1.Afficher();
    unSegment2.Afficher();

    return 0;
}
