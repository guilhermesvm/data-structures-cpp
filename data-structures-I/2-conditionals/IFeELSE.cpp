//Exemplo de IF/ELSE

#include <iostream>
using namespace std;

int main() {
    int n;
    
    cout << "Digite um numero inteiro: ";
    cin >> n;

    if (n < 0){
        cout << "Numero negativo.\n"; 
    } else if (n == 0){
        cout << "Numero igual a zero.\n";
    } else{
        cout << "Numero maior que zero.\n";
    }

    return 0;
}