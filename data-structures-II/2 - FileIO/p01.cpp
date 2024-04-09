#include <fstream>
#include <iostream>

using namespace std;

int main(){
    ifstream arq;       //Input file stream

    arq.open("numeros.in");     //Abre o arquivo
    if(!arq){
        cout << "Could not open.";
        return 1;
    }

    int num;
    
    while(arq >> num){      //Enquanto houver dados a serem extraídos do stream
        cout << num << " " << num * 2 << endl;
    }

    arq.close();    //Fecha o arquivo
    return 0;
}