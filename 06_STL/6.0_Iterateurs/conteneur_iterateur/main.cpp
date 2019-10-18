/*#include<vector>
#include<iostream>
using namespace std;

int main()
{
    //déclaration d'un tableau d’entiers dynamique avec 10 cases de réservées
    vector<int>tableau(10);

    for(int indice=0;indice<10;indice++)
    {
        tableau[static_cast<size_t>(indice)]=indice;
    }
    //déclaration d'un itérateur sur le tableau
    vector<int>::iterator it;
    for(it=tableau.begin();it != tableau.end();it++)
    {
        cout<< *it <<"";
    }
    cout << endl;

    return 0;
}
*/
/*

#include<iostream>
#include<iomanip>
#include<map>
using namespace std;

int main(void)
{
    map<string,string>telephones;
    telephones["Jean"]="0123456789";
    telephones["Paul"]="0678912345";
    telephones["Pierre"]="0789123456";
    telephones["Sophie"]="0456789123";

    map <string , string>:: iterator it;
    for(it=telephones.begin();it!=telephones.end();it++)
    {
        cout<<setw(7)<<left<<it->first<<"->"<<it->second<<endl;
    }
    return 0;
}
*/

#include<iostream>
#include<iomanip>
#include<array>
#include<algorithm>
using namespace std;

void AfficherValeur(int val);

int main()
{
    array<int,10>tableau1={15,8,25,2,9,0,12,38,10,3};
    cout<<"Tableaud'origine:";
    for_each(tableau1.begin(),tableau1.end(),AfficherValeur);
    cout<<endl;

    cout<<"Tableautrié:";
    sort(tableau1.begin(),tableau1.end());
    for_each(tableau1.begin(),tableau1.end(),AfficherValeur);
    cout<<endl;

    return 0;
}

void AfficherValeur(int val)
{
    cout<<setw(5)<<val;
}
