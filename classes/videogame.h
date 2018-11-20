
#ifndef VIDEOGAME_H
#define VIDEOGAME_H

#include "media.h"
#include <iostream>

class videogame : public media {

 public:
  void printType();

  void setRating(float);

  void setPublisher(char*);
  
  //Constructor
  videogame();

  videogame(char*, float);

  //Copy Constructor
  //videogame(const videogame& source);

  //Overloaded Assignment
  //videogame& operator=(const videogame& source);

  //Destructor
  ~videogame();

 private:

  //data members
  char* publisher;
  float rating;

};
#endif 