#include <bits/stdc++.h>

using namespace std;

int main(){
    string name;
    double salary, monthly, total;

    getline(cin , name);
    cin >> salary;
    cin >> monthly;

    total = salary + (monthly * 0.15);

    cout << fixed << setprecision(2) << "TOTAL = " << total << endl;

    return 0;
}