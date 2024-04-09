// Exemplo de Operador Ternário

#include <iostream>
using namespace std;

int main(){
     double a, b;
     
     cout << "Digite dois valores: ";
     cin >> a >> b;

     // Declaro  a variavel no momento que ela receberá o valor
    //Condição ? valor se for verdadeiro : valor se for falso
     double m = (a > b ? a : b);
     cout << "Eh maior. " << m << endl;
     return 0;
}