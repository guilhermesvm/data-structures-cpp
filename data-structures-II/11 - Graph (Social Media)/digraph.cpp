#include <fstream>
#include <unordered_map>
#include <vector>
#include <cstdlib>
#include <string>
#include <algorithm>
#include <iostream>
#include <unordered_set>
#include <queue>

namespace UPF {

template <typename ValueType> class digraph {
private:
    // Um nodo (vértice) do grafo
    struct node {
      ValueType value;
      std::vector<node*> links;
    };

    std::unordered_map<ValueType, node> nodes;


public:
    void insert_node(const ValueType &val) {
      node n;
      n.value = val;
      nodes[val] = n;
    }

    void remove_node(const ValueType &val){
      //Find pra pegar o ponteiro (ver se existe ou não)
      auto p = find(val); //find da biblioteca digraph
      if(!p) return;

      //Fazer um for percorrendo todo o grafo
      for(auto &n : nodes){
        auto &vector_links = n.second.links;

        auto it = std::find(vector_links.begin(), vector_links.end(), p); //find geral
        
        if(it != vector_links.end()){
          //Dentro do for, deletar o ponteiro de todos os vectors
          vector_links.erase(it);
        }
      }
      //Deletar do map
      nodes.erase(val);
    }


    node* find(const ValueType &val) {
      auto it = nodes.find(val);
      if (it == nodes.end())  // Not found!
        return nullptr;
      return &it->second;  // Se achou retorna o endereço do nodo (first é ponteiro p chave e second é o nodo)
    }


    void insert_link(const ValueType &from, const ValueType &to) {
      auto pfrom = find(from);
      if (!pfrom) return;

      auto pto = find(to);
      if (!pto) return;

      pfrom->links.push_back(pto);
    }


    void show() {
      std::ofstream dot("/tmp/dasa2323131.dot");
      
      dot << "digraph{\n";
      for (const auto& n : nodes) {
        dot << "\t\"" << n.first << "\" -> {";
        for(auto p: n.second.links){
          dot << "\"" << p->value << "\" ";
        }
        dot << "};\n";
      }
      dot << "}\n";
      
      dot.close();

      system("dot /tmp/dasa2323131.dot -Tx11");
    }

    void save(const std::string &filename){ // Const pois não irá ser modificado
      std::ofstream out(filename);
      out << nodes.size() << std::endl;

      for (const auto &n : nodes){
        out << n.first << std::endl;
      }

      for (const auto &n : nodes){
        for (const auto &p : n.second.links){
          out << "\n"
              << n.first
              << "\n"
              << p->value
              << "\n";
        }
      }
    }

    void load(const std::string &filename){
      std::ifstream in(filename);
      if(!in){
        return;
      } 

      std::string line, line2, line0;
      std::getline(in, line);

      int n = std::stoi(line);

      for (int i = 0; i < n; i++){
        std::getline(in, line);
        insert_node(line);
      }

      while (std::getline(in, line0) && std::getline(in, line) && std::getline(in, line2)){
        insert_link(line, line2);
      }
    }

    void dfs(const ValueType &val){
      auto p = find(val);
      if(!p) return;

      std::unordered_set<node *> visited;

      recursive_dfs(p, visited);
      std::cout << '\n';
    }

    std::vector<node *> shortest_path(const ValueType &from, const ValueType &to){
      std::vector<node *> path;
      auto pfrom = find(from);
      if(!pfrom) return path;

      auto pto = find(to);
      if(!pto) return path;

      std::queue<node *> q;
      std::unordered_set<node *> visited;
      std::unordered_map<node *, node *> origin;
      
      bool found = false;;
      q.push(pfrom);
      visited.insert(pfrom);
      origin[pfrom] = nullptr;

      while(!q.empty()){
        auto current = q.front(); //Pega o valor da frente da fila
        q.pop();  // Retira da fila

        if(current ==pto){
          found = true;
          break;
        }

        for(auto n : current->links){
          if(visited.count(n) == 0){ //Se não foi visitado
            q.push(n);
            visited.insert(n);
            origin[n] = current;
          }
        }
      }
      if(found){
        for(auto p = pto; p != nullptr; p = origin[p]){
          path.push_back(p);
        }
      }
      std::reverse(path.begin(), path.end());
      return path;
    }

private:
    void recursive_dfs(node *p, std::unordered_set<node *> &visited){   
      std::cout << p->value << ' ';
      visited.insert(p);

      for(auto link : p->links) {
        if(visited.count(link) == 0)//Se o link não foi visitado, visitar
          recursive_dfs(link, visited);
      }
    }
  };
}  // namespace UPF