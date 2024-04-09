#include <iostream>

using namespace std;

int main(){

    string s;
    /*s = "Dados";
    cout << s[1];*/

    getline(cin, s);
  
    cout << endl;
    
    for(char c:s){
        cout << c << endl;

    }




    return 0;
}