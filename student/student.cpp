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
void commands();

bool running = true;

int main() {

  vector<Student*>* vect = new vector<Student*>();
 
  while (running == true) {
    char input[10];
    cout << "Do you want to ADD, DELETE, or PPRINT students type your answer. For help type 'COMMANDS'." << endl;
    cin.get(input, 10);
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
    if (strcmp(input, "QUIT") == 0) {
      break;
    }
    if (strcmp(input, "COMMANDS") == 0) {
      commands();
    }
  }
}

void ADDStudent(vector <Student*>* list) {
  Student* newStudent = new Student();
  char input[100000];
  int count = 6;
  int intcon = 0;
  cout << "What is the students first name?" << endl;
  cin >> newStudent -> firstN;
  cout << "What is the student's last name?" << endl;
  cin >> newStudent -> lastN;
  cin.clear();
  cin.ignore(1000, '\n');
  cout << "Enter the studen'ts id number. Maximum of 6 characters." << endl;
  cin.get(input, 10000);
  cin.clear();
  cin.ignore(1000, '\n');
  if (strlen(input) > 7) {
    cout << "Input invalid, the id must be only 6 integers." << endl;
  }
  for (int i = 0; i < 6; i++) {
    if (input[i] <= 57 && input[i] >= 47) {
      count--;
    }
    if (input[i] > 57 || input [i] < 47) {
      cout << "Input invalid, the id must be only 6 integers." << endl;
    }
  }
  for (int i = 0; i < strlen(input); i++) {
    //cout << idint[i] << endl;
    int goon = pow(10, strlen(input) - i - 1);
    //cout << goon << endl;
    intcon += (input[i] - '0') * goon;
    //cout << idcomp << endl;
  }
  if (count == 0) {
    newStudent -> id = intcon;
  }
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
  //cout << "hi" << endl;
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
      delete *it;
      list -> erase (it);
      break;
      //cout << "hi" << endl;
    }
  }
  
}

void commands() {

  cout << "-----------> COMMANDS <-----------" << endl << endl << "'ADD' = Adds a student to the list with given information." << endl <<
    "'PRINT' = Print all students in the list to the console." << endl << "'DELETE' = Deletes the student from the list with their specified id." <<
    endl << "'QUIT' = Exits the program." << endl << endl << "----------------------------------" << endl;

  return;
  
}

