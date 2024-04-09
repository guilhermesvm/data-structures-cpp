#include <iostream>
#include <iomanip>
#include <cmath>

using namespace std;
int main(){
    double raio, area;

    cout << "Informe o raio do circulo: ";
    cin >> raio;
    area = M_PI * (raio * raio);

    cout << " A area do circulo eh " << fixed << setprecision(2) << area;
    return 0;
}