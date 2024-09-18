#include <bits/stdc++.h>

using namespace std;

int main(){
    double pi = 3.14159;
    double formula, R;

    cin >> R;
    formula =  (4/3.0) * pi * ((R * R) * R);

    cout << fixed << setprecision(3) << "VOLUME = " << formula << endl;

    return 0;
}