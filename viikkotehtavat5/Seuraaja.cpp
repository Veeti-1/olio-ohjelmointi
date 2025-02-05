#include <iostream>
#include "notifikaattori.h"
using namespace std;
Seuraaja::Seuraaja(string nimi):nimi(nimi){
    cout << "luodaan seuraaja: " << nimi << endl;
}
string Seuraaja::getNimi(){
    return nimi;
}

void Seuraaja::paivitys(const string& viesti){
    cout << "Seuraaja: " << nimi << " sai viestin: " << viesti << endl;
}
