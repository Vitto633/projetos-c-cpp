#include <iostream>
using namespace std;

int somaVetor(int vetor[]){
    int soma = 0;
    for (int i = 0; i < 5; i++) {
        soma = vetor[i] + soma;
    }
    return soma;
}