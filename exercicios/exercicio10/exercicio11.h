#include <iostream>
using namespace std;

void inverteVetor(int vetor1[], int vetor2[]) {
    int tamanho = 5;
    for (int i = 0; i < tamanho / 2; ++i) {
        int auxiliar = vetor1[i];
        vetor1[i] = vetor1[tamanho - i - 1];
        vetor1[tamanho - i - 1] = auxiliar;
    }
    vetor2 = vetor1;
    for (int i = 0; i < tamanho; ++i) {
        cout << vetor2[i] << " ";
    }
    cout << endl;
}

