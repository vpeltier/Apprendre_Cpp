#include <iostream>
#include "trajectoire.h"
#include "element.h"
#include "segment.h"

using namespace std;

int main()
{
    Trajectoire uneTrajectoire(3,Vecteur(5,10));

    /*exemple tableau "new segment" pour incrementer*/
    Segment *unSegment;
    unSegment = new Segment(9,0);
    unSegment->setVitesse(3);

    /*2eme segment*/
    Segment *unSegment2;
    unSegment2 = new Segment(5,0.927295);
    unSegment2->setVitesse(1);


    /*ajoute la classe trajectoire au segment*/
    uneTrajectoire.Ajouter(unSegment);
    uneTrajectoire.Ajouter(unSegment2);
    uneTrajectoire.Afficher();


    return 0;
}
