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

    void show(node *root, int level=0, const string &prefix = "Root: "){
        if(!root) return;
            
        auto ident = string(level * 4, ' ');

        cout << ident << prefix << root->value << endl;
        show(root->left, level + 1, "Left: ");
        show(root->right, level + 1, "Right: ");
    }

   void clear(node* &root){
        if(root){
            clear(root->left);
            clear(root->right);
            delete(root);
            root = nullptr;
        }
    }


 //	Insere o valor passado em s na árvore binária de pesquisa (BST)
    void bst_insert(node*& root, const std::string& s){
        if(!root) root = create_node(s);
        
         else if(s < root->value){
            bst_insert(root->left, s);
        } else{
            bst_insert(root->right, s);
        }
    }

 // Procura o valor passado em s na BST. Retorna true se achou, false caso contrário
    bool bst_find(node*& root, const std::string& s){
        if(!root) return false;
        if(s == root->value) return true;   
        if(root->value > s) return bst_find(root->left, s);
        return bst_find(root->right, s);
        return false;
    }

    void bst_delete(node* &root, const std:: string&s){
        
    }
}