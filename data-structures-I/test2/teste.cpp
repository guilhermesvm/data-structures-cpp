/*
    Implementar na biblioteca list.cpp uma nova função:

        void remove_maior()

    Esta função deve remover o nodo com maior valor lexicográfico, ou seja o maior em ordem alfabética.
*/

#include <iostream>
#include <cassert>
#include "list.cpp"

using namespace std;

int main()
{
    using namespace UPF;

   list myList1;
    myList1.push_back("apple");
    myList1.push_back("banana");
    myList1.push_back("orange");
    myList1.push_back("kiwi");
    myList1.print();  // Deve imprimir: "apple banana orange kiwi"
    myList1.remove_maior();
    myList1.print();  // Deve imprimir: "apple banana kiwi"
    assert(myList1.first->next->next == myList1.last);
    assert(myList1.last->previous->previous == myList1.first);

    // Caso de teste 2: Remover maior valor no final da lista
    list myList2;
    myList2.push_back("grape");
    myList2.push_back("apple");
    myList2.push_back("pear");
    myList2.push_back("kiwi");
    myList2.print();  // Deve imprimir: "grape apple pear kiwi"
    myList2.remove_maior();
    myList2.print();  // Deve imprimir: "grape apple kiwi"
    assert(myList2.first->next->next == myList2.last);
    assert(myList2.last->previous->previous == myList2.first);

    // Caso de teste 3: Remover maior valor no início da lista
    list myList3;
    myList3.push_back("pear");
    myList3.push_back("kiwi");
    myList3.push_back("banana");
    myList3.push_back("apple");
    myList3.print();  // Deve imprimir: "pear kiwi banana apple"
    myList3.remove_maior();
    myList3.print();  // Deve imprimir: "kiwi banana apple"
    assert(myList3.first->next->next == myList3.last);
    assert(myList3.last->previous->previous == myList3.first);

    std::cout << "Teste remove_maior passou com sucesso!" << std::endl;
}
