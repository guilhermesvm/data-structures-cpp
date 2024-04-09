//Biblioteca para listas duplamente encadeadas
#include <iostream>
#include <string>

namespace UPF{
    struct node{
        std::string value;  //valor
        node *previous;     //anterior
        node *next;         //proximo
    };

    struct list{
        node *first = nullptr;        // primeiro nodo
        node *last = nullptr;         // ultimo da fila;
        int num_nodes = 0;  // Quantidade de nodos;

        int size(){
            return num_nodes;
        } //Retorna o tamanho da lista

        void push_front(const std::string &s){
            num_nodes ++;
            node *p = new node;
            p->value = s;
            p->previous = nullptr;
            p->next = first;

            if(first != nullptr){ //A lista não esta vazia
                first-> previous = p;
            }
            first = p; //Sempre será o primeiro

            if(last == nullptr){ //So sera o ultimo quando a lista estiver vazia
                last = p;
            }
        }

        void push_back(const std::string &s){
            num_nodes ++;
            node *p = new node;
            p->value = s;
            p->previous = last;
            p->next = nullptr;

            if(last!=nullptr){
                last->next = p;
            }
            last = p;

            if(first==nullptr){
                first = p;
            }
        }

        void print(){
            node *p = first;        //Pegamos o primeiro elemento da lista
            while(p != nullptr){    //Percorremos enquanto este elemento não for null
                std::cout << '"' << p->value << '"' << ' ';
                p = p->next;
            }
            std::cout << "\n";
        }

        int count(const std::string &s){
            node *p = first;
            int aux = 0;
            while(p != nullptr){  //Percorremos enquanto este elemento não for null
                if(p->value == s){
                    aux ++;
                }
                p = p->next;
            }
            return aux;
        }

        node *find(const std::string &s){
            node *p = first;
            while(p){
                if(p->value == s){
                    return p;
                }
                p = p->next;
            }
            return nullptr;
        }

         void erase(UPF::node *p){
            if(p == first)              //Deletando o primeiro nodo
                first = first -> next;  // O primeiro passa a ser o segundo da lista
            
            if(p == last)                //Deletando o ultimo
                last = last -> previous; // O ultimo passa a ser o penultimo
            
            if(p->next != nullptr) // Existe um posterior
                p->next->previous = p->previous; //Posterior vai apontar p/ o anterior
            
            if(p->previous != nullptr) // Existe um anterior 
                p->previous->next = p->next; //Anterior aponta para o posterior

            delete p ;
            num_nodes--;
        }

        void pop_front(){
            erase(first);
        }
        
        void pop_back(){
            erase(last);
        }


    };
} 

