#include <iostream>
#include <algorithm>

const int MAX_N = 100; // Definindo um limite máximo para o número de itens
const int MAX_C = 100; // Definindo um limite máximo para a capacidade da mochila

struct Produto {
    int peso;
    int valor;
};

// Vetores globais para os produtos e a matriz dp
Produto produtos[MAX_N];
int dp[MAX_N + 1][MAX_C + 1];

int knapsack(int capacidade, int n,bool selecionado[]) {
    // Inicializando a matriz dp com zero
    for (int i = 0; i <= n; ++i) {
        for (int j = 0; j <= capacidade; ++j) {
            dp[i][j] = 0;
        }
    }

    // Preenchendo a matriz dp
    for (int i = 1; i <= n; ++i) {
        for (int j = 1; j <= capacidade; ++j) {
            if (produtos[i-1].peso <= j) {
                // Escolhemos o maior entre incluir ou não o item atual
                dp[i][j] = std::max(dp[i-1][j], dp[i-1][j-produtos[i-1].peso] + produtos[i-1].valor);
            } else {
                // Não podemos incluir o item atual, logo levamos o valor máximo sem ele
                dp[i][j] = dp[i-1][j];
            }
        }
    }

       // Backtracking para descobrir quais itens foram incluídos
    int w = capacidade;
    for (int i = n; i > 0 && w > 0; --i) {
        if (dp[i][w] != dp[i-1][w]) {
            selecionado[i-1] = true;
            w -= produtos[i-1].peso;
        } else {
            selecionado[i-1] = false;
        }
    }

    // O resultado final estará na célula dp[n][capacidade]
    return dp[n][capacidade];
}

int main() {
    int n = 5; // Número de produtos
    bool selecionado[MAX_N] = {false}; // Array para rastrear itens selecionados

    // Definindo os produtos
    produtos[0] = {3, 2}; // Produto 1
    produtos[1] = {1, 2}; // Produto 2
    produtos[2] = {3, 4}; // Produto 3
    produtos[3] = {4, 5}; // Produto 4
    produtos[4] = {2, 3}; // Produto 5

    int capacidade = 7; // Capacidade da mochila

    int valorMaximo = knapsack(capacidade, n,selecionado);
    std::cout << "O valor máximo que o cliente pode carregar é: " << valorMaximo << " reais" << std::endl;

    // Exibindo quais itens foram selecionados
    std::cout << "Itens selecionados:" << std::endl;
    for (int i = 0; i < n; ++i) {
        if (selecionado[i]) {
            std::cout << "Item " << (i + 1) << " - Peso: " << produtos[i].peso << ", Valor: " << produtos[i].valor << std::endl;
        }
    }


    return 0;
}