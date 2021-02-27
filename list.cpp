#include <cstdlib>
#include <iostream>
#include "list.h"

using namespace std;

List::List() {
    this->size = 0;
    this->inicio = nullptr;
}

void List::add(Node *node) {
    node->siguiente = this->inicio;  
    if(this->inicio!=NULL){
      this->inicio->anterior = node;
    }
    this->inicio = node;
    cout<<"Se agrego el nodo con ID: "<<node->id<<endl;
}

void List::imprimir(){
    Node* aux = this->inicio;
    while(true){
      if(aux!=NULL){
        cout<<"Valor: "<<aux->id<<endl;
        aux = aux->siguiente;
      }else{
        break;
      }
    }
}

Node * List::ordenar(){
    Node * principal;
    Node * init=this->inicio;
    Node * primero;
    Node * segundo;
    int large = this->large();
    int numeroA;
    int numeroB;
    for(int i=1; i<large; i++){
      //Inicializamos
      principal = init;
      for(int j=0; j<large-1; j++){
        if(principal->siguiente!=NULL && principal!=NULL){
            numeroA  = principal->id;
            numeroB = principal->siguiente->id;
            if(numeroA < numeroB){
              primero = principal;
              segundo = principal->siguiente;
              /*aux = principal;
              principal = principal->siguiente;
              principal->siguiente = aux;*/
              primero->siguiente = segundo->siguiente;
              segundo->anterior = primero->anterior;
              if(primero->anterior!=NULL)
                primero->anterior->siguiente = segundo;
              if(segundo->siguiente!=NULL)
                segundo->siguiente->anterior = primero;
              primero->anterior = segundo;
              segundo->siguiente = primero;
              if(j==0){
                init = principal;
              }
            }
            principal = principal->siguiente;
        }
        //Avanzamos una posicion
      }      
    }

    return principal;
}

int List::large(){
  int size=0;
  Node * aux = this->inicio;
  while(true){
    if(aux!=NULL){
      size++;
      aux = aux->siguiente;
    }else{
      break;
    }
  }
  return size;
}


Node* List::pop() {
    Node* aux = this->inicio;
    this->inicio = this->inicio->siguiente;
    return aux;
}
