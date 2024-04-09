//Exemplo definindo o tamanho dinamicamente

#include <iostream>

using namespace std;

int main () {
    int N;
    cout << "Digie o tamanho do vetor: " << endl; 
    cin >> N;

    int vet[N];

    //Fazer a leitura
    cout << "Digite " << N << " valores: " << endl;
    for(int i=0; i<N; i++){
        cin >> vet[i];
    }

    //Exibir a ordem
    for(int i=0; i<N; i++){
        cout << "Vet[" << i << "]= " << vet[i] << endl;
    }

    cout << "ORDEM REVERSA" << endl;

    //
    for(int i=N-1; i>=0; i--){
        cout << "Vet[" << i << "]= " << vet [i] << endl;
    }
    return 0;
}