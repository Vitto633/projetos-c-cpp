#include <iostream>
using namespace std;

//antes da função main eu declaro a funcao que eu quero com o ponto e virgula
int funcao(int a);

int main(void){
    int valor, resultado;
    valor = 10;
    resultado = funcao(valor);
    cout << "O valor eh " << resultado;
}

//depois do declaramento aqui eu implemento o que a função faz
int funcao(int a){
    return a+1;
}

