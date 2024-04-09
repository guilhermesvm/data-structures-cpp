#include <cctype>   // para toupper()
#include <cstdlib>  // para exit()
#include <fstream>
#include <iostream>
#include <unordered_map>
#include <vector>
#include <algorithm>

using namespace std;

int main() {
  ifstream arq("clarissa.txt");
  if (!arq) {
    cout << "open() falhou\n";
    exit(1);
  }

  char ch;
  string word;
  unordered_map<string, int> words;

  while (arq.get(ch)) {
    if (isalpha(ch)) {
      word += tolower(ch);
    } else if (word != "") {
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
    sort(VI.begin(), VI.end(), [](auto a, auto b){return (a->second > b->second) || (a->second == b->second && a->first < b->first);});


  ofstream csv("palavras.csv");

  csv << "Palavra,N\n";
  
  for(auto it: VI){
    csv << it->first << "," << it->second << endl;
  }
  csv.close();
}
