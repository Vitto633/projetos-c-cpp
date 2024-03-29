#include <iostream>
#include <algorithm>
using namespace std;

void maiorValorVetor(){
    int valor1, valor2, valor3, maior;

    cout << "Digite o primeiro valor: ";
    cin >> valor1;

    cout << "Digite o segundo valor: ";
    cin >> valor2;

    cout << "Digite o terceiro valor: ";
    cin >> valor3;

    maior = max(valor1, max(valor2, valor3));
    cout << "O maior valor eh: " << maior << endl;
}

