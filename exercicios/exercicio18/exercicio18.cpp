#include <iostream>
using namespace std;

//ponteiros indicam ao endereço da memoria de uma variavel que eu escolher e possibilita o armazenamento em uma memoria que antes não era acessivel (HEAP)

// o programa normalmente só tem acesso a memoria (STACK) porem o ponteiro possibilita com que você armazene o valor na memoria (HEAP)

int main(void){
    int valor = 10;
    int *ponteiroValor;

    ponteiroValor = &valor;

    cout << "O endereco de memoria da variavel valor eh: " << &valor << endl;
    cout << "O valor da variavel eh:" << valor << endl << endl;

    cout << "O endereco de memoria que o ponteiro esta apontado eh: " << ponteiroValor << endl;
    cout << "O valor contido no ponteiro eh: " << *ponteiroValor;

}