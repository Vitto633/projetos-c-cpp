#include <iostream>

using namespace std;

void copiaVetor(int vetor1[], int vetor2[]){
    vetor2 = vetor1;
    for (int i = 0; i < 5; ++i) {
        cout << "vetor1 = " << vetor1[i] << endl;
    }
    cout << endl;
    for (int i = 0; i < 5; ++i) {
        cout << "vetor2 = " << vetor2[i] << endl;
    }
}