#include <cctype>   // para toupper()
#include <cstdlib>  // para exit() e system()
#include <fstream>
#include <iostream>
#include <unordered_map>
#include <vector>
#include <algorithm>

using namespace std;

const int N=30;

int main(){

  ifstream arq("clarissa.txt");
  if (!arq){
    cout << "open() falhou\n";
    exit(1);
  }

  char ch;
  string word;
  unordered_map<string, int> words;

  while (arq.get(ch)){
    if (isalpha(ch)){
      word += tolower(ch);
    } else if (word != ""){
      words[word]++;
      word = "";
    }
  }

  arq.close();

  cout << words.size() << " palavras distintas encontradas\n";

  //Ordenação indireta
  vector<unordered_map<string, int>::iterator> VI;
  VI.reserve(words.size());

  for(auto it = words.begin(); it !=words.end(); it++){
    VI.push_back(it);
  }

  //Sort no it com lambda
    partial_sort(VI.begin(), VI.begin()+N, VI.end(), [](auto a, auto b){return (a->second > b->second) || (a->second == b->second && a->first < b->first);});


  //TODO: Exportar para HTML
  ofstream html("palavras.html");

  html << "<!DOCTYPE html>\n";
  html << "<html>\n";
  html << "<head>\n";
  html << "<title>Top "<< N << " Words</title>\n";
  html << "</head>\n";
  html << "<body>\n";
  html << "<h1> Top " << N << " Words</h1>\n";
  html << "<table border=1 width=200px heigth=200px>\n";
   
  int i=0;
  for(auto it: VI){
    html<<"<tr align=center><td>"
        << it->first
        << "</td><td>" 
        << it->second 
        << "</td></tr>\n";
    if(++i==N) break;
  }

  html << "<table>\n";
  html << "</body>\n";
  html << "</html>\n";
  html.close();

  system("xdg-open palavras.html");
}
