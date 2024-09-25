#include <bits/stdc++.h>

using namespace std;

int main() {
    double salary, ans;
    cin >> salary;

    if(salary >= 0.00 && salary <= 2000.00){
        cout << "Isento\n";
    } else if(salary >= 2000.01 && salary <= 3000.00){
        ans = (0.08 * 1000.00) + (0.18 * 2.00);
        cout << "R$ " << fixed << setprecision(2) << ans << endl;
    } else if(salary >= 3000.01 && salary <= 4500.00){
        ans = (0.08 * 1000.00) + (0.18 * 2.00);
        cout << "R$ " << fixed << setprecision(2) << ans << endl;

    } else {
        ans = (0.18 * 2000.00) + (0.18 * 2.00);
        cout << "R$ " << fixed << setprecision(2) << ans << endl;
    }
  
    
    return 0;
}