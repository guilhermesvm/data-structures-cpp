#include <string>
#include <iostream>
#include <algorithm>

using namespace std;

namespace tree{
    struct node{
        string value;
        node *left, *right;
    };

    node *create_node(const string &value){
        node *pointer = new node;
        pointer->value = value;
        pointer->left = nullptr;
        pointer->right = nullptr;
        return pointer;
    }

    int height(node* root){
        if(root == nullptr) return -1;
        return max(height(root->left), height(root->right)) + 1;
    }

    void show(node *root, int level=0, const string &prefix = "Root: "){
        //TODO Mostrar a árvore
        if(!root) return;
            
        auto ident = string(level * 4, ' ');

        cout << ident << prefix << root->value << endl;
        show(root->left, level + 1, "Left: ");
        show(root->right, level + 1, "Right: ");
    }

    void clear(node *root){
        // TODO: Deleta todos os nodos da árvore, recursivamente
    }
}