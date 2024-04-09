// Exemplo de Matrizes

#include <iostream>
using namespace std;

int main(){
    float m[3][3]{
        {1.5, 0.4, 9.1},
        {8.6, 1.7, 2.8},
        {2.7, 10.1, 1.1}
    };

    cout << "Antes: " << m[2][2] << endl;
    m[2][2]= m[2][2] * 2;
    cout << "Depois: " << (m[2][2]) << endl;
    return 0;
}