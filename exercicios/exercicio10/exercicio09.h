#include <iostream>
using namespace std;

void ordenaVetor(int vetor[]) {
    int auxiliar;

    for (int i = 0; i < 4; ++i) {
        for (int j = 0; j < 4 - i; ++j) {
            if (vetor[j] > vetor[j + 1]) {
                auxiliar = vetor[j];
                vetor[j] = vetor[j + 1];
                vetor[j + 1] = auxiliar;
            }
        }
    }
    for (int i = 0; i < 5; ++i) {
        cout << vetor[i] << endl;
    }
}
