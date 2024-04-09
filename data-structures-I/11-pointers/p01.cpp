#include <iostream>

using namespace std;

int main(){
    int a = 10; // Variável int de nome a
    int *p; // p é um ponteiro para int

    p = &a; // p recebeu o endereço de a

    cout << p << endl; //Endereço de memória
    cout << *p << endl; //O valor apontado por p

    a = 20;
    cout << *p << endl; //O valor apontado por p

    int b = *p/2;
    cout << b << endl;



    return 0;
}