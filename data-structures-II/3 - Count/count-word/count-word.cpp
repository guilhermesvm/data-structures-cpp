#include <iostream>
#include <fstream>
#include <cstdlib> // para exit()
#include <string.h>
#include <vector>
#include <algorithm>

using namespace std;

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
    vector<wc> words;
    
    while(arq.get(c)){ //Extrai 1 caracter por vez e armaneza na variável 'c'
        if(isalpha(c)){
            word += tolower(c);
        } 
        else if (word != ""){   
            //TODO: Teste se word está no vector
            bool found = false;

            for(size_t i=0; i < words.size(); i++){
                // Se está, só incrementa o campo count  
                if(words[i].word == word){
                    words[i].count++;
                    found = true;
                    break;
                }
            }

            //Se não está, insere com count = 1
            if(!found){
                words.push_back({word, 1});
            }
            word = "";
        }  
    }

    arq.close();

    cout << words.size() << " palavras distintas encontradas" << endl;

    ofstream csv("words.csv");
    csv << "Palavra, N\n";

    for(auto p: words){
        csv << p.word << "," << p.count << endl;
    }

    csv.close();
}