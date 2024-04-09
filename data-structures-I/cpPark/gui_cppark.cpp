#include <iostream>
#include <stack>
#include <string>

using namespace std;

// Definindo a capacidade máxima do estacionamento
const int capacidade_estacionamento = 8;

// Função para registrar a entrada de um carro no estacionamento
void registrarEntrada(stack<string> &estacionamento) {
    if (estacionamento.size() < capacidade_estacionamento) {    //Checa para haver se há vagas no estacionamento, se houver, um carro será estacionado
        string placa;
        cout << "Digite a placa do carro a ser estacionado: ";
        cin >> placa;
        estacionamento.push(placa);
        cout << "Carro estacionado com sucesso!\n";
    } else {                                                    //Se não houver, haverá uma mensagem de erro
        cout << "Nao ha vagas disponíveis no estacionamento.\n";
    }
}

// Função para registrar a saída de um carro do estacionamento
void registrarSaida(stack<string> &estacionamento) {
    if (estacionamento.empty()) {           //Checa se o estacionamento está vazio
        cout << "Estacionamento Vazio.\n";
    }

    string placa;
    cout << "Digite a placa do carro a ser retirado: ";
    cin >> placa;
    cout << endl;
    stack<string> manobra; // Pilha temporária representando a área de manobra

    // Encontrando o carro a ser retirado e movendo os outros para a área de manobra
    while (!estacionamento.empty() && estacionamento.top() != placa) { //Enquanto o estacionamento não estiver vazio e os carros forem diferentes do escolhido, 
        manobra.push(estacionamento.top());                            //serão enviados para a área de manobra                   
        estacionamento.pop();
        cout << "Movendo carro de placa " << manobra.top() << " para a area de manobra." << endl;
    }
    cout << endl;
    cout << "Carro selecionado encontrado e retirado do estacionamento.\n"; 
    estacionamento.pop();  //Retirando carro escolhido

    // Retornando os carros para o estacionamento
    while (!manobra.empty()) {              //Enquanto a área de manobra não estiver vazia, é enviado o último carro manobrado de volta para o estacionamento
        estacionamento.push(manobra.top());
        manobra.pop();
        cout << "Carro de placa " << estacionamento.top() << " voltou para o estacionamento." << endl;
    }
}

// Função para consultar a quantidade de carros estacionados e vagas disponíveis
void consultarVaga(stack<string> &estacionamento) {
    int carrosEstacionados = estacionamento.size();
    int vagasDisponiveis = capacidade_estacionamento - carrosEstacionados;
    cout << "Carros estacionados: " << carrosEstacionados << endl;
    cout << "Vagas disponiveis: " << vagasDisponiveis << endl;
}

int main() {
    stack<string> estacionamento; // Pilha representando o estacionamento

    int opcao;
    do {
        cout << "\n---------Estacionamento CPPark---------\n";
        cout << "1) Registrar entrada\n";
        cout << "2) Registrar saida\n";
        cout << "3) Consultar vaga\n";
        cout << "4) Fim do programa\n";
        cout << "Escolha uma opcao: ";
        cin >> opcao;
        cout << endl;

        switch (opcao) {
            case 1:
                registrarEntrada(estacionamento);
                break;
            case 2:
                registrarSaida(estacionamento);
                break;
            case 3:
                consultarVaga(estacionamento);
                break;
            case 4:
                cout << "Fim.\n";
                break;
            default:
                cout << "Opcao invalida.\n";
                break;
        }
    } while (opcao != 4);

    return 0;
}