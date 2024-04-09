//Alocamos um espaço de memória aonde o ponteiro irá apontar
 
#include <iostream>
using namespace std;

int main(){

    int *p = new int; //Declara o ponteiroe aponta para um endereço na mem
    *p = 0;
    cout << *p << endl; // Essa é a unica forma de exibir o valor daquele endereço
    delete p;

    int a = 5;
    p = &a;

    return 0;
}