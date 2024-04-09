#include <iostream>
#include <list>
#include <iterator>

using namespace std;

int main(){
    list<int> lista{10, 200, 41, 33, 200, 20};

    //lista.remove(200)  - remove toda ocorrencia
    //lista.remove_if([](auto n){return n%2==0;}); - remove todos os pares da lista
    lista.sort([](int a, int b){return a>b;});

    for(auto n:lista){
        cout << n << " ";
    }

    cout << endl;

    return 0;
}