//Exemplo de uso de ?:
//Escreva um programa que pergunta o salário de uma pessoa. Se for maior que 3 mil, tem que pagar 20% de imposto. Se for menor, tem que pagar 15%. Exiba o valor do imposto que a pessoa tem que pagar. Imposto é roubo ?

#include <iostream>
using namespace std;

int main(){
    float sal, tax;
    
    cout << "Seu salário: ";
    cin >> sal;

    //Comando ternário () nao eh obrigatório
    tax = sal>3000 ? 0.20 : 0.15;
    cout << "Imposto devido: R$ " << tax*sal <<endl;

    return 0;
}