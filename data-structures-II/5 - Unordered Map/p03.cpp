#include <unordered_map>
#include <iostream>

using namespace std;

int main(){
    unordered_map<string, float> nota;

    nota["Rubinho"] = 8.8;
    nota["Zico"] = 7.1;
    nota["Romário"] = 7.0;

    string s;
    cout << "Nome do aluno: ";

    getline(cin, s);
    if(nota.count(s)==0){
        cout << "Não encontrou\n";
    }
        
    else{
        cout << "Nota: " << nota[s] << endl;
    }
        
    cout << "Tamanho: " << nota.size() << endl;
}
