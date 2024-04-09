#include <unordered_set>
#include <iostream>

using namespace std;

int main(){
    unordered_set<int> numeros;
    int n;

    cout << "Digite valores (0 para sair)\n";
    
    while(cin >> n && n!=0){
        numeros.insert(n);
    }
    cout << "Tamanho: " << numeros.size() << endl;

    for(auto v: numeros){
        cout << v << endl;
    }
}

