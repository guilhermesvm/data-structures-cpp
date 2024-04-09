#include <iostream>
#include <fstream>
#include <cstdlib> // para exit()
#include <cctype>
#include <string.h>
#include <vector>
#include <algorithm>

using namespace std;

const int HASH_SIZE = 10;   //Usar numero primo para tamanho da tabela hash (da menos colisão e espalha melhor)

//Função hash básica para string
//Soma dos códigos ASCII 
size_t hash_fn(const string &s){
    size_t soma = 0;

    for(auto c: s){
        soma += size_t (c);
    }
    return soma % HASH_SIZE;
}


struct wc{
    string word;
    int count;
};

int main(){

    ifstream arq("clarissa.txt");
    if(!arq){
        cout << "Arquivo falhou ao abrir." << endl;
        exit(1);
    }

    char c;
    string word;
    vector<wc> words[HASH_SIZE];    //Vetor de vetores
    
    while(arq.get(c)){ //Extrai 1 caracter por vez e armaneza na variável 'c'
        if(isalpha(c)){
            word += tolower(c);
        } 
        else if (word != ""){   
            //Teste se word está no vector
            bool found = false;

            size_t h = hash_fn(word);

            for(size_t i=0; i < words[h].size(); i++){
                // Se está, só incrementa o campo count  
                if(words[h][i].word == word){
                    words[h][i].count++;
                    found = true;
                    break;
                }
            }

            //Se não está, insere com count = 1
            if(!found){
                words[h].push_back({word, 1});
            }
            word = "";
        }  
    }

    arq.close();

    ofstream csv("words-hash.csv");

    csv << "Palavra, N\n";

    size_t total = 0;
    for(size_t h=0; h < HASH_SIZE; h++){
        cout << h << ": " << words[h].size() << endl;
        total += words[h].size();

        for(auto p: words[h]){
        csv << p.word << "," << p.count << endl;
        }
    }
   
    csv.close();

    cout << total << " palavras distintas encontradas." << endl;
}