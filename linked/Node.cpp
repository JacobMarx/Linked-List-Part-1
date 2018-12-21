#include <iostream>

using namespace std;

Node::Node() {
  student = NULL;
  next = NULL;
}

Node::~Node() {
  
}

void Node::setNext(Node* newnext) {
  next = newnext;
}

void Node::getNext() {
  return next;
}
