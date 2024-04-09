//Exemplo de ordenação, utilizando a função sort e com apenas um campo para ordenação
// Exemplo utilizando um vetor de structs

#include <iostream>
#include <algorithm>
#include <iomanip>

using namespace std;

// Criamos a nossa struct aluno
struct aluno{
    int matricula;
    string nome;
    float nota;
};

// Função de ordenação a ser utilizada pela função de ordenação SORT
// Nessa função podemos definir a variavel que será utilizada na ordenação
bool ordena(const aluno &a1, const aluno &a2){
        return a1.nota < a2.nota;
}

const int NALUNOS = 5 ;

int main(){

    //Declaramos um vetor de tamanho N, do tipo aluno e definimos os seus valores
    aluno turma[NALUNOS] = {
        {909090,"Fulano",7.16},
        {808080,"Beltrano",8.10},
        {709090,"Ciclano",9.13},
        {404404,"Not Found",6.1},
        {309090,"Beltrana",3.1}
    };

    sort(turma,turma+NALUNOS,ordena);

    for(int i=0;i<NALUNOS;i++){
        cout << setw(8) << setfill('0') << turma[i].matricula << " "
             << setw(30) << setfill(' ') << left << turma[i].nome << " "
             << setw(4) <<  right << fixed << setprecision(1) << turma[i].nota << endl;
    }
    

    return 0;
}