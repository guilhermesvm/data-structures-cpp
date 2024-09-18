#include <iostream>

using namespace std;

int main() {
    int N;
    cin >> N;
    
    int year = N / 365;
    N = N % 365;
    int month = N / 30;
    int day = N % 30;
    
    cout << year << " ano(s)\n" ;
    cout << month << " mes(es)\n";
    cout << day << " dia(s)\n";
    
    return 0;
}