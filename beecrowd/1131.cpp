//https://www.beecrowd.com.br/judge/pt/problems/view/1131

#include <iostream>
 
using namespace std;
 
int main() {
    int golsGremio, golsInter;
    int novoGrenal;
    int inter = 0;
    int gremio = 0;
    int empate = 0;
    int grenais = 0;
    
    while(true){
        cin >> golsGremio;
        cin >> golsInter;
        
        if (golsGremio > golsInter){
            gremio++;
        } else if(golsGremio < golsInter){
            inter ++;
        }else{
            empate++;}
        grenais++;
        
        cout << "Novo grenal (1-sim 2-nao)" << endl;
        cin >> novoGrenal;
        if (novoGrenal == 2){
            break;
        }
    }
    
        cout << grenais << " grenais" << endl;
        cout << "Inter:" << inter << endl;
        cout << "Gremio:" << gremio << endl;
        cout << "Empates:" << empate << endl;
        
        if(gremio>inter){
            cout << "Gremio venceu mais\n";
        } else if(gremio<inter){
            cout << "Inter venceu mais\n";
        } else{
            "Nao houve vencedor.";
        }

    return 0;
}