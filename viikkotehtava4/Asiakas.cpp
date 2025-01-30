#include "pankkitilit.h"
#include <iostream>
Asiakas::Asiakas(string nimi, double luottoraja)
    : nimi(nimi) {
    kayttotili = new Pankkitili(nimi);
    luottotili = new Luottotili(nimi, luottoraja);
    cout << "asiakkuus luotu " << nimi << ":lle" << endl;

}

string Asiakas::getNimi() {
    return nimi;
}
void Asiakas::showSaldo() {
    cout << nimi << endl;
    cout << "kayttotilin saldo: " << kayttotili->getBalance() << endl;
    cout << "Luottotilin saldo: " << luottotili->getBalance() << endl;
}
bool Asiakas::talletus(double sum) {
    return kayttotili->deposit(sum);

}
bool Asiakas::nosto(double sum) {
    return kayttotili->withdraw(sum);
}
bool Asiakas::luotonMaksu(double sum) {
    return luottotili->deposit(sum);

}
bool Asiakas::luotonNosto(double sum) {
    if (luottotili->withdraw(sum)) {

        cout << "luottotili: nosto " << sum << " tehty, luottoajaljella" << luottotili->getBalance() << endl;
        return luottotili->withdraw(sum);
    }
}

bool Asiakas::tiliSiirto(double sum, Asiakas& r) {
    cout << this->getNimi() << " siirtaa " << sum << " euroa " << r.getNimi() << ":lle" << endl;
    if (sum < 0) {
        cout << "et voi siirtaa negatiivista summaa" << endl;
        return false;
    }

    if (kayttotili->withdraw(sum)) {

        if (r.kayttotili->deposit(sum)) {

            return true;
        }

    }
    else {
        cout << "tilisiirto epaonnistui" << endl;
        return false;
    }
}

