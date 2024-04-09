#include <iostream>
#include <vector>
#include <algorithm>
#include <string>

using namespace std;

int main() {
    vector<string> lista_compras;
    string palavra;
    while (cin >> palavra && palavra != "FIM") {
        auto it = find(lista_compras.begin(), lista_compras.end(), palavra);
       
        if (it == lista_compras.end()) {
            lista_compras.push_back(palavra);
        }
    }

    sort(lista_compras.begin(), lista_compras.end());

    for (string produto : lista_compras) {
        cout << produto << " " ;
    }
    
    return 0;
}