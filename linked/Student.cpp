#include "Student.h"
#include <cstring>

using namespace std;

Student::Student() {
  fname = new char;
  lname = new char;
  gradepa = 0;
  ident = 0;
}

Student::Student(char* firstname, char* lastname, float gpa, int id) {
  fname = new char[strlen(firstname) +1];
  strcpy(fname, firstname);
  lname = new cha[strlen(lastname) +1];
  strcpy(lname, lastname);
  ident = id;
  gradepa = gpa;
}

Student:~Student() {
  delete[] fname;
  delete[] lname;
  delete ident;
  delete gradepa;
}

void setFirstName(char* firstname) {
  delete[] fname;
  fname = new char[strlen(firstname) +1];
  strcpy(fname, firstname);
}

void setLastName(char* lastname) {
  delete[] lname;
  lname = new char[strlen(lastname) +1];
  strcpy(lname, lastname);
}

void setGpa(float gpa) {
  gradepa = gpa;
}

void setId(int id) {
  ident = id;
}

char* Student::getlastname() {
  return lname;
}

char* Student::getfirstname() {
  return fname;
}

float Student::getgpa() {
  return gradepa;
}

int Student::getid() {
  return ident;
}

