#include <bits/stdc++.h>

using namespace std;

int main() {
    int X;
    
    unordered_map<int, string> DDDs;
    DDDs[61] = "Brasilia";
    DDDs[71] = "Salvador";
    DDDs[11] = "Sao Paulo";
    DDDs[21] = "Rio de Janeiro";
    DDDs[32] = "Juiz de Fora";
    DDDs[19] = "Campinas";
    DDDs[27] = "Vitoria";
    DDDs[31] = "Belo Horizonte";

    cin >> X;
    
    auto it = DDDs.find(X);
    
    if(it != DDDs.end()){
       cout << it->second << endl;
    } else {
       cout << "DDD nao cadastrado" << endl;
    }
    
    return 0;
}