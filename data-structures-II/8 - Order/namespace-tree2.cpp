#include <iostream>
#include <string>
#include <algorithm>
#include <queue>

using namespace std;

namespace tree{
    struct node{
        string value;
        node *left, *right;
    };

    node *create_node(const string &value){
        node *p = new node;
        p->value = value;
        p->left = nullptr;
        p->right = nullptr;
        return p;
    }

    void DFS_pre_NLR(node *root){
        if(!root) return;
        
        cout << root->value << ' ';
        DFS_pre_NLR(root->left);
        DFS_pre_NLR(root->right);
    }

    void DFS_in_LNR(node *root){
        if(!root)return;
       
        DFS_in_LNR(root->left);
        cout << root->value << ' ';
        DFS_in_LNR(root->right);
    }

    void DFS_pos_LRN(node *root){
        if(!root) return;

        DFS_pos_LRN(root->left);
        DFS_pos_LRN(root->right);
        cout << root->value <<  ' ';
    }

    void BFS(node *root){
        if(!root) return;

        queue<node *> queue;
        queue.push(root);

        while(queue.size() > 0){
            auto p =  queue.front();

            cout << p->value << ' ';

            if(p->left){
                queue.push(p->left);
            } 
            if(p->right){
                queue.push(p->right);
            }
            
            queue.pop();
        }
    }

    void clear(node *root){
        // TODO: Deleta todos os nodos da árvore, recursivamente
    }
}