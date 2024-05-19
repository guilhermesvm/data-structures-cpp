#include <fstream>
#include <unordered_map>
#include <vector>
#include <cstdlib>

namespace UPF {

template <typename ValueType>
class digraph {
 private:
  // Um nodo (vértice) do grafo
  struct node {
    ValueType value;
    std::vector<node*> links;
  };

  std::unordered_map<ValueType, node> nodes;

 public:
  void insert_node(const ValueType& val) {
    node n;
    n.value = val;
    nodes[val] = n;
  }

  node* find(const ValueType& val) {
    auto it = nodes.find(val);
    if (it == nodes.end())  // Not found!
      return nullptr;
    return &it->second;  // Se achou retorna o endereço do nodo
  }

  void insert_link(const ValueType& from, const ValueType& to) {
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
};
}  // namespace UPF