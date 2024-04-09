// Percorrendo todos os Itens da Matriz

#include <iostream>
using namespace std;

int main(){
    const int NL = 4, NC = 3;
    float m[NL][NC]{
        {1.5, 0.4, 9.1},
        {8.6, 1.7, 2.8},
        {2.7, 10.1, 1.1},
        {5.7, 8.1, 2.1}
    };

    for(int l=0; l<NL; l++){
        for (int c=0;c<NC; c++){
            cout << "M["<<l <<"][" << c<< "] = " << m[l][c] << endl;
        }
    }
    return 0;
}