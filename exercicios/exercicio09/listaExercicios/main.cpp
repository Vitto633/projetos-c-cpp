#include <iostream>
#include "exercicio01.h"
#include "exercicio02.h"
#include "exercicio03.h"
#include "exercicio04.h"
#include "exercicio05.h"
#include "exercicio06.h"
#include "exercicio07.h"
#include "exercicio09.h"
#include "exercicio10.h"
#include "exercicio11.h"
using namespace std;

int main(void){
    bool isRunning = true;
    int opcao;
    while (isRunning) {
        cout << "=== Menu de Exercícios ===" << endl;
        cout << "1. Exercicio 1" << endl;
        cout << "2. Exercicio 2" << endl;
        cout << "3. Exercicio 3" << endl;
        cout << "4. Exercicio 4" << endl;
        cout << "5. Exercicio 5" << endl;
        cout << "6. Exercicio 6" << endl;
        cout << "7. Exercicio 7" << endl;
        cout << "8. Exercicio 8" << endl;
        cout << "9. Exercicio 9" << endl;
        cout << "10. Exercicio 10" << endl;
        cout << "11. Exercicio 11" << endl;
        cout << "0. Sair" << endl << endl;

        cout << "Escolha uma opcao: ";
        cin >> opcao;

        switch (opcao) {
            case 0:
                isRunning = false;
                break;
            case 1:
                maiorValor();
                system("pause");
                break;
            case 2:
                verificaVoto();
                system("pause");
                break;
            case 3:
                verificaSenha();
                system("pause");
                break;
            case 4:
                macasCompradas();
                system("pause");
                break;
            case 5:
                ordemCrescente();
                system("pause");
                break;
            case 6:
                pesoIdeal();
                system("pause");
                break;
            case 7:
                ladosPoligono();
                system("pause");
                break;
            case 9:
                maiorValor();
                system("pause");
                break;
            case 10:
                medidasTriangulo();
                system("pause");
                break;
            case 11:
                verificaAngulo();
                system("pause");
                break;
            default:
                cout << "Exercicio invalido, favor digitar exercicio valido.";
                system("pause");
        }
    }
}