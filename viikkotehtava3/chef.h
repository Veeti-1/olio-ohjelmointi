#ifndef CHEF_H
#define CHEF_H
#include <string>
using namespace std;
class Chef{
public:
    virtual ~Chef();
    Chef(string nimi);
    string getName();
    int makeSalad(int ainekset);
    int makeSoup(int ainekset);
protected:
    string chefName;
private:
};
class ItalianChef : public Chef{
public:
    ItalianChef(string);
    ~ItalianChef();
    bool askSecret(string salasana, int flour ,int water);

private:
    int makepizza();
    int flour;
    int water;
    string password = "pizza";
protected:

};

#endif // CHEF_H
