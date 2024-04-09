//Alterar para qual valor o ponteiro esta apontando.

#include <iostream>
using namespace std;

int main(){
    int a=5, b=10, c=15;
    int *p;

//Alterar para qual valor o ponteiro está apontando
    p =&a;
    cout << p << "  " << *p << endl;

    p =&b;
    cout << p << "  " << *p << endl;

    p =&c;
    cout << p << "  " << *p << endl;

    return 0;
}