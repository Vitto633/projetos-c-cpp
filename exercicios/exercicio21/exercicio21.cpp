#include <iostream>
#include <stdarg.h>
using namespace std;
int somaNumeros(const int contador, ...);

int main(void){
    cout << "O resultado eh " << somaNumeros(3, 10, 10, 20);
    return 0;
}

int somaNumeros(const int contador, ...){
    va_list listaNumeros;
    int soma = 0;

    va_start(listaNumeros, contador);
    for (int i = 0; i < contador; ++i) {
        soma = soma + va_arg(listaNumeros, int);
    }
    va_end(listaNumeros);
    return soma;
}