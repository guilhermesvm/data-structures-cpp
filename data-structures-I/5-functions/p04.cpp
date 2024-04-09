//Exemplo de fatorial com assert
#include <iostream>
#include "funcoes/funcoes.cpp"
#include <cassert>
using namespace std;

int main(){
    
    cout << "Fatorial e correto? ";
    assert(fatorial(0) == 1);
    assert(fatorial(1) == 1);
    assert(fatorial(2) == 2);
    assert(fatorial(3) == 6);
    assert(fatorial(4) == 24);
    assert(fatorial(5) == 120);
    assert(fatorial(6) == 720);
    assert(fatorial(7) == 5040);
    assert(fatorial(8) == 40320);
    assert(fatorial(9) == 362880);
    cout << "Passed.\n";

    cout << "Numero e primo? ";
    assert(numero_primo(2) == true);
    assert(numero_primo(3) == true);
    assert(numero_primo(4) == false);
    assert(numero_primo(5) == true);
    assert(numero_primo(6) == false);
    assert(numero_primo(7) == true);
    assert(numero_primo(8) == false);
    assert(numero_primo(9) == false);
    assert(numero_primo(10) == false);

    cout << "Passed.\n";
    return 0;
}