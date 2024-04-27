#include <iostream>
using namespace std;

//trabalhando com ponteiros

void mostraValor(int *);

int main(void){
    int numero = 10;

    mostraValor(&numero);
    cout << numero;
}

void mostraValor(int *valor){
    *valor = *valor + 1;
    cout << "O valor eh: " << *valor << endl;
}