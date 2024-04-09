// Teste a alocação dinâmica
// size() != capacity

#include <iostream>
#include <vector>

using namespace std;

int main(){
    vector<double> vetor;
    double x;

    cout << "Insira valores: [0 para sair]" << endl;
    cout << "Tamanho: " << vetor.size() << " Capacidade: " << vetor.capacity() << endl;

    while(cin >> x && x != 0){
        vetor.push_back(x);
        cout << "Tamanho: " << vetor.size() << " Capacidade: " << vetor.capacity() << endl;
    }


    return 0;
}