#include <iostream>
#include "Node.h"
#include "Student.h"

using namespace std;

int main() {
  Student* student = new Student();
  Node* node = new Node(student);
}
