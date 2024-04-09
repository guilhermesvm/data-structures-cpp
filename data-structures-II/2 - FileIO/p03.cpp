#include <fstream>
#include <iostream>

using namespace std;

int main(){
    string filename;

    cout << "Input file: ";
    getline(cin, filename);

    ifstream arq;       
    arq.open(filename);     
    if(!arq){
        cout << "Could not open.";
        return 1;
    }

    ofstream saida; //Output file stream
    cout << "Output file: ";
    getline(cin, filename);

    saida.open(filename);
    if(!saida){
        cout << "Deu ruim!\n";
        return 2;
    }


    string line;
    while(getline(arq,line)){
        saida << line << endl;
    }
    
    arq.close();    //Close file
    saida.close();
    return 0;
}