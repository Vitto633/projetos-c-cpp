#include <iostream>
using namespace std;

void imparesVetor(int vetor[]){
    for (int i = 0; i < 5; i++) {
        if (vetor[i] > 1) {
            cout << vetor[i] << endl;
        }
    }
}