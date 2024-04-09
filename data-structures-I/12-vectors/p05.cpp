#include <iostream>
#include <vector>

using namespace std;

int main(){
    int n;
    cin >> n;
    vector<string> vetor(n);

    for(int i=0; i<n; i++){
        cin >> vetor[i];       
        cout << "Tamanho: " << vetor.size() << " Capacidade: " << vetor.capacity() << endl;
    }

    vetor.push_back("Adicionado Depois");


    for(int i=0; i<vetor.size(); i++){      
        cout << "Tamanho: " << vetor.size() << " Capacidade: " << vetor.capacity() << endl;
    }

    
    return 0;
}