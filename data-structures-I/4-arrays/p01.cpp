#include <iostream>

using namespace std;

int main(){
    int valor = 10;
    int m[3][3]{
        {valor,11,12},
        {13,14,15},
        {16,17,18},
    };
    for(int i=0; i<3; i++){
       cout << m[i][i] << endl;
    }

    return 0;

}