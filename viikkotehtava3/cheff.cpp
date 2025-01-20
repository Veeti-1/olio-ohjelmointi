#include "chef.h"
#include <iostream>
#include <algorithm>

Chef::Chef(string nimi): chefName(nimi){
    cout<<"chef "<< chefName << "konstruktori" << endl;

}
Chef:: ~Chef(){
    cout << "destruktori: kokin nimi: "<< endl;

}
string Chef::getName(){
    cout << "kokin nimi:" << chefName << endl;
    return chefName;
}

int Chef::makeSalad(int ainekset){
  int annokset = ainekset / 5;
    cout << "makeSalad kutsuttu, ainestemaara: " << ainekset << ", aineksilla voi tehda: " << annokset <<"annosta" << endl;
  return annokset;

}
int Chef::makeSoup(int ainekset){
    int annokset = ainekset/3;
    cout <<"makeSoup kutsuttu ainestemaara: " << ainekset << ", aineksilla voi tehda: " << annokset <<"annosta" << endl;

    return annokset;
}




ItalianChef::ItalianChef(string name): Chef(name), flour(0), water(0){
    cout << "italialainen kokki konstruktori" << endl;

}
ItalianChef:: ~ItalianChef(){
    cout << "italianchef desktruktori" << endl;
}

bool ItalianChef::askSecret(string salasana, int jauho, int vesi){
    if(password == salasana){
        cout << "salasana oikein." << endl;
        jauho = flour;
        cout << "jauhot: "<< flour;
        vesi = water;
        cout << "vesi: " << water;
        makepizza();
        return true;
    }
    else{
        return false;
    }
}

int ItalianChef::makepizza(){
    cout << "jauhojen maara: " << flour << endl;
    cout << "veden maara: " << water << endl;
    int pizzat = std::min(flour/5, water/5);
    cout << "pizzoja valmistettiin: " << pizzat << endl;
    return pizzat;
}



