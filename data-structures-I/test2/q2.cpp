#include <iostream>
#include <queue>
using namespace std;

int main(){
    int n,soma;
    queue<int> fila;

    while(true){
        cin >> n;
        if(!n)
            break;
        if(fila.empty() || n > fila.front())
            fila.push(n);
        else if(n <= fila.front()){
            soma = n + fila.front();
            fila.pop();
            fila.push(soma);
        }
    }
        cout << "Fim com tamanho da fila = " << fila.size() << endl;

    return 0;
}