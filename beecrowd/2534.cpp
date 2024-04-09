#include <iostream>
#include <iomanip>
#include <algorithm>

using namespace std;


bool ordemDecrescente(int a, int b) {
    return a > b;
}

int main(){

    int N, Q;

    while(cin >> N >> Q){
        int notas[N];

        for(int i=0; i<N; i++){
            cin >> notas[i];
        }

        sort(notas, notas + N, ordemDecrescente);

        for (int i = 0; i < Q; i++) {
            int consulta;
            cin >> consulta;
            cout << notas[consulta - 1] << endl;
        }
    }


    return 0;
}