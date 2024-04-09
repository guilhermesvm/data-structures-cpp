#include <bits/stdc++.h>
using namespace std;

int main(){
    list<int> lista{10,200,41,33,200,20};

    int x;
    cin >> x;

    lista.remove_if([x](int n){return n<x;});

    int c = count_if(lista.begin(), lista.end(),[](int n){return n%2==0;});

    cout << "Pares: " << c << endl; 

    for(auto n:lista){
        cout << n << " ";
    }

    cout << endl;
    
    
    return 0;
}