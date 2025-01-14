#include <iostream>
#include <ctime>

#include "Game.h"

using namespace std;

Game::Game(int ylaraja)
{
    maxNumber = ylaraja;
    std::srand(std::time(NULL));
    randomNumber = (rand()%maxNumber) +1 ;
    cout << "maximi numeroksi on annettu: "<< maxNumber << endl;

}

void Game::play(){
    numOfGuesses = 0;
    cout << "arvaa oikea luku valilta 1-" << maxNumber << ": ";
    while(true){
        cin >> playerGuess;
        if(playerGuess==randomNumber){
            cout << "arvasit oikein!" << endl;

            numOfGuesses++;
            printGameResult();
            break;
        }
        else if(playerGuess<randomNumber){
            cout << "annettu luku on pienempi kuin arvottuluku, yrita uudestaan: ";
            numOfGuesses++;
        }
        else{
            cout << "annettuluku on suurempi kuin arvottuluku, yrita uudestaan: ";
            numOfGuesses++;
        }
    }
}

void Game::printGameResult(){
    cout << "arvottu luku oli: " << randomNumber << endl;
    cout << "arvausten maara: "<< numOfGuesses << endl;

}

Game::~Game(){
    cout << "desktruktori:  objecti tyhjennetty pinomuistista." << endl;
}
