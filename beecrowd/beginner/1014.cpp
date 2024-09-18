#include <bits/stdc++.h>

using namespace std;

int main(){
   int km;
   float fuel;
   cin >> km >> fuel;

   float consumption = km / fuel;

   cout << fixed << setprecision(3) << consumption << " km/l" << endl;

   return 0;
}