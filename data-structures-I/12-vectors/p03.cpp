#include <iostream>
#include <vector>

using namespace std;

int main(){
    vector<string> vetor;
    vetor.push_back("A");
    vetor.push_back("B");
    vetor.push_back("C");
    vetor.push_back("D");
    vetor.push_back("E");
    
    cout << "Percorre usando 'old school' for\n";
    for(int i=0; i<vetor.size(); i++){
        cout << vetor[i] << endl;
    }

    cout << endl << "Percorre usando o range for\n";
    for(auto n:vetor){  //range for
        cout << n << endl;
    }

    cout << endl << "Percorre usando o iterator\n";
    for(auto it = vetor.begin(); it != vetor.end(); ++it){
        cout << *it << endl;
    }

    cout << endl << "Percorre usando o reverse iterator\n";
    for(auto it = vetor.end()-1; it >= vetor.begin(); --it){
        cout << *it << endl;
    }

    return 0;
}