#include <iostream>
#include <fstream>
#include <cstdlib> // para exit() = return 1;
#include <cctype> // para toupper()

using namespace std;

int main(){
    ifstream arq;

    arq.open("gpl3.txt");
    if(!arq){
        cout << "Arquivo falhou ao abrir." << endl;
        exit(1);
    }

    char c;

    while(arq.get(c)){ //Extrai 1 caracter por vez e armaneza na variável 'c'
        cout << (char) toupper(c); //Converte para maiúsculo
      //cout << (char) tolower(c);
    }

    arq.close();
    exit(0);

}