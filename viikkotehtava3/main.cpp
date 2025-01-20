#include <iostream>
#include "chef.h"
using namespace std;

int main()
{
    string chefName;
    cout << "anna kokille nimi: ";
    cin >> chefName;
    ItalianChef ItalianChef(chefName);
    ItalianChef.getName();
    int ainekset;
    cout << "anna salaatin aineksien maara: ";
    cin >> ainekset;
    cout << endl;
    ItalianChef.makeSalad(ainekset);

    int keitonainekset;
    cout << "anna keiton aineksien maara:";
    cin >> keitonainekset;
    ItalianChef.makeSoup(keitonainekset);


    string salasana;
    int jauho, vesi;
    cout << "anna jauhojen maara: ";
    cin >> jauho;
    cout << "anna veden maara: ";
    cin >> vesi;
    cout << "anna salasana:";
    cin >> salasana;


    bool oikein = ItalianChef.askSecret(salasana, jauho, vesi);
    if(oikein){
        cout << " " << endl;

    }
    else{
        cout << "salsana oli vaarin pizzoja ei valmistettu" << endl;
        return 1;
    }

    return 0;
}

