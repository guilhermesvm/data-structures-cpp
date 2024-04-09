#include <iostream>
using namespace std;

struct aluno{
    int matricula;
    string nome;
    float nota;
};

int main(){
    //Declaramos as variaveis do tipo aluno
    aluno Guilherme, Zezinho; 

    //Declaramos os valores direto em uma variável
    aluno x = {196890, "Guilherme Machado", 4.8};

    //Inserimos os dados na variável do tipo 'aluno'
    Guilherme.matricula = 196890;
    Guilherme.nome = "Guilherme Machado";
    Guilherme.nota = 4.8;

    Zezinho.matricula = 156563;
    Zezinho.nome = "Zezinho";
    Zezinho.nota = 5.4;

    //Exibindo dos dados
    cout << "Matrícula: " << Guilherme.matricula << endl;
    cout << "Nome: " << Guilherme.nome << endl;
    cout << "Nota: " << Guilherme.nota << endl;
    
    //Alterar dados
    Guilherme.nota = 10;

    return 0;
}