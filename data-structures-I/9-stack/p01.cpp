//Exemplo 1 de Pilha
#include <iostream>
#include <stack> //https://en.cppreference.com/w/cpp/container/stack

using namespace std;

int main(){

    stack<string> pilha; // Cria uma pilha de String

    cout << "Tamanho da pilha " << pilha.size() << endl;

    pilha.push("A");  //Adiciono valor na minha pilha
    pilha.push("B");
    pilha.push("C");
    
    do{
        cout << "Tamanho da pilha " << pilha.size() << endl;
        cout << "Valor do topo: " << pilha.top() << endl; // Recupero o topo da pilha
        pilha.pop();

    }while(!pilha.empty());  //pilha.size() > 0



    return 0;
}