#include <iostream>

using namespace std;

int main () {
    const int N= 6;
    int vet[N];

    cout << "Digite " << N << " valores: " << endl;
    for(int i=0; i<N; i++){
        cin >> vet[i];
    }

    for(int i=0; i<N; i++){
        cout << "Vet[" << i << "]= " << vet[i] << endl;
    }

    cout << "ORDEM REVERSA" << endl;

    for(int i=N-1; i>=0; i--){
        cout << "Vet[" << i << "]= " << vet [i] << endl;
    }
    return 0;
}