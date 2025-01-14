#include <iostream>
#include <ctime>
using namespace std;
int arvaukset = 0;
int game(int maxnum);
int main()
{
    int maxnum;
    cout << "anna korkein etsittavaluku:";
    cin >> maxnum;
    game(maxnum);
    cout << "arvausten maara:" << arvaukset;
    return 0;
}
int game(int maxnum) {
    srand(time(NULL));
    int luku = (rand() % maxnum )+1;
    int arvaaluku;
    while (true) {
        cout << "anna luku: ";
        cin >> arvaaluku;
        if (arvaaluku == luku) {
            cout << "Arvasit oikein!" << endl;
            arvaukset++;
            return arvaukset;
            break;
        }
        else if (arvaaluku > luku) {
            cout << "annettu luku on suurempi kuin arvottuluku" << endl;
            arvaukset++;
        }
        else {
            cout << "annettu luku on pienempi kuin arvottuluku" << endl;
            arvaukset++;
        }
    }
}
