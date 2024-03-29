#include <iostream>

using namespace std;

void pesoIdeal(){
    int sexo;
    float pesoIdeal, altura;

    cout << "Digite o seu sexo" << endl << "[1] - masculino" << endl << "[2] - feminino" << endl << ": ";
    cin >> sexo;

    cout << "Digite a sua altura: ";
    cin >> altura;
    switch (sexo) {
        case 1:
            pesoIdeal = 72.7 *altura - 58;
            break;
        case 2:
            pesoIdeal = 62.1 *altura - 44.7;
            break;
        default:
            cout << "Sexo inválido.";
            break;
    }
    cout << "O seu peso ideal seria: " << pesoIdeal;
}