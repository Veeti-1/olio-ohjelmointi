#include <iostream>
#include "pankkitilit.h"
using namespace std;
Luottotili::Luottotili(string nimi, double luottoRaja) : Pankkitili(nimi), luottoRaja(luottoRaja) {
    saldo = luottoRaja;
    cout << "pankkitili luotu " << nimi << ":lle" << endl;
    cout << "luottotili luotu " << nimi << ":lle" << ", luottoraja " << luottoRaja << endl;

}
bool Luottotili::deposit(double talletus) {
    if (talletus >= 0) {
        saldo += talletus;
        if (saldo > 0) {

            saldo = 0;
        }
        cout << omistaja << " luottotili: talletus tehty " << talletus << " euroa" << " luottotilin saldo: " << luottoRaja << " euroa." << endl;
        return true;
    }
    else {
        cout << "talletus epaonnistui" << endl;
        return false;
    }
}

bool Luottotili::withdraw(double nosto) {
    if (nosto > 0 && saldo - nosto >= -luottoRaja) {

        saldo -= nosto;
        cout << omistaja << "luottotili: nosto tehty " << nosto << " euroa" << " luottoa jaljella: " << saldo << endl;

    }
    return false;
}
