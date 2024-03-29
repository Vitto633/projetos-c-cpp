#include <iostream>
#include <string>
using namespace std;

void medidasTriangulo(){
    int lados[3];
    string tipoTriangulo;
    for (int i = 0; i < 3; i++) {
        cout << "Digite o " << i << " lado do triangulo: ";
        cin >> lados[i];
    }
    if (lados[0] == lados[1] && lados[1] == lados[2]) {
        tipoTriangulo = "Equilatero";
    } else if (lados[0] != lados[1] && lados[1] != lados[2] && lados[0] != lados[2]) {
        tipoTriangulo = "Escaleno";
    } else {
        tipoTriangulo = "Isosceles";
    }

    cout << "O tipo do triangulo eh:  " << tipoTriangulo << "!" ;
}



//else if(lados[0] == lados[1] && lados[0] !=lados[2] || lados[1] == lados[2] && lados)