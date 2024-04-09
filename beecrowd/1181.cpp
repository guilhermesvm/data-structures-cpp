#include <iostream>
#include <iomanip>

using namespace std;

int main() {
    int L;
    char T;
    double M[12][12];

    cin >> L;
    cin >> T;

    for (int i = 0; i < 12; i++) {
        for (int j = 0; j < 12; j++) {
            cin >> M[i][j];
        }
    }

    double resultado = 0.0;

    for (int j = 0; j < 12; j++) {
        resultado += M[L][j];
    }

    if (T == 'M') {
        resultado /= 12.0;
    }

    cout << fixed << setprecision(1) << resultado << endl;

    return 0;
}