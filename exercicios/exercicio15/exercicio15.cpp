#include <iostream>
#include <string>
using namespace std;

struct Usuario{

    string nome;
    int idade;
    float id;
};
int main(void){
    Usuario primeiroUsuario;
    cout << primeiroUsuario.nome;
}