#include <iostream>

using namespace std;

int main() {
    int A, B, C, D;
    cin >> A >> B >> C >> D;

    int sum1 = C + D;
    int sum2 = A + B;
    
    if(B > C && D > A && sum1 > sum2 && C > 0 && D > 0 && A % 2 ==0){
        cout << "Valores aceitos" << endl;
    } else{
        cout << "Valores nao aceitos" << endl;
    }
    return 0;
}