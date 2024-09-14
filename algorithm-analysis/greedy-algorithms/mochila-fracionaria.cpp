#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

struct item{
    double valor;
    double peso;
    double valor_peso;
};

double mochila(vector<item> &itens, double capacidade_max);
bool comparar(item A, item B);

int main(){
    vector<item>  itens = {
        {60, 10, 60.0/10},
        {100, 20, 100.0/20},
        {120, 30, 120.0/30}
    };

    double capacidade_max = 50; //Capacidade da mochila em kg;
    double valor_max = mochila(itens, capacidade_max);
    cout << "Valor maximo a ser carregado: " << valor_max << endl;

    return 0;
}

double mochila(vector<item> &itens, double capacidade_max){
    //Ordenar os itens com base no valor por unidade
    sort(itens.begin(), itens.end(), comparar);
    double valor_total = 0.0;

    //Começa a testar pelo item de maior valor, caracterizando um algoritmo guloso
    for(const auto &item : itens){
        //Se a capacidade máxima for atingida, programa acaba
        if(capacidade_max <= 0){
            cout << "Mochila cheia." << endl;
            break;
        }

        //Se ainda há capacidade
        if(capacidade_max >= item.peso){
            capacidade_max = capacidade_max - item.peso;
            valor_total = valor_total + item.valor;
        } else{
            // Caso não caiba, leva-se a fração do que cabe
            valor_total = valor_total + item.valor_peso * capacidade_max;
            capacidade_max = 0;
        }

    }
    return valor_total;
}

bool comparar(item A, item B){
    return A.valor_peso > B.valor_peso;
}



