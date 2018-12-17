#include <iostream>
#include "media.h"
#include <cstring>

using namespace std;

media::media() {
}

void media::setTitle(char* title) {
  delete[] this->title;
  this->title = new char[strlen(title) +1]; 
  strcpy(this->title, title);
  //this->title can be newtitle
}

void media::setYear(int year) {
  this->year = year;
  //year = newyear
}

char* media::getTitle() {
  return title;
}

int media::getYear() {
  return year;
}

media::~media() {
  delete[] title;
}
  


