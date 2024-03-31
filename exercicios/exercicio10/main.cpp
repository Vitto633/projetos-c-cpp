#include <iostream>
#include "exercicio01.h"
using namespace std;

int main(void){
    int vetor[5];
    vetor[0] = 45;
    vetor[1] = -89;
    vetor[2] = 32;
    vetor[3] = -12;
    vetor[4] = 33;

    cout << primeiroElemento(vetor);
}