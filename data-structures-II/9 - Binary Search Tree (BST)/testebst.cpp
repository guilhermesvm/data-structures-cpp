#include <iostream>
#include "namespace-tree3.cpp"

void help();

int main()
{
    tree::node* values = nullptr; // BST inicialmente vazia
    std::cout << "Binary Search Tree\n";

    std::string cmd, val;
    while (true) {
        std::cout << "[add value | find value | print | help | exit]: ";
        std::cin >> cmd;
        if (cmd == "add") {
            std::cin >> val;
            tree::bst_insert(values, val);
        } else if (cmd == "find") {
            std::cin >> val;
            std::cout << (tree::bst_find(values, val) ? "Found\n" : "Not found\n");
        } else if (cmd == "print") {
            tree::show(values);
        } else if (cmd == "help") {
            help();
        } else if (cmd == "exit") {
            break;
        } else {
            std::cout << "Invalid command!\n";
        }
    }

    clear(values);
}

void help()
{
    std::cout << "Input a command:\n"
                 "\tadd value: Insert a new value in the BST.\n"
                 "\tfind value: Search for value in the BST.\n"
                 "\tprint: Show the tree.\n"
                 "\thelp: Show this help.\n"
                 "\texit: Exit the program.\n\n";
}