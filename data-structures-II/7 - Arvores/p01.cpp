#include <iostream>
#include "tree.cpp"

using namespace std;
using namespace tree;

int main(){
    node *root = create_node("A"); //Cria um nodo root com o valor "A", com filhos null
    root->left = create_node("B");
    root->left->left = create_node("D");
    root->left->left->left = create_node("G");
    root->right = create_node("C");
    root->right->left = create_node("E");
    root->right->left->left = create_node("H");
    root->right->left->right = create_node("I");
    root->right->right = create_node("F");

    cout << "Altura: " << height(root) << endl;

    show(root);
    
    return 0;
}
