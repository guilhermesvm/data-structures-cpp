#include <iostream>
#include "namespace-tree2.cpp"

using namespace std;
using namespace tree;

int main(){
    node *root = create_node("10");
    root->left = create_node("4");
    root->left->right = create_node("2");
    root->right = create_node("55");
    root->right->left = create_node("71");
    root->right->right = create_node("40");
    root->right->right->left = create_node("38");

    cout << "DFS PRE-order: ";
    DFS_pre_NLR(root);
    cout << endl;
    cout << endl;

    cout << "DFS IN-order: ";
    DFS_in_LNR(root);
    cout << endl;
    cout << endl;

    cout << "DFS POS-order: ";
    DFS_pos_LRN(root);
    cout << endl;

    clear(root);
    
    return 0;
}