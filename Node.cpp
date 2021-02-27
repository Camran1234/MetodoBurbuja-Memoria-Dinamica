#include <cstdlib>
#include <iostream>
#include "Node.h"
using namespace std;

Node::Node(int id) {
    this->siguiente = nullptr;
    this->anterior = nullptr;
    this->id = id;
};