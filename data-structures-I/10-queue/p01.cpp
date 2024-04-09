//Exemplo Fila.
// FIFO - First IN First OUT
// Primeiro a entrar é o primeiro a sair

#include <iostream>
#include <queue>

using namespace std;

int main(){
    queue<int> fila;

    fila.push(100); //Adiciona o valor 100 na fila
    fila.push(200);
    fila.push(300);

    while(!fila.empty()){ //(fila.size > 0)
        cout << "Size: " << fila.size() << endl; //Tamanho
        cout << "Front: " << fila.front() << endl; //Primeiro elemento
        cout << "Back: " << fila.back() << endl; //Ultimo elemento
        cout << endl;
        fila.pop(); //Remove o primeiro elemento

    }


    return 0;
}