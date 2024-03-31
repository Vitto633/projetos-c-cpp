#include <iostream>
#include <string>

string verificaVetor(int vetor[], int valor) {
    int contador = 0;
    string resultado;
    for (int i = 0; i < 5; i++) {
        if (vetor[i] == valor) {
            contador = contador +1;
        }
    }
    if (contador == 1) {
        resultado = "true";
    }
    else{
        resultado = "false";
    }
    return resultado;
}