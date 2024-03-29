#include <iostream>

using namespace std;

void ladosPoligono(){
    int lados, comprimento, resultado;
    bool isPoligono;
    cout << "Escreva a quantidade de lados do poligono: ";
    cin >> lados;

    cout << "Escreva o comprimento de cada lado: ";
    cin >> comprimento;

    switch (lados) {
        case 1 || 2:
            cout << "Nao eh um poligono.";
            isPoligono = false;
            break;
        case 3:
            cout << "Triangulo.";
            isPoligono = true;
            break;
        case 4:
            cout << "Quadrado.";
            isPoligono = true;
            break;
        case 5:
            cout << "Pentagono.";
            isPoligono = true;
            break;
        default:
            cout << "Poligono desconhecido.";
            isPoligono = false;
            break;
    }
    if (isPoligono) {
        resultado = comprimento *lados;
        cout << endl << "O comprimento eh de: " << resultado << "cm";
    }

}