#include <unordered_map>
#include <iostream>

using namespace std;

int main(){
    unordered_map<string, float> nota;

    nota["Rubinho"] = 8.8;
    nota["Zico"] = 7.1;
    nota["Romário"] = 7.0;

    cout << "Tamanho: " << nota.size() << endl;
    cout << nota["Zica"] << endl;
    cout << "Tamanho: " << nota.size() << endl;
}
