#include <cstdlib>
#include <iostream>
#include "list.h"
typedef Node* NodoLista;
typedef List* Lista;
using namespace std;

int main() {
    NodoLista nodo1 = new Node(1);
    NodoLista nodo2 = new Node(2);
    NodoLista nodo3 = new Node(3);
    NodoLista nodo4 = new Node(4);
    Lista lista1 = new List();
    lista1->add(nodo2);
    lista1->add(nodo1);
    lista1->add(nodo3);
    lista1->add(nodo4);
    //cout<<"Se extrajo el nodo con ID: "<<lista1->pop()->id<<endl;
    lista1->imprimir();
    lista1->ordenar();
    cout<<"Lista Ordenada"<<endl;
    lista1->imprimir();
}