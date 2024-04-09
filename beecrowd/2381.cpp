#include <iostream>
#include <algorithm>

using namespace std;


int main(){

    int N, K;
    cin >> N >> K;

    string turma[N];

    for(int i=0; i < N; i++){
        cin >> turma[i];
    }

    sort(turma, turma+N);

   cout << endl << turma[K-1] << endl;

    return 0;
}