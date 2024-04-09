// std:: vector
// Um container senquencial para vetores dinamicos ou array list
//O tamanho do vetor pode crescer dinamicamente
// O tamanho em tempo da compilação

#include <iostream>
#include <vector>

using namespace std;

int main(){
    vector<int> vetor;  // vector de int inicialmente vazio
    cout << "Tamanho: " << vetor.size() << endl;
    vetor.push_back(10); // Inserção do final do vector
    vetor.push_back(20);
    vetor.push_back(5);

    int tam = vetor.size();
    
    for(int i=0; i<tam; i++){
        cout << i << ": " << vetor[i] << endl;
    }

    cout << "Tamanho: " << vetor.size() << endl;
    vetor.pop_back();
    cout << "Tamanho: " << vetor.size() << endl;

    return 0;
}