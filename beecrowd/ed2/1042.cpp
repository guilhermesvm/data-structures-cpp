#include <iostream>

using namespace std;

int main(){
    int A, B, C;
    int X, Y, Z;
    int temp;
    
    cin >> A >> B >> C;

    X = A;
    Y = B;
    Z = C;

    if(X > Y){
        temp = X;
        X = Y;
        Y = temp;
    }
    if(X > Z){
        temp = X;
        X = Z;
        Z = temp;
    }
    if(Y > Z){
        temp = Y;
        Y = Z;
        Z = temp;
    }

    cout << X << endl
         << Y << endl
         << Z << endl;
    
    cout << endl;

    cout << A << endl
         << B << endl
         << C << endl;

    return 0;
}