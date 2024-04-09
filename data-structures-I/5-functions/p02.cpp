#include <iostream>
using namespace std;
    int teste = 10; //variável global

//Passagem de parâmetro por valor: "float a" -- Cria uma cópia da variável
//Passagem de parâmetro por referência: "float &a" -- tudo que acontece com 'a' aconterá com 'x'
    // referenciar a variavel passada na chamada
void somar(float &a, float b){
    a += b; //a = a + b
    cout << "Na funcao:  " << a << endl;
}

int main(){
    float x = 10.5, y = 0.3;
    somar(x, y);
    cout << "Na main: " << x << endl;
    return 0;
}