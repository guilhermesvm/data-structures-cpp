#include <iostream>

using namespace std;

int main(){
    int N;
    cin >> N;

    for(int i=0; i<N; i++){
        string expressao;
        cin >> expressao;

        int jacare = 0;
        int diamante = 0;

        for(int i = 0; i < expressao.length(); i++){
            if(expressao[i] == '<'){
                jacare++;
            } else if(expressao[i] == '>' && jacare > 0){
                diamante++;
                jacare--;
            }
        }
        cout << diamante << endl;
    }
    return 0;
}