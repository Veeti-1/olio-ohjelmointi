#include <iostream>
#include "notifikaattori.h"
using namespace std;

Notifikaattori::Notifikaattori() : seuraajat(nullptr){

}

void Notifikaattori::lisaa(Seuraaja *uusi){
    cout << "notifikaattori lisaa seuraajan: " << uusi->getNimi() << endl;
    uusi ->next = seuraajat;
    seuraajat = uusi;

}

void Notifikaattori::poista(Seuraaja *poisto){



    if (seuraajat == nullptr) {
        return;
    }
    Seuraaja* nyk = seuraajat;
    Seuraaja* vanh = nullptr;
    while(nyk!= nullptr){
        if(nyk == poisto){
            cout << "notifikaattori poistaa seuraajan: " << poisto->getNimi() << endl;
            if(vanh == nullptr){
                seuraajat =nyk ->next;
            }
            else{
                vanh ->next =nyk->next;
            }
            nyk->next = nullptr;

            return;
        }
        vanh = nyk;
        nyk = nyk->next;
    }
}

void Notifikaattori::postita(const string& viesti){
    cout << "notifikaattori postaa viestin: " << viesti << endl;
    Seuraaja* nyk = seuraajat;
    while(nyk != nullptr){
        nyk ->paivitys(viesti);
        nyk = nyk->next;
    }
}
void Notifikaattori::tulosta(){
    cout << "Notifikaattorin seuraajat" << endl;
    Seuraaja* nyk = seuraajat;
    while(nyk !=nullptr){
        cout << "Seuraaja: " << nyk->getNimi() << endl;
        nyk = nyk->next;
    }
}
