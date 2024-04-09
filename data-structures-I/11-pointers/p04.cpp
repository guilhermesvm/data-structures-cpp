#include <iostream>
using namespace std;

int main(){
    int a = 0;
    int *p = &a;

    cout << p  << "  " << *p << endl;

    int **pp; // declarando um ponteiro para ponteiro 'pp'
    pp = &p; // Atribui o endereço do ponteiro p para o ponteiro pp

    cout << pp << " "  // Imprime o endereço de 'p', por meio do ponteiro para ponteiro pp
         << *pp << " " // Imprime o valor apontado por 'pp' que é o endereço de 'a' (valor de p)
         << **pp << endl; // Imprimi o valor apontado duas vezes por 'pp', que é o valor de 'a'
    return 0;
}