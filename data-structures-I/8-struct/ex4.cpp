// Exemplo de função na struct

#include <iostream>
#include <algorithm>
#include <iomanip>

using namespace std;

// Criamos a nossa struct aluno
struct aluno{
    int matricula;
    string nome;
    float nota;
    string status;

    // Criamos uma função para a struct. A ser chamada quando quisermos executar determinada
    //      tarefa nos dados
    void matricular(){
        if(status == "Ausente"){
            status = "Matriculado";
        }
    }

    void imprimir(){
         cout << setw(8) << setfill('0') << matricula << " "
             << setw(30) << setfill(' ') << left << nome << " "
             << setw(4) <<  right << fixed << setprecision(1) << nota << " "
             << setw(30) << setfill(' ') << left << status << " " << endl;     

    }
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
        {909090,"Fulano",7.16,"Ausente"},
        {808080,"Beltrano",8.10,"Ausente"},
        {709090,"Ciclano",8.10,"Ausente"},
        {404404,"Not Found",8.10,"Ausente"},
        {309090,"Beltrana",3.1,"Ausente"}
    };

    turma[2].matricular();
    turma[3].imprimir();
    sort(turma,turma+NALUNOS,ordena);    


/*
    for(int i=0;i<NALUNOS;i++){
        cout << setw(8) << setfill('0') << turma[i].matricula << " "
             << setw(30) << setfill(' ') << left << turma[i].nome << " "
             << setw(4) <<  right << fixed << setprecision(1) << turma[i].nota << " "
             << setw(30) << setfill(' ') << left << turma[i].status << " " << endl;
    }
    
*/
    return 0;
}