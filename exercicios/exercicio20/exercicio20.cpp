#include <iostream>
#include <stdarg.h>

using namespace std;

int soma(const int contador, ...);

int main(void){
    cout << "O valor da soma eh: " << soma(3, 15, 30, 40);
    return 0;
}

int soma(const int contador, ...){
    va_list lista;
    int total = 0;

    va_start(lista, contador);
    for (int i = 0; i < contador; ++i) {
        total += va_arg(lista, int);
    }
    va_end(lista);
    return total;

}