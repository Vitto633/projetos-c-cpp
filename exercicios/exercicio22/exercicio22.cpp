#include <iostream>
using namespace std;

//função recursiva é uma função que chama ela mesma

int fatorial(int valor);

int main(void){
    cout << fatorial(3);
}

int fatorial(int valor){
    if (valor < 2) {
        return valor;
    }
    return fatorial(valor - 1)*valor;
}