#include <iostream>

using namespace std;

int main(){
    int N;
    int seconds = 0;
    int minutes = 0;
    int hours = 0;

    cin >> N;
    hours = N / 3600;
    N = N % 3600;
    minutes = N / 60;
    seconds = N % 60;

    cout << hours << ":" << minutes << ":" << seconds << endl;
   return 0;
}