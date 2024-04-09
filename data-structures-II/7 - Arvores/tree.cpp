#include <string>
#include <iostream>
#include <algorithm>

using namespace std;

namespace tree{

    struct node{
        std::string value;
        node *left, *right;
    };

    node *create_node(const std::string &value){
        node *pointer = new node;
        pointer->value = value;
        pointer->left = nullptr;
        pointer->right = nullptr;
        return pointer;
    }

    int height(node* root){
        if(root == nullptr){
            return -1;
        } 
        else{
            return max(height(root->left), height(root->right)) + 1;
        }
    }

    void show(node *root){
        //TODO Mostrar a árvore
        if(root == nullptr){
            cout << "Árvore não possui nodos\n";
        } else{
           cout << "("<< root->value << ")\n";
        }
    }
}