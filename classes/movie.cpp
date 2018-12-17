#include "movie.h"
#include <cstring>

using namespace std;

movie::movie() {
  director = new char;
  title = 0;
  year = 0;
  duration = 0;
  rating = 0;
}

movie::getType() {
  return 3;
}

//constructor
movie::movie(char* direc, int dur, int rat) {
  director = new char[strlen(direc) + 1];
  strcpy(director, direc);
  duration = 0;
  year = 0;
  rating = 0;
  title = 0;
}

movie::~movie() {
  delete[] director;
}

void movie::setDuration(int dur) {
  duration = dur;
}

void movie::setRating(int rat) {
  rating = rat;
}

void movie::setDirector(char* direc) {
  delete[] director;
  director = new char[strlen(direc) + 1];
  strcpy(director, direc);
}

char* movie::getDirector() {
  return director;
}

int movie::getDuration() {
  return duration;
}

int movie::getRating() {
  return rating;
}
