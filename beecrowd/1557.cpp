#include <iostream>
#include <iomanip>

using namespace std;

int main() {
    int N;
    
    while (true) {
        cin >> N;
        
        if (N == 0) {
            break;
        }
        
        int matriz[N][N];
        
        // Preencher a matriz
        for (int i = 0; i < N; i++) {
            for (int j = 0; j < N; j++) {
                matriz[i][j] = 1 << (i + j);
            }
        }
        
        // Encontrar o número de dígitos do maior número na matriz
        int maior = matriz[N - 1][N - 1];
        int numDigitos = 0;
        
        while (maior > 0) {
            maior /= 10;
            numDigitos++;
        }
        
        // Imprimir a matriz formatada
        for (int i = 0; i < N; i++) {
            for (int j = 0; j < N; j++) {
                cout << setw(numDigitos) << matriz[i][j];
                if (j < N - 1) {
                    cout << " ";
                }
            }
            cout << endl;
        }
        
        cout << endl;  // Deixar uma linha em branco entre as matrizes
    }
    
    return 0;
}