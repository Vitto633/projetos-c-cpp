#include <iostream>
using namespace std;

void ordenaVetorDecrescente(int vetor[], int tamanhoVetor){
    int auxiliar;
    for (int j = 0; j < tamanhoVetor; ++j) {
        for (int i = 0; i < tamanhoVetor -1; i++) {
            if(vetor[i] > vetor[i + 1]){
                auxiliar = vetor[i + 1];
                vetor[i+ 1] = vetor[i];
                vetor[i] = auxiliar;
            }
        }
    }
    for (int i = tamanhoVetor; i > 0; i--) {
        cout << vetor[i] << endl;
    }
}