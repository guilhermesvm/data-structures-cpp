#include <algorithm>
#include <iostream>

using namespace std;

bool compara(double a, double b) {
    return (a > b);
}

int main() {
    double vet[6] = {1.5, 0.8, 4.4, 0.1, 9.7, 3.6};

    sort(vet, vet + 6, compara); //Utilizando a função sort da lib

    for (int i = 0; i < 6; i++) {
      cout << vet[i] << " ";
    }

    cout << endl;
  return 0;
}
