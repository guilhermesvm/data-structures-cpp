#include <stack>
#include <iostream>
using namespace std;



   
bool valida(const string expressao) {
    stack<char> pilha;
    char topo;

    for (char c : expressao) {
        if (c == '(' || c == '[' || c == '{') {
            pilha.push(c);
        } else if (c == ')' || c == ']' || c == '}') {
            if (pilha.empty()) {
                return false;
            }          --

            topo = pilha.top();
            pilha.pop();

            if ((c == ')' && topo != '(') ||
                (c == ']' && topo != '[') ||
                (c == '}' && topo != '{')){
                return false;
            }else{   // Colchetes não podem aparecer dentro de parênteses Chaves não podem aparecer dentro de colchetes ou parênteses          
                      if((c == ']' && !pilha.empty() && pilha.top() == '(') ||
                      (c == '}' && !pilha.empty() && pilha.top() == '(') ||
                      (c == '}' && !pilha.empty() && pilha.top() == '[')){
                        return false;
                      }
                }
            }
        }
    return pilha.empty();
}


int main(){    
    string s;
    getline(cin, s);
    if (valida(s)){
        cout << "Bem formada\n";
    } else {
        cout << "Mal formada\n";
    }
    
    return 0;

}