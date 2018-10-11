#include <iostream>
#include <vector>
#include <cstring>
#include <math.h>


using namespace std;

struct Student {
  char firstN[15];
  char lastN[15];
  int id;
  float gpa;
};

void DELETEStudent(vector<Student*>* list);
void ADDStudent(vector<Student*>* list);
void PRINTStudent(vector<Student*>* list);

bool running = true;

int main() {

  vector<Student*>* vect = new vector<Student*>();
 
  while (running == true) {
    char input[7];
    cout << "Do you want to ADD, DELETE, or PPRINT students type your answer. (e.g. 'ADD')" << endl;
    cin.get(input, 7);
    cin.clear();
    cin.ignore(10000, '\n');
    if (strcmp(input, "ADD") == 0) {
      ADDStudent(vect);
      cout << vect -> size() << endl;
    }
    //cout << strcmp(input, "DELETE") << endl;
    //cout << input << endl;
    if (strcmp(input, "DELETE") == 0) {
      DELETEStudent(vect);  
    }
    if (strcmp(input, "PRINT") == 0) {
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
  cin.clear();
  cin.ignore(10000, '\n');
  return;
}

void PRINTStudent(vector<Student*>* list) {
  int student = 1;
  for (vector<Student*>::iterator it = list -> begin(); it != list -> end(); ++it) {
    /*
    cout << endl;
    cout << "Student: " << student << endl;
    cout << "First Name: " << (*it) -> firstN << endl;
    cout << "Last Name: " << (*it) -> lastN << endl;
    cout << "ID: " << (*it) -> id << endl;
    cout << "GPA: " << (*it) -> gpa << endl;
    student++;
    */
    cout << endl;
    cout << (*it) -> firstN << " " << (*it) -> lastN << ", " << (*it) -> id << ", "
	 << (*it) -> gpa  << endl;
    cout << endl;
  }
  cout << "hi" << endl;
  cout << list -> size() << endl;
}

void DELETEStudent(vector<Student*>* list) {
  //cout << "hello" << endl;
  char idint[7];
  cout << "Enter the ID of the student you wish to delete." << endl;
  cin.get(idint, 7);
  cin.ignore(10000, '\n');
  //cout << idint << endl;
  int idcomp = 0;
  for (int i = 0; i < strlen(idint); i++) {
    //cout << idint[i] << endl;
    int goon = pow(10, strlen(idint) - i - 1);
    //cout << goon << endl;
    idcomp += (idint[i] - '0') * goon;
    //cout << idcomp << endl;
  }
  cout << idcomp << endl;
  for (vector<Student*>::iterator it = list -> begin(); it != list -> end(); ++it) {
    if ((*it) -> id - idcomp == 0) {
      list -> erase (*it);
    cout << "hi" << endl;
    }
  }
  
}

