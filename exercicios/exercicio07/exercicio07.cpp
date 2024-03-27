#include <iostream>
using namespace std;

int main(){
    int valor1, valor2, temporario;
    cout << "Digite o primeiro valor: ";
    cin >> valor1;
    cout << "Digite o segundo valor: ";
    cin >> valor2;

    cout << "Os valores na ordem normal sao " << valor1 << " e " << valor2 << endl;

    temporario = valor1;
    valor1 = valor2;
    valor2 = temporario;

    cout << "Os valores invertidos sao " << valor1 << " e " << valor2;

    return 0;
}