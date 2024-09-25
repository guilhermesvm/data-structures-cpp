#include <bits/stdc++.h>

using namespace std;

int main() {
    string X, Y, Z;
    cin >> X >> Y >> Z;
    
    if(X == "vertebrado"){
        if(Y == "ave"){
            if(Z == "carnivoro"){
                cout << "aguia" << endl;
            } else {
                cout << "pomba" << endl;
            }
        } else{
            if(Z == "onivoro"){
                cout << "homem" << endl;
            } else{
                cout << "vaca" << endl;
            }
        }
    } else {
        if(Y == "inseto"){
            if(Z == "hematofago"){
                cout << "pulga" << endl;
            } else{
                cout << "lagarta" << endl;
            }
        } else {
            if(Z == "hematofago") {
                cout << "sanguessuga" << endl;
            } else {
                cout << "minhoca" << endl;
            }
        }
    }
    return 0;
}