#include <iostream>
#include <ctime>
using namespace std;

void verificaVoto(){
    int anoNascimento, anoAtual, idade;
    time_t tempoAtual = time(nullptr);
    tm *tempoLocal = localtime(&tempoAtual);
    anoAtual = tempoLocal->tm_year + 1900;

    cout << "Digite o seu ano de nascimento: ";
    cin >> anoNascimento;

    idade = anoAtual - anoNascimento;

    if (idade < 16) {
        cout << "Nao pode votar.";
    } else if (idade < 18) {
        cout << "Pode votar porem eh opcional.";
    } else if (idade <= 70) {
        cout << "Voto obrigatorio.";
    } else {
        cout << "Pode votar porem eh opcional.";
    }
}