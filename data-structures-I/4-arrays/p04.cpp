//Definição estática dos valores do vetor

#include <iostream>
#include <iomanip>

using namespace std;

int main(){
    float vet[]{10.042, 3.0131, 5.03312, 7.74545, 15.3466};
    float soma = 0;

    for(int i = 0; i <6; i++){
        soma = soma + vet[i];
    //  soma += vet[i];
    }

    cout << fixed << setprecision(1) << soma << endl;

    return 0;

}