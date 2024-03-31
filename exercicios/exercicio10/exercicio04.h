#include <iostream>

float mediaVetor(int vetor[]){
    int soma = 0;
    float media;
    for (int i = 0; i < 5; i++) {
        soma = soma + vetor[i];
    }
    media = (float) soma/5;
    return media;
}