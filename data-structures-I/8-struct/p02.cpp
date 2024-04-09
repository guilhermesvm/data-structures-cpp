#include <iostream>
#include <algorithm>
#include <iomanip> //setfill

using namespace std;

struct aluno{
    int matricula;
    string nome;
    float nota;
};

bool ordena(const aluno &a1, const aluno &a2){
    return (a1.nota > a2.nota) || (a1.nota == a2.nota && a1.nome < a2.nome);

}

const int N = 5;

int main(){

    aluno turma[N] =  {
        {909090, "Fulano", 8.15},
        {808080, "Ciclano", 8.15},
        {707070, "Beltranho", 6.60},
        {606060, "Tirano", 8.50},
        {404040, "Beetle Juice", 10}
    };

    /*cout << "Matricula do " << turma[4].nome << ": " << turma[4].matricula << endl;
    cout << "Nota do " << turma[4].nome << ": " << turma[4].matricula << endl;*/

    sort(turma, turma+N, ordena);


    for(int i=0; i<N; i++){
        cout << setw(8) << setfill('0') << turma[i].matricula << " "
             << setw(30) << setfill(' ') << left << turma[i].nome << " "
             << setw(4) << fixed << setprecision(1) << right << turma[i].nota
             << endl;
    }

    // setw
    // setfill

    return 0;
}