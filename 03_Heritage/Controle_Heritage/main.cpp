#include <iostream>
#include <menuprincipal.h>
#include "compte.h"
#include "compteepargne.h"
using namespace std;

int main()
{
    CompteEpargne leCompteEpargne(0, 1.5);
    int choix;
           menuPrincipal leMenuPrincipal("menuPrincipal.txt");
           menuPrincipal leMenuCompteDepot("menuCompteDepot.txt");
           menuPrincipal leMenuCompteEpargne("menuCompteEpargne.txt");
           float montant;
           Compte * compteDepot;

               cout << "votre compte possede t-il un solde ? \n 1:OUI \n 2:NON \n saisissez 1 ou 2";
               cin >> choix;
               if (choix ==1){
               cout << "quel est le montant de votre solde ? ";
               cin >> montant;
               cout << "creation du compte avec un montant initial de " << montant << "€" << endl;
                      compteDepot = new Compte (montant);
               }
               else {
                          compteDepot = new Compte ();
               }

           do{
               choix = leMenuPrincipal.Afficher();
               switch(choix)
               {
              case OPTION_1:
                 cout << "Vous avez choisi l'option Compte de dépôt" << endl;
                 choix=0;
                 do{
                     choix = leMenuCompteDepot.Afficher();
                     switch(choix){
                     case 1:
                         cout << "Vous avez choisi l'option de consultation de Solde"<<endl;
                         menuPrincipal::AttendreAppuiTouche();
                         break;
                     case 2:
                         cout << "vous avez choisi l'option Dépôt" << endl;
                         menuPrincipal::AttendreAppuiTouche();
                         break;

                     case 3:
                         cout <<"vous avez choisi l'option Retrait"<<endl;
                         menuPrincipal::AttendreAppuiTouche();
                         break;
                     case 4:
                         cout << "vous avez choisi l'option Quitter"<<endl;
                         menuPrincipal::AttendreAppuiTouche();
                         break;
                     }
                 }while(choix < 5);
                 menuPrincipal::AttendreAppuiTouche();
                 break;


               case OPTION_2:
                   cout << "Vous avez choisi l'option Compte d'Epargne" << endl;
                   choix=0;
                   do{
                       choix = leMenuCompteEpargne.Afficher();
                       switch(choix){
                       case 1:
                           cout << "Vous avez choisi l'option de consultation de Solde"<<endl;
                           menuPrincipal::AttendreAppuiTouche();
                           break;
                       case 2:
                           cout << "vous avez choisi l'option Dépôt" << endl;
                           menuPrincipal::AttendreAppuiTouche();
                           break;

                       case 3:
                           cout <<"vous avez choisi l'option Retrait"<<endl;
                           menuPrincipal::AttendreAppuiTouche();
                           break;
                       case 4:
                           cout << "vous avez choisi l'option Calcul d'interet"<<endl;
                           menuPrincipal::AttendreAppuiTouche();
                           break;
                       case 5:
                           cout << "vous avez choisi l'option Calcul d'interet"<<endl;
                           menuPrincipal::AttendreAppuiTouche();
                           break;
                       }
                   }while(choix < 6);
               menuPrincipal::AttendreAppuiTouche();
               break;


               case QUITTER:
                   cout << "Vous avez choisi l'option Quitter" << endl;
               menuPrincipal::AttendreAppuiTouche();
               break;
               }
           }while(choix != QUITTER );
        return 0;
}
