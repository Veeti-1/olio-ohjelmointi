#include <iostream>
#include "chef.h"
using namespace std;

int main()
{
    string chefName;
    cout << "anna kokille nimi: ";
    cin >> chefName;
    ItalianChef ItalianChef(chefName);
    cout << "kokin nimi: " << ItalianChef.getName() << endl;
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
        cout << "salasana oli oikein ja pizzat on valmistettu" << endl;

    }
    else{
        cout << "salsana oli vaarin pizzoja ei valmistettu" << endl;
        return 1;
    }

    return 0;
}

