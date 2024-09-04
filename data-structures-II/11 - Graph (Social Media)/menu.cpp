#include <iostream>
#include <string>
#include <fstream>
#include "digraph.cpp"

using namespace std;


void add_user(UPF::digraph<string> &rede){
    string name;
    cout << "Nome do usuário: ";
    getline(cin, name);

    rede.insert_node(name);
}

void remove_user(UPF::digraph<string> &rede){
    string name;
    cout << "Nome do usuário: ";
    getline(cin, name);

    rede.remove_node(name);
}

void follow_user(UPF::digraph<string> &rede){
    string from, to;
    cout << "Nome do seguidor: ";
    getline(cin, from);

    cout << "Quem irá seguir: ";
    getline(cin, to);

    rede.insert_link(from, to);
}


void user_dfs(UPF::digraph<string> &rede){
    cout << "Usuário inicial: ";
    string name;
    getline(cin, name);
    rede.dfs(name);

}

void find_path(UPF::digraph<string> &rede){
    string from, to;
    cout << "Usuário inicial: ";
    getline(cin, from);

    cout << "Usuário final: ";
    getline(cin, to);

    auto path = rede.shortest_path(from, to);
    if(path.empty()){
        cout << "Não encontrou!\n";
    } else{
        cout << endl;
        cout << "Distância: " << path.size() << endl;
        for(auto p : path){
            cout << p->value << ' ';
        }
        cout << endl;
        cout << endl;
    }
}

string menu() {
    cout << "Menu de opções:\n";
    cout << "  1. Incluir Usuário\n";
    cout << "  2. Excluir Usuário\n";
    cout << "  3. Seguir Usuário\n";
    cout << "  4. Exibir Dados de Usuário\n";
    cout << "  5. Exibir Rede\n";
    cout << "  6. Exibir Caminho Mais Curto\n";
    cout << "  0. Sair\n";
    cout << "  Escolha uma opção: ";

    string op;
    getline(cin, op);
    return op;
}

int main() {
    UPF::digraph<string> rede;
    const string filename = "rede2.txt";
    rede.load(filename);

    while(true) {
        string opcao = menu();

        if (opcao == "1") {
            add_user(rede); // Inclusão de usuário
        } else if (opcao == "2") {
            remove_user(rede); // Exclusão de usuário
        } else if (opcao == "3") {
            follow_user(rede); // Conexão de usuários
        } else if (opcao == "4") {
            user_dfs(rede);     
        } else if (opcao == "5") {
            rede.show();  // Exibição da rede
        } else if(opcao == "6"){
            find_path(rede);
        } else if (opcao == "0") {
            cout << "Encerrando o programa..." << endl;
            break;
        } else {
            cout << "Opção inválida. Tente novamente.\n" << endl;
        }
    }

    rede.save(filename);
    
    return 0;
}
