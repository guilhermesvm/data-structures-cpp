//https://www.beecrowd.com.br/judge/pt/problems/view/1079

#include <iostream>
#include <iomanip>

using namespace std;

int main() {
    int N;
    cin >> N;

    for (int i = 0; i < N; i++) {
        double a, b, c;
        cin >> a >> b >> c;

        double media = (a * 2 + b * 3 + c * 5) / 10;
        
        cout << fixed << setprecision(1) << media << endl;
    }

    return 0;
}