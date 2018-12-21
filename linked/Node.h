#ifndef NODE_H
#define NODE_H

class Node {

 public:
  Node* getNext();
  void setNext(Node*);
  Node(Student*);
  ~Node();
  

 private:

  //data memebers
  Student* student;
  Node* next;
};
#endif
