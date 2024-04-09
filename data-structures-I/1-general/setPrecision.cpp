#include <iostream>
#include <iomanip>

using namespace std;

int main(){
    float a, b;
    
    cout << "Digite um primeiro numero: ";
    cin >> a;
    cout << "Digite um segundo numero: ";
    cin >> b;
    cout << "O resultado eh: "
         << fixed           // Função que arredonda
         << setprecision(2) // Seta um número de casas
         << a / b;

    /*cin >> a >> b;
    cout << "O resultado eh: " << a/b << endl;*/
    return 0;
}