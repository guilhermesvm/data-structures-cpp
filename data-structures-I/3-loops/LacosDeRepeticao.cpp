//Exemplo de laços de repetição

#include <iostream>

using namespace std;

int main(){
    int n = 0;

    // WHILE
    cout <<"Laco: While\n";
    //Teste antes de entrar no laço. Pode acontecer de não executar nenhuma vez.
    while (n < 10){
        cout << n << endl;
        n++;
    }                                                          
    cout << "Fim!" << endl;

    // DO WHILE
    cout <<"Laco: Do While\n";
    // O teste é feito no final do laço. Garante que pelo menos uma vez será executado.
    do {
        cout<< n << endl;
        n--;
    }while(n > 0);
    cout << "Fim!" << endl;

    // FOR
    cout << "Laco: For" << endl;
    for(int i=0; i<10; i++){
        cout << i << endl;
    }
     cout << "Fim!" << endl;
        cout << "Laco: For --" << endl;
    for(int i=10; i>0; i--){
        cout << i << endl;
    }
    cout << "Fim!" << endl;
    return 0;
}