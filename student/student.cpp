#include <iostream>
#include <vector>
#include <cstring>

using namespace std;

struct Student {
  char firstN[15];
  char lastN[15];
  int id;
  float gpa;
};

void ADDStudent(vector <Student*>* list);
void PRINTStudent(vector <Student*>* list);

bool running = true;

int main() {
 
  while (running == true) {
    char input[7];
    input[6] = '\0';
    vector <Student*>* vect = new vector<Student*>();
    cout << "Do you want to ADD, DELETE, or PPRINT students type your answer. (e.g. 'ADD')" << endl;
    cin.get(input, 6);
    cin.get();
    if (strcmp(input, "ADD") == 0) {
    ADDStudent(vect);
    }
    if (strcmp(input,"DELETE") == 0) {

    }
    if (strcmp(input,"PRINT") == 0) {
    PRINTStudent(vect);
    }
  }
}

void ADDStudent(vector <Student*>* list) {
  Student* newStudent = new Student();
  cout << "What is the students first name?" << endl;
  cin >> newStudent -> firstN;
  cout << "What is the student's last name?" << endl;
  cin >> newStudent -> lastN;
  cout << "Enter the studen'ts id number. Maximum of 6 characters." << endl;
  cin >> newStudent -> id;
  cout << "What is the student's gpa" << endl;
  cin >> newStudent -> gpa;
  list -> push_back(newStudent);
  return;
}

void PRINTStudent(vector <Student*>* list) {
  for (vector <Student*>:: iterator it = list->begin() ; it != list->end(); ++it) {

    cout << (*it) -> firstN << endl;

  }

}

