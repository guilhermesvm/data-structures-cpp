#include <bits/stdc++.h>

using namespace std;

int main() {
    int X, Y;
    float ans;
    cin >> X >> Y;
    
    float prices[] = {4.00, 4.50, 5.00, 2.00, 1.50};
    ans = Y * prices[X-1];
    
    cout << fixed << setprecision(2) << "Total: R$ " << ans << endl; 

    return 0;
}