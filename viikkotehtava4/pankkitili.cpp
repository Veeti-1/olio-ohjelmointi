#include <iostream>
#include "pankkitilit.h"
using namespace std;
Pankkitili::Pankkitili(string nimi) : omistaja(nimi) {

}
bool Pankkitili::deposit(double talletus) {
    if (talletus >= 0) {
        saldo += talletus;
        cout << omistaja << " pankkitili: " << "talletus tehty " << talletus << " euroa" << ", tilin saldo: " << getBalance() << " euroa." << endl;
        return true;
    }
    else {
        cout << "talletus epaonnistui" << endl;
        return false;
    }
}

bool Pankkitili::withdraw(double nosto) {
    if ((saldo - nosto) >= 0) {

        saldo -= nosto;
        cout << omistaja << " pankkitili: " << "nosto tehty " << nosto << " euroa" << ", tilin saldo: " << getBalance() << " euroa." << endl;
        return true;
    }
    else {
        cout << "yritit nostaa: " << nosto << " euroa. " << "nosto epaonnistui, koska yriti nostaa enemman kuin on saldoa." << endl;
        return false;
    }
}
double Pankkitili::getBalance() {
    return saldo;
}

