#include <iostream>
using namespace std;

void ordemCrescente(){
    int valor[3];
    for (int c = 0; c < 3; c++) {
        cout << "Digite o valor do vetor " << c << ": ";
        cin >> valor[c];
    }
    if (valor[0] < valor[1] && valor[1] < valor[2]) {
        cout << valor[0] << " " << valor[1] << " " << valor[2];
    }else    if (valor[0] < valor[2] && valor[2] < valor[1]) {
        cout << valor[0] << " " << valor[2] << " " << valor[1];
    }else    if (valor[1] < valor[0] && valor[0] < valor[2]) {
        cout << valor[1] << " " << valor[0] << " " << valor[2];
    }else    if (valor[1] < valor[2] && valor[2] < valor[0]) {
        cout << valor[1] << " " << valor[2] << " " << valor[0];
    }else    if (valor[2] < valor[0] && valor[0] < valor[1]) {
        cout << valor[2] << " " << valor[0] << " " << valor[1];
    }else    if (valor[2] < valor[1] && valor[1] < valor[0]) {
        cout << valor[2] << " " << valor[1] << " " << valor[0];
    }
}