// Soma dos valores de um vetor de forma trivial (sequencial)

#include <iostream>

using namespace std;

int main(){
    int N = 10;
    int vet[N] = {1,2,3,4,5,6,7,8,9,10};
    int soma = 0;
    
    for(int i = 0; i < N; i++){
        soma += vet[i];
    }

    cout << "Total: " << soma << endl;
    return 0;
}