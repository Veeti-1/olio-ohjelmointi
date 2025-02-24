#include <iostream>
#include "notifikaattori.h"
using namespace std;

int main()
{
    Notifikaattori test;
    Seuraaja A("a");
    Seuraaja B("b");
    Seuraaja C("c");

    test.lisaa(&A);
    test.lisaa(&B);
    test.lisaa(&C);
    test.tulosta();
    test.postita("testi viesti");
    test.poista(&A);
    test.postita("testi viesti 2");
}
