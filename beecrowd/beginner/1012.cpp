#include <bits/stdc++.h>

using namespace std;

int main(){
    float A, B, C, triangle, circle, trapezium, square, rectangle;
    cin >> A >> B >> C;
    
    triangle = (A * C) / 2;
    circle = 3.14159 * (C * C);
    trapezium = ((A+ B) * C) / 2;
    square = B * B;
    rectangle = A * B;

    cout << fixed << setprecision(3) << "TRIANGULO: " << triangle << endl;
    cout << fixed << setprecision(3) << "CIRCULO: " << circle << endl;
    cout << fixed << setprecision(3) << "TRAPEZIO: " << trapezium << endl;
    cout << fixed << setprecision(3) << "QUADRADO: " << square << endl;
    cout << fixed << setprecision(3) << "RETANGULO: " << rectangle << endl;
    
    return 0;
}