#include <iostream>
#include <algorithm>
#include <iomanip>

using namespace std;

struct veiculo{
    string modelo;
    float valor;
    int ano;
};

bool compara(const veiculo &c1, const veiculo &c2){
    return  (c1.valor > c2.valor) ||
            (c1.valor == c2.valor && c1.ano > c2.ano) ||
            (c1.valor == c2.valor && c1.ano == c2.ano && c1.modelo < c2.modelo);
};

int main(){
    int n;
    cout << "Informe a quantidade de veiculos que voce gostaria de fazer a comparacao: ";
    cin >> n;
    veiculo veiculos[n];

   
   cout << "Informe o Modelo, Valor e Ano desses veiculos: " << endl;
   for(int i=0; i<n; i++){
    cin >> veiculos[i].modelo >> veiculos[i].valor >> veiculos[i].ano;
   }

   sort(veiculos, veiculos+n, compara);

   cout << endl << "Carros para revenda:" << endl << endl;
   for(int i=0; i<n; i++){
    cout << veiculos[i].modelo << " " << fixed << setprecision(2) <<  veiculos[i].valor << " " << veiculos[i].ano << endl;
   }

    return 0;
}