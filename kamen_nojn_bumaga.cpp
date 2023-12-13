#include <iostream> 
using namespace std;

int main()
{
    srand(time(NULL));
    int komp, player;
    komp = 0;
    player = 0;
    int kamen, noz, bumaga;
    kamen = 1;
    noz = 2;
    bumaga = 3;
    int b;
    int a;
    while (komp <= 5 && player <= 5) {
        srand(time(NULL));
        cout << " input number from 1 to 3, 1-kamen, 2- noz, 3-bumaga\n";
        cin >> a;
        b = rand() % 4;
        if (a == 1 && b == 2) {
            ++player;
            cout << komp << ':' << player << endl;
        }
        else if (a == 1 && b == 1) {
            cout << "draw" << endl;
            cout << komp << ':' << player << endl;
        }
        else if (a == 1 && b == 3) {
            ++komp;
            cout << komp << ':' << player << endl;
        }
        else if (a == 2 && b == 1) {
            ++komp;
            cout << komp << ':' << player << endl;
        }
        else if (a == 2 && b == 2) {
            cout << "draw" << endl;
            cout << komp << ':' << player << endl;
        }
        else if (a == 2 && b == 3) {
            ++player;
            cout << komp << ':' << player << endl;
        }
        else if (a == 3 && b == 1) {
            ++player;
            cout << komp << ':' << player << endl;
        }
        else if (a == 3 && b == 2) {
            ++komp;
            cout << komp << ':' << player << endl;
        }
        else if (a == 3 && b == 3) {
            cout << "draw" << endl;
            cout << komp << ':' << player << endl;
        }
    }