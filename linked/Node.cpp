#include <iostream>
#include "Student.h"

using namespace std;

Node::Node() {
  student = NULL;
  next = NULL;
}

Node::~Node() {
 xdelete student;
}

void Node::setNext(Node* newnext) {
  next = newnext;
}

Node* Node::getNext() {
  return next;
}

void Node::setStudent(Student* newstudent) {
  student = newstudent;
}

Student* Node::getStudent() {
  return student;
}


