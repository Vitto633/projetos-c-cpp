#include <iostream>
#include <string>

using namespace std;

//o template cria um tipo de dado novo generico
template<class tipodado>
tipodado funcao(tipodado valor);
int main(void){
    float resultado;
    resultado = funcao(13.41);
    cout << resultado;
}

template<class tipodado>
tipodado funcao(tipodado valor){
    return valor ++;
}