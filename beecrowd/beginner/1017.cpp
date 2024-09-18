#include <bits/stdc++.h>

using namespace std;

int main(){
  int hours, speed;
  float distance, ans;

  cin >> hours >> speed;

  distance = hours * speed;
  ans = distance / 12;

  cout << fixed << setprecision(3) << ans << endl;

   return 0;
}