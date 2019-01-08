#ifndef NODE_H
#define NODE_H

#include "Student.h"

class Node {

 public:
  Node(Student*);

  ~Node();

  Node* getNext();

  void setNext(Node* newnext);

  Student getStudent();

  void setStudent(Student* newstudent);
  

 private:

  //data memebers
  Student* student;
  Node* next;
};
#endif
