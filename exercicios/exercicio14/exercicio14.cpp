#include <iostream>
#include <string>
#include <conio.h>

using namespace std;

struct arvore {
    bool viva;
    int quantidadeFolhas;
    string especie;

    void regar(){
        cout << "Regando a planta";
    }
};

int main(){
    arvore primeiraArvore;

    primeiraArvore.especie = "carvalho";

    primeiraArvore.regar();
    cout << primeiraArvore.especie;
    return 0;
}