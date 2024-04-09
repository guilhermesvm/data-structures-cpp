#include <iostream>

using namespace std;

int main() {
    int N;
    cin >> N;

    int medidas[N];
    for (int i = 0; i < N; i++) {
        cin >> medidas[i];
    }

    int indice_queda = 0;

    for (int i = 1; i < N; i++) {
        if (medidas[i] < medidas[i - 1]) {
            indice_queda = i + 1;
            break;
        }
    }

    cout << indice_queda << endl;

    return 0;
}