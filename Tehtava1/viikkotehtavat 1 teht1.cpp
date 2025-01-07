#include <iostream>
#include <ctime>
using namespace std;

int main()
{
    srand(time(NULL));
    int luku = rand() % 20;
    int arvaaluku;
    while (true) {
        cout << "anna luku: ";
        cin >> arvaaluku;
        if (arvaaluku == luku) {
            cout << "Arvasit oikein!";
            break;
        }
        else if (arvaaluku > luku) {
            cout << "annettu luku on suurempi kuin arvottuluku" << endl;
        }
        else {
            cout << "annettu luku on pienempi kuin arvottuluku" << endl;
        }
    }
    return 0;
}
