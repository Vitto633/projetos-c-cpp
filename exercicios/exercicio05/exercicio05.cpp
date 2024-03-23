#include <stdio.h>
#include <conio.h>

int main(void){
    char *nome;

    printf("Qual eh o seu nome? ");
    gets(nome);

    printf("Bem vindo %s", nome);
    return 0;
}