// Criação da struct e definição dos valores na declaração
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
    // Definicão da variavel e dos valores
    aluno fulano = {909090,"Joao",8.3};

    fulano.matricula = 101010;

    cout << "Matricula: " << fulano.matricula << endl;


    return 0;
}