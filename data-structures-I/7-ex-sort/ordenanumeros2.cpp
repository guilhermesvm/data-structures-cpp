#include <iostream>
#include <algorithm>

using namespace std;

const int N = 6;
double vet[N] = {1.5, 0.8, 4.4, 0.1, 9.7, 3.6};

int main()
{
    // Ordenação
    sort(vet, vet + N);

     for (int i = 0; i < N; i++)
        cout << vet[i] << '\n';

    return 0;
}
