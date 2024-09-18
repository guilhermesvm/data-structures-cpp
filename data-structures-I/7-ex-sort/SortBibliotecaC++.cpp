#include <iostream>
#include <algorithm>

using namespace std;

bool compara(double a, double b){
    return (a < b);
}

int main(){
    double vet[5]{10.3, 17.3,-6.2, 15.1, 3.2};

    sort(vet, vet+5, compara); //Utilizando a função sort da lib

    for (int i=0; i<5; i++){
        cout << vet[i] << " ";
    }


    return 0;
}