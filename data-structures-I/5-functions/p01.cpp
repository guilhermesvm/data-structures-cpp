//Primeiro exemplo de funções

#include <iostream>
using namespace std;

void imprimir(string text){
    cout << text << endl;
}

int somar(int x, int y){
    int t = x + y;
    return t;
}

int main(){
    imprimir("Primeira funcaoo");
    int x = 10, y = 2;
    int s;
    int t = 500; //Exemplo de variavel local

    s = somar(x, y);
    cout << "Soma: " << s << endl;

    // Mostra que a variavel 't' da main não é a mesma da função 'somar'
    cout << "Valor do 't': " << t << endl;
    return 0;
    
}
