#include <iostream>

using namespace std;

void verificaAngulo(){
    int angulos[3], angulosRetos = 0, somaAngulos;
    bool isTriangulo;

    for (int i = 0; i < 3; i++) {
        cout << "Digite o " << i << "angulo do triangulo: ";
        cin >> angulos[i];
    }
    somaAngulos = angulos[0] + angulos[1] + angulos[2];
    if (somaAngulos == 180) {
        isTriangulo = true;
    } else {
        isTriangulo = false;
    }
    if (isTriangulo) {
        for (int c = 0; c < 3; c++) {
            if (angulos[c] == 90) {
                angulosRetos +=1;
            }
        }
        if (angulosRetos == 1) {
            cout << "triangulo retangulo.";
        } else {
            for (int x = 0; x < 3; x++) {
                if (angulos[x] >90) {
                    cout << "triangulo obtusangulo.";
                    break;
                } else {
                    cout << "triangulo acutangulo.";
                    break;
                }
            }
        }
    } else {
        cout << "Triangulo invalido.";
    }

}