#include <iostream>
#include <string>

using namespace std;

int main(){
    int valor;
    string nome;

    cout << "Digite o seu nome: ";
    cin >> nome;
    cout << "Digite um valor: ";
    cin >> valor;

    cout << "Ola " << nome << " voce digitou " << valor;
    return 0;
}