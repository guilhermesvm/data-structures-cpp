// Primeiro exemplo de struct

#include <iostream>
#include <algorithm>

using namespace std;

// Criamos a nossa struct aluno
struct aluno{
    int matricula;
    string nome;
    float nota;
};
int main(){
    aluno fulano, ciclano;   /// Declaramos a nossa variavel tipo aluno

    /// Inserimos os dados da nossa struct
    fulano.matricula = 909090;
    fulano.nome = "Joao";
    fulano.nota = 8.3;

    // Exibe os dados
    cout << "Matr: " << fulano.matricula << endl;
    cout << "Nome: " << fulano.nome << endl;
    cout << "Nota: " << fulano.nota << endl;

    ciclano.matricula = 101010;
   



    return 0;
}