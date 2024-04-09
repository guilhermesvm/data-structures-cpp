#include <iostream>
#include <cstring> //Inclui biblioteca

using namespace std;

int main(){
    string nome;
    
    cout << "Digite o seu nome completo: ";
    getline(cin, nome);

    cout << "Seu nome eh " << nome << "." << endl;
    return 0;
}