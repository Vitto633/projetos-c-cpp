#include <iostream>
using namespace std;

void maiorValor(){
    int valor1, valor2, resultado;

    cout << "Digite o primeiro valor: ";
    cin >> valor1;
    cout << endl << "Digite o segundo valor: ";
    cin >> valor2;
    if (valor1 > valor2) {
        cout << "O maior valor eh: " << valor1;
    } else {
        cout << "O maior valor eh: " << valor2;
    }
}