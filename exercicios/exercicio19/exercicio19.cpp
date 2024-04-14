#include <iostream>
using namespace std;

//nessa parte eu escrevo o prototipo da função
int somaDoisNumeros(int valor1, int valor2);

void tabuada(int valor);

int main(void){
    int resultado = somaDoisNumeros(10, 30);
    cout << resultado << endl;
    tabuada(10);
    return 0;
}

// aqui eu implemento a função
int somaDoisNumeros(int valor1, int valor2){
    return valor1 + valor2;
}

void tabuada(int valor){
    int resultado;
    cout << endl<< endl<< " TABUADA DO " << valor << endl << endl;
    for (int i = 0; i <= 10; i++) {
        resultado = valor * i;
        cout << "   "<< valor << "x" << i << " = " << resultado << endl;
    }
}