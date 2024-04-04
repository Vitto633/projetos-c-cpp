#include <iostream>
#include "exercicio01.h"
#include "exercicio02.h"
#include "exercicio03.h"
#include "exercicio04.h"
#include "exercicio05.h"
#include "exercicio06.h"
#include "exercicio07.h"
#include "exercicio08.h"
#include "exercicio09.h"
#include "exercicio10.h"
#include "exercicio11.h"
#include "exercicio12.h"
#include "exercicio13.h"
#include <string>

using namespace std;

int main(void){


    int vetor[5];
    vetor[0] = 45;
    vetor[1] = -89;
    vetor[2] = 32;
    vetor[3] = -12;
    vetor[4] = 33;

    int vetor2[5];
    vetor2[0] = 41;
    vetor2[1] = 72;
    vetor2[2] = 39;
    vetor2[3] = 4;
    vetor2[4] = 35;

    int vetor3[5];
    vetor3[0] = 0;
    vetor3[1] = 0;
    vetor3[2] = 0;
    vetor3[3] = 0;
    vetor3[4] = 0;

    int tamanhoVetor = sizeof(vetor2) / sizeof(vetor2[0]);
    ordenaVetorDecrescente(vetor2, tamanhoVetor);

}