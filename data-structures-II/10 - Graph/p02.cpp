#include "digraph.cpp"

int main(){
    UPF::digraph<int> g;

    for(int i=0; i<6; i++){}
        g.insert_node(i);
        
    g.insert_link(0, 1);
    g.insert_link(0, 3);
    g.insert_link(1, 2);
    g.insert_link(1, 3);
    g.insert_link(2, 2);
    g.insert_link(2, 3);
    g.insert_link(3, 0);
    g.insert_link(5, 4);
    g.show();
}

