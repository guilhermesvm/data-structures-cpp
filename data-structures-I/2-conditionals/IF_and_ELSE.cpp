//Lê um número inteiro e valida se o número é > que 10 E < que 20

#include <iostream>
using namespace std;

int main(){
    int n;
    
    cout << "Informe um numero inteiro: ";
    cin >> n;

    if(n > 10  && n < 20){
        cout << "Ok." << endl;
    }else{
        cout << "Numero nao esta dentro dos padroes!" << endl;
    }
    return 0;
}