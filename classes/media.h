//media.h

#ifndef MEDIA_H
#define MEDIA_H

#include <iostream>

class media {

 public:

  virtual void printType();
  void setTitle(char*);
  void setYear(int);
  
 private:
  char* title;
  int year;
};

#endif
