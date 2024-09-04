#include <iostream>
#include <fstream>
#include <cstdlib> // para exit()
#include <string.h>

using namespace std;

int main(){
    ifstream arq("gpl3.txt");
    if(!arq){
        cout << "Arquivo falhou ao abrir." << endl;
        exit(1);
    }

    char c;
    int cont[256] = {}; //Cria uma array/vetor e a inicializa com um valor default = 0
    
    while(arq.get(c)){ //Extrai 1 caracter por vez e armaneza na variável 'c'
        cont[c]++;
    }

    arq.close();

    ofstream csv("chars.csv");

    csv << "\"Ascii Code\",\"Char\",\"Count\"\n";

    for(int i=0; i < 255; i++){
        if(cont[i] > 0 ){
            csv << i << ", \"" 
            << (isprint(i) ? char(i) : ' ') 
            << (i==34 ? "\"" : "")
            << "\", " 
            << cont[i] << endl;    
        }
    }

    csv.close();
}