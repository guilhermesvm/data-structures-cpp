#include <algorithm>
#include <iostream>

using namespace std;


bool compara(double a, double b) {
    return (a > b);
}

int main() {
  double v[6] = {1.5, 0.8, 4.4, 0.1, 9.7, 3.6};
  std::sort(v, v + 6, compara);

  for (int i = 0; i < 6; i++) {
    cout << v[i] << " ";
  }
  cout << endl;
  return 0;
}
