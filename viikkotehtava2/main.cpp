#include <iostream>


#include "Game.h"

using namespace std;

int main()
{
    int ylaraja;
    cout << "anna korkein etsittava luku: ";
    cin >> ylaraja;
    Game game(ylaraja);

    game.play();


    return 0;
}
