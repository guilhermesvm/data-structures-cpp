#include <iostream>
using namespace std;

int main(){

    float n = 1.5;
    float *p = &n;

    cout << n << "  " << *p << endl;
    *p = 10.2;
    cout << n << "  " << *p << endl;

    return 0;
}