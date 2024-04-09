#include <fstream>
#include <iostream>

using namespace std;

int main(){
    string filename;

    cout << "File name: ";
    getline(cin, filename);

    ifstream arq;       
    arq.open(filename);     
    if(!arq){
        cout << "Could not open.";
        return 1;
    }

    string line;
    while(getline(arq,line)){
        cout << line << endl;

    }
    
    arq.close();
    return 0;
}