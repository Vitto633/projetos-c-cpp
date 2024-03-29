#include <iostream>

using namespace std;

void macasCompradas(){
    float maca = 0.30, total;
    int quantidade;
    cout << "Digite a quantidade de macas: ";
    cin >> quantidade;

    if (quantidade >= 12) {
        maca = 0.25;
    }
    total = maca * quantidade;

    cout << "O valor a pagar eh: " << total;
}