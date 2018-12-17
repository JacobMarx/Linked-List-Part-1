//media.h

#ifndef MEDIA_H
#define MEDIA_H

#include <iostream>

class media {

 public:
  virtual int getType() = 0;
  virtual void setTitle(char*);
  virtual void setYear(int);
  char* getTitle();
  int getYear();
  //Destructor
  virtual ~media();
  media();
  
 protected:
  char* title;
  int year;
};

#endif
