#include <iostream>

using namespace std;

int main() {
    int N;
    cin >> N;

    int X[N];

    // Lê os elementos do vetor X
    for (int i = 0; i < N; i++) {
        cin >> X[i];
    }

    int menor_valor = X[0];
    int posicao = 0;

    // Encontra o menor valor e sua posição no vetor
    for (int i = 1; i < N; i++) {
        if (X[i] < menor_valor) {
            menor_valor = X[i];
            posicao = i;
        }
    }

    // Imprime o resultado
    cout << "Menor valor: " << menor_valor << endl;
    cout << "Posicao: " << posicao << endl;

    return 0;
}