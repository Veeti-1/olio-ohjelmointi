#include <iostream>
#include "pankkitilit.h"
using namespace std;

int main()
{
    Asiakas a("pentti", 100);
    a.showSaldo();
    a.talletus(200);
    a.luotonNosto(100);
    a.showSaldo();
    cout << "" << endl;

    Asiakas b("antti", 100);
    b.showSaldo();
    b.talletus(200);
    b.showSaldo();
    cout << " " << endl;

    a.tiliSiirto(50, b);

    cout << " " << endl;
    b.showSaldo();
    cout << " " << endl;


    return 0;
}
