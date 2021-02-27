#include <cstdlib>
#include "Node.h"
class List {
    public:
    List();
    void add(Node *nodo);
    void imprimir();
    Node* pop();
    Node* ordenar();
    private:
    Node *inicio;
    Node *anterior;
    int large();
    int size;
};