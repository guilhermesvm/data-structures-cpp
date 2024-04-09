// Beecrowd #1078

#include <iostream>

using namespace std;

int main(){
    int n;

    cout << "Digite um numero para saber a tabuada: ";
    cin >> n;
    for (int i = 1; i < 11; i++){
        cout << i 
             << " x " 
             << n 
             << " = " 
             << i * n 
             << endl;
    }
}