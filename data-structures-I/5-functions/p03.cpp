#include <iostream>
#include "funcoes/funcoes.cpp"
using namespace std;

int main(){
    int sum = somar(10, 20);
    int sub = subtracao(20, 10);
    int mult = multiplicacao(3, 5);
    int div = divisao(12, 3);

    cout << "Soma:  " << sum << endl;
    cout << "Subtracao: " << sub << endl;
    cout << "Multiplicacao: " << mult << endl;
    cout << "Divisao: " << div << endl;
    return 0;
}