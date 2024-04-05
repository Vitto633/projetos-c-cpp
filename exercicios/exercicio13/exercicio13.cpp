#include <iostream>
#include <string>
#include <conio.h>


using namespace std;

struct cliente{
    int id;
    string nome;
    int idade;
};

int main(){
    cliente clientes[10];
    clientes[0] = {1, "vitor", 16};

    cout << "Id do cliente: "<< clientes[0].id << endl;
    cout << "Nome do cliente:" << clientes[0].nome << endl;
    cout << "Idade do cliente: " << clientes[0].idade << endl << endl;

    clientes[1] = { 2, "daniel", 16};
    cout << "Id do cliente: " << clientes[1].id << endl;
    cout << "Nome do cliente: " << clientes[1].nome << endl;
    cout << "Idade do cliente: " << clientes[1].idade << endl << endl;

    cout << "Digite o id do cliente: ";
    cin >> clientes[2].id;

    cout << endl << "Digite o nome do cliente: ";
    cin >> clientes[2].nome;

    cout  << endl << "Digite a idade do cliente";
    cin >> clientes[2].idade;

    cout << "O nome do cliente eh:" << clientes[2].nome << endl;
    cout << "O id do cliente eh: " << clientes[2].id << endl;
    cout << "a idade do cliente eh: " << clientes[2].idade << endl;
}