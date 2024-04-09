#include <iostream>

using namespace std;

int main () {
    int vet[6];

    cout << "Digite 6 valores: " << endl;

    for(int i=0; i<6; i++){
        cin >> vet[i];
    }

    for(int i=0; i<6; i++){
        cout << "Vet[" << i << "]= " << vet[i] << endl;
    }

    cout << "ORDEM REVERSA" << endl;

    for(int i=5; i>=0; i--){
        cout << "Vet[" << i << "]= " << vet [i] << endl;
    }
    return 0;
}