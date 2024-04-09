// cout = saída
// cin = entrada

#include <iostream>

using namespace std; // Declara como estático

int main(){
    int idade;
    float altura;

    cout << "Digite a sua idade: "; // Exibe para o usuário digitar um valor
    cin >> idade;                   // Recebe o valor declarado
    cout << "Digite a sua altura: ";
    cin >> altura;

    cout << "Voce tem " << idade << " anos "
         << "e " << altura << " metros." << endl;

    return 0;
}