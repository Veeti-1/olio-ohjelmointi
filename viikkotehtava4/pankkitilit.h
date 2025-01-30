#ifndef PANKKITILIT_H
#define PANKKITILIT_H
#include <string>
using namespace std;
class Pankkitili {
public:
    Pankkitili(string);
    virtual double getBalance();
    virtual bool deposit(double talletus);
    virtual bool withdraw(double nosto);


protected:
    string omistaja;
    double saldo = 0;

};
class Luottotili : public Pankkitili {
public:
    Luottotili(string, double);
    bool deposit(double talletus) override;
    bool withdraw(double nosto) override;
protected:
    double luottoRaja = 0;

};
class Asiakas
{
public:
    Asiakas(string, double);
    string getNimi();
    void showSaldo();
    bool talletus(double);
    bool nosto(double);
    bool luotonMaksu(double);
    bool luotonNosto(double);
    bool tiliSiirto(double, Asiakas&);

private:
    string nimi;
    Pankkitili* kayttotili;
    Luottotili* luottotili;

};




#endif // PANKKITILIT_H
