#include <iostream>
#include <algorithm>

using namespace std;

  struct pais{
        string nome;
        int ouro;
        int prata;
        int bronze;
    };

    bool compara(const pais &p1, const pais &p2){
        return  (p1.ouro > p2.ouro) ||
                (p1.ouro == p2.ouro && p1.prata > p2.prata) ||
                (p1.ouro == p2.ouro && p1.prata == p2.prata && p1.bronze > p2.bronze) ||
                (p1.ouro == p2.ouro && p1.prata == p2.prata && p1.bronze == p2.bronze && p1.nome < p2.nome);
    }

 
 int main(){
    int N;
    cout << "Qual e o numero de paises que participaram da Olimpiada de Toquio? ";
    cin >> N;
    pais paises[N];

    cout << "Informe o nome do pais e a quantidade de medalhas de ouro, prata e bronze, respectivamente: " << endl;
    for(int i=0; i<N; i++){
        cin >> paises[i].nome >> paises[i].ouro >> paises[i].prata >> paises[i].bronze;
    }

    sort(paises, paises+N, compara);

    cout << endl << "Resultado Final" << endl;
    for(int i=0; i<N; i++){
        cout << paises[i].nome << " " << paises[i].ouro << " " << paises[i].prata << " " << paises[i].bronze << endl;
    }
  

    return 0;
 }