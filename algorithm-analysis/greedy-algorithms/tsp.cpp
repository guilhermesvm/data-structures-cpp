#include <iostream>
#include <vector>
#include <limits>

using namespace std;

int proximaCidade(const vector<vector<int>> &distancias, const vector<bool> &visitados, int cidadeAtual){
    int n = distancias.size(); //
    int menorDistancia = numeric_limits<int>::max();
    int proxima_cidade = -1;

    for(int i=0; i<n; i++){
        if(!visitados[i] && distancias[cidadeAtual][i] < menorDistancia){
            menorDistancia = distancias[cidadeAtual][i];
            proxima_cidade = i;
        }
    }
    return proxima_cidade;
}

int caminhoMinimoSucessivo(const vector<vector<int>> &distancias, int cidadeInicial, const vector<string> &cidades){
    int n = distancias.size();
    vector<bool> visitados(n, false);
    int cidadeAtual = cidadeInicial;
    int custoTotal = 0;
    visitados[cidadeAtual] = true;

    cout << "Caminho percorrido: " << cidades[cidadeAtual] << " - > ";

    for(int i=1; i<n; i++){
        int proxima_cidade = proximaCidade(distancias, visitados, cidadeAtual);

        if(proxima_cidade == -1) break; //Não há mais cidade a visitar

        cout << cidades[proxima_cidade] << " -> "; //Exibiu que foi visitada
        custoTotal += distancias[cidadeAtual][proxima_cidade]; //Exibiu o custo
        visitados[proxima_cidade] = true; //Marcou que foi visitada
        cidadeAtual = proxima_cidade;
    }
    //Retornar para o início
    custoTotal += distancias[cidadeAtual][cidadeInicial];
    cout << cidades[cidadeInicial] << endl;

    return custoTotal;
}

int main() {
    // Exemplo de matriz de distâncias entre 6 cidades
    vector<vector<int>> distancias = {
        {0,372,641,353,582,559},
        {372,0,269,99,331,403},
        {641,269,0,426,326,424},
        {353,99,426,0,231,502},
        {582,331,326,231,0,750},
        {559,403,424,502,750,0}
    };
    vector<string> cidades{"Aveiro", "Badajos", "Cordoba", "Evora", "Faro", "Madri"};
    //vector<int> distancia_nodos;
    
    for (int i=0; i < distancias.size(); i++){
        int custoTotal = caminhoMinimoSucessivo(distancias, i, cidades);
        cout << "Custo total do caminho: " << custoTotal << endl << endl;
    }
    return 0;
} 

