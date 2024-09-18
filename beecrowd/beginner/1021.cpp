#include <iostream>
#include <iomanip>
#include <cmath>

using namespace std;

int main() {
    float number;
    float notes[] = {100.00, 50.00, 20.00, 10.00, 5.00, 2.00};
    float coins[] = {1.00, 0.50, 0.25, 0.10, 0.05, 0.01};
    cin >> number;
    
    cout << "NOTAS:" << endl;
    for(int i=0; i < 6; i++){
        int value = number / notes[i];
        cout << value << fixed << setprecision(2) << " nota(s) de R$ " << notes[i] << endl;
        number = number - (value * notes[i]);
    }
    
    cout << "MOEDAS:" << endl;
    for(int i=0; i < 6; i++){
        int value = number / coins[i];
        cout << value << fixed << setprecision(2) << " moeda(s) de R$ " << coins[i] << endl;
        number = round((number - (value * coins[i])) * 100) / 100;
    }
    
    return 0;
}