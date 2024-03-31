#include <iostream>
#include <vector>
using namespace std;

void negativoVetor(int vetor[]){
    for(int i = 0; i < 5; i++){
        if(vetor[i]< 0){
            cout << vetor[i];
        }
    }
}