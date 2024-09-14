#include <iostream>
#include <iomanip>

using namespace std;

int main(){
    double notas[]{100.00, 50.00, 20.00, 10.00, 5.00, 2.00};
    double moedas[]{1.00, 0.50, 0.25, 0.10, 0.05, 0.01};
    double valor;

    cout << "Quanto te devo? " << endl;
    cin >> valor;

    //Laço de repetição p/ notas
    for(int i=0; i<6; i++){
        int quantidade_notas = valor/notas[i];
        cout << fixed << setprecision(2) << quantidade_notas << " nota(s) de R$ " << notas[i] << endl;
        valor = valor - (quantidade_notas * notas[i]);
    }

    cout << endl;

    //Laço de repetição p/ moedas
    for(int i=0; i<6; i++){
        int quantidade_moedas = valor/moedas[i];
        cout << fixed << setprecision(2) << quantidade_moedas << " nota(s) de R$ " << moedas[i] << endl;
        valor = valor - (quantidade_moedas * moedas[i]);
    }
    return 0;
}