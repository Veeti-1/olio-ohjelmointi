#include "chef.h"
#include <iostream>
#include <algorithm>

Chef::Chef(string nimi): chefName(nimi){
    cout<<"chef "<< chefName << " konstruktori" << endl;

}
Chef:: ~Chef(){
    cout << "chef destruktori"<< endl;

}
string Chef::getName(){
    cout << "kokin nimi:" << chefName << endl;
    return chefName;
}

int Chef::makeSalad(int ainekset){
  int annokset = ainekset / 5;
    cout << "salaatin ainestenmaara: " << ainekset << ", aineksilla voi tehda: " << annokset <<" annosta" << endl;
  return annokset;

}
int Chef::makeSoup(int ainekset){
    int annokset = ainekset/3;
    cout <<"keiton ainestenmaara: " << ainekset << ", aineksilla voi tehda: " << annokset <<" annosta" << endl;

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
        cout << "Password ok!" << endl;
        flour = jauho;

        water = vesi;

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



