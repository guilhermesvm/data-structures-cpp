//Soma do vetor usando divisão e conquista

#include <iostream>
#include "vetor.cpp"

using namespace std;

int somaDivConq(const int vet[], int inicio, int fim){
    if(inicio==fim) return vet[inicio];

    int meio = (inicio + fim) / 2;

    int somaEsquerda = somaDivConq(vet, inicio, meio);
    int somaDireita = somaDivConq(vet, meio+1, fim);
    
    return somaEsquerda + somaDireita;
}


int soma(const int vet[], int N){
    return somaDivConq(vet, 0, N-1);
}

int main(){
    int N = 100000;
    cout << "Total: " << soma(vet, N) << endl;
    return 0;
}