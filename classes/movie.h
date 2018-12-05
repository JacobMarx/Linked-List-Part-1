
#ifndef MOVIE_H
#define MUSIC_H

#include "media.h"
#include <iostream>

class movie : public media {

 public:
  int getType();

  void setDirector(char*);

  void setDuration(int);

  void setRating(int);

  char* getDirector();

  int getDuration();

  int getRating();

  //constructor
  movie();

  movie(char*, int, int);

  //destructor
  ~movie();

 private:

  //data memebers
  char* director;
  int rating;
  int duration;

};
#endif
