#include <iostream>
#include <string>
using namespace std;

bool ehPrimo(int valor){
    if (valor <= 1) {
        return false;
    }
    for (int i = 2; i * i <= valor; i++) {
        if (valor % i == 0) {
            return false;
        }
    }
    return true;
}

int main(){
    bool isRunning = true;
    int opcao;
    int valor;
    while (isRunning == true) {
        cout << "[0] para sair" << endl;
        cout << "[1] numeros crescentes de 0 a 9" << endl;
        cout << "[2] par ou impar" << endl;
        cout << "[3] numeros primos ate 50" << endl;
        cout << "[4] maior de idade" << endl;
        cout << "[5] media ponderada" << endl << endl;

        cout << "Escolha uma opcao: ";
        cin >> opcao;

        switch (opcao) {
            case 0:
                isRunning = false;
                break;
            case 1:
                for (int i = 0; i < 10; i++) {
                    cout << i << endl;
                }
                system("pause");
                break;
            case 2:
                cout << "Digite o valor: ";
                cin >> valor;
                if (valor % 2 == 0) {
                    cout << "par.";
                } else {
                    cout << "impar.";
                }
                system("pause");
                break;
            case 3:
                for (int j = 0; j < 50; ++j) {
                    if(ehPrimo(j)){
                        cout << j << " ";
                    }
                }
                cout << endl;
                system("pause");
                break;
            case 5:
                cout << "cansei" << endl;
                system("pause");
                break;
            case 4:
                int idade;
                int anoSistema = 2024;
                int anoNascimento;
                cout << "Digite o seu ano de nascimento: ";
                cin >> anoNascimento;
                idade = anoSistema - anoNascimento;

                if (idade < 16) {
                    cout << "não pode votar" << endl;
                } else if (idade < 18) {
                    cout << "voto opcional" << endl;
                } else if (idade <= 70) {
                    cout << "voto obrigatorio" << endl;
                } else {
                    cout << "voto opcional" << endl;
                }
                system("pause");
                break;

        }
    }
    cout << "Programa encerrado.";
}
