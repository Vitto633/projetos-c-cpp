#include <iostream>
#include <conio.h>
using namespace std;

int main(void){
    int matriz[10] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10};

    int tamanho = sizeof(matriz) / sizeof(matriz[0]); // como definir o tamanho do array
    for (int i = 0; i < tamanho ; ++i) {
        cout << matriz[i] << endl;
    }

    return 0;
}