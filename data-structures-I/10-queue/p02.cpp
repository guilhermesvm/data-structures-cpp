//Implementação de fila com struct

#include <iostream>
#include <queue>

using namespace std;

struct pessoa{
    string nome;
    string email;
};

int main(){
    queue<pessoa> fila;
    pessoa aux;

    while(true){
        cout << "Digite seu nome ou FIM para terminar e mostrar a lista: ";
        getline(cin, aux.nome);

        if (aux.nome == "FIM"){
            break;
        }

        cout << "E-mail: ";
        getline(cin, aux.email);
        cout << endl;

        fila.push(aux);
    }

    while (fila.size() > 0){
        cout << fila.front().nome << " " << fila.front().email << endl; 
        fila.pop();
    }

    return 0;
}