//Lê um número inteiro e valida se o número é 10 OU 20.

#include <iostream>
using namespace std;

int main(){
    int n;
    
    cout << "Escolha um numero entre 0 e 20 e tente acertar qual estou pensando: ";
    cin >> n;

    if(n == 10 || n == 20){
        cout << "Acertou." << endl;
    }else{
        cout << "Numero incorreto." << endl;
    }
    return 0;
}