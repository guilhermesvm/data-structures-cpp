#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int main(){
    vector<string> vetor;
    vetor.push_back("A");
    vetor.push_back("B");
    vetor.push_back("C");
    vetor.push_back("D");
    vetor.push_back("E");

    auto it = find(vetor.begin(), vetor.end(), "E"); //Find é uma funão do <algorithm>

    if(it==vetor.end()){ //Não encontrou
        cout << "Not found." << endl;
    } else{
        vetor.insert(it, "Z");
    }

    for(auto n:vetor){
        cout << n << endl;
    }
    

    return 0;
}
