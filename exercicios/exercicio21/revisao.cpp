#include <iostream>
#include <stdarg.h>

using namespace std;

int soma(const int quant, ...);

int main(void){
    int quant;

    cout << "escolha a quantidade de valores a serem somados: ";
    cin >> quant;

    int array[quant];

    for (int i = 0; i < quant; ++i) {
        cout  << "Digite o valor " << i << ": " << endl;
        cin >> array[i];
    }
    int res = soma(quant, array[3], array[4], array[5], array[6], array[7], array[8], array[9]);
    cout << res;
    return 0;
}

int soma(const int quant, ...){
    va_list lista;
    int resultado = 0;

    va_start(lista, quant);
    for (int i = 0; i < quant; i++) {
        resultado = resultado + va_arg(lista, int);
    }
    va_end(lista);
    return resultado;
}