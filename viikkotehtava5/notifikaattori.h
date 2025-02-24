#ifndef NOTIFIKAATTORI_H
#define NOTIFIKAATTORI_H
#include <string>
using namespace std;
class Seuraaja{

public:
    Seuraaja *next = nullptr;
    Seuraaja(string nimi);
    string getNimi();
    virtual void paivitys(const string& viesti);

private:
    string nimi;
};
class Notifikaattori{
public:
    Notifikaattori();
    void lisaa(Seuraaja *uusi);
    void poista(Seuraaja *poisto );
    void tulosta();
    void postita(const string& viesti);

private:
    Seuraaja *seuraajat = nullptr;
};



#endif // NOTIFIKAATTORI_H
