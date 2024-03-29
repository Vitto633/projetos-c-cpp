#include <iostream>
using namespace std;

void verificaSenha(){
    int senha = 1234, valor;

    cout << "Digite a senha: ";
    cin >> valor;

    if (valor == senha) {
        cout << "ACESSO PERMITIDO";
    } else {
        cout << "ACESSO NEGADO";
    }

}