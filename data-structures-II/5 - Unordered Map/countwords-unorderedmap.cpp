#include <cctype>   // para toupper()
#include <cstdlib>  // para exit()
#include <fstream>
#include <iostream>
#include <unordered_map>

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
  
  ofstream csv("palavras.csv");

  csv << "Palavra,N\n";
  
  for(auto p: words){
    csv << p.first << "," << p.second << endl;
  }
  csv.close();
}
