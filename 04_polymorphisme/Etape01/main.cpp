#include <iostream>
#include "trajectoire.h"
#include "element.h"
#include "segment.h"

using namespace std;

int main()
{
    Element *lesEtapes;
    Trajectoire uneTrajectoire(2);
    Segment unSegment(9,0);
    Segment unSegment2(5,0.927295);


    uneTrajectoire.Ajouter(lesEtapes);
    uneTrajectoire.Afficher();
    unSegment.Afficher();
    unSegment2.Afficher();


    return 0;
}
