#include <iostream>
#include "videogame.h"
#include "media.h"
#include <cstring>
#include <vector>

media* add();
void clear(char* ar);

using namespace std;

int main() {

  vector<media*> data;
  
  char input[7];
  input[0] = 'a';
  cout << input << endl;
  clear(input);
  cout << input << endl;
  cout << "what would you like to do? Add, , or  a meadia?" << endl;
  cin.get(input, 6); 
  cin.clear();
  cin.ignore(10000, '\n');
  cout << strlen(input) << endl;
  if (strcmp("ADD", input) == 0) {
      data.push_back(add());
  }
  if (strcmp("DELETE", input) == 0) {
    //delete
  }
  vector<media*>::iterator it;
  for(it = data.begin(); it != data.end(); ++it) {
    cout << (*it)->getTitle() << endl;
    cout << (*it)->getYear() << endl;
    //cout << (*it)->getPublisher() << endl;
    //cout << (*it)->getRating() << endl;
    if((*it)->getType()== 1) {
      cout << dynamic_cast<videogame*>(*it)->getRating() << endl;
      cout << dynamic_cast<videogame*>(*it)->getPublisher() < endl;
    }
    if((*it)-getType() == 2) {
      cout << dynamic_cast<music*>(*it)->getPublisher() << endl;
      cout << dynamic_cast<music*>(*it)->getDurationg() << endl;
      cout << dynamic_cast<music*>(*it)->getArtist() << endl;
    }
  }
  
  
			     cout << "hi" << endl;
  // videogame* vg = new videogame();
  //media* m;

  //m = vg;
  //m->printType();

  //cout << "hi" << endl;
  
  
}

media* add() {
  cout << "eat my ass" << endl;
  char input[6];
  clear(input);
  cout << "What type of media do you want to add?" << endl;
  cin.get(input, 5);
  cin.clear();
  cin.ignore(1000, '\n');

  if (strcmp("GAME", input) == 0) {
    videogame* vg = new videogame();
    // Get all of the variables as input
    float newrating = 0;
    char* newtitle = new char[51];
    int newyear = 0;
    char* newpublisher = new char[51];

    // Get values via user input
    cout << "what is the title" << endl;
    cin.get(newtitle, 50);
    cin.clear();
    cin.ignore(1000, '\n');
    cout << "what is the rating?" << endl;
    cin >> newrating;
    
    
    // Add to vg
    vg->setTitle(newtitle);
    vg->setYear(newyear);
    vg->setPublisher(newpublisher);
    vg->setRating(newrating);
    
    return vg;
  }

  if (strcmp("MUSIC", input) == 0) {
    music* m = new music();
    //Get all of the variavle as input
    int newduration = 0;
    char* newartist = new char[51];
    int newyear = 0;
    char* newpublisher = new char[51];
    char* newtitle = new char[51];

    //Get values via user input
    cout << "what is the title?" << endl;
    cin.get(newtitle, 50);
    cin.clear();
    cin.ignore(1000, '\n');
    cout << "what is the duration?" << endl;
    cin >> newduration;
    cout << "what is the artist?" << endl;
    cin.get(newartist, 50);
    cin.clear();
    cin.ignore(1000, '\n');
    cout << "what is the publisher?" << endl;
    cin.get(newpublisher, 50);
    cin.clear();
    cin.ignore(1000, '\n');
    cout << "what is the title?" << endl;
    cin << newtitle;

    //Add to m
    m->setTitle(newtitle);
    m->setYear(newyear);
    m->setPublisher(newpublisher);
    m->setDuration(newduration);
    m->setArtist(newartist);

    return m;
  }
      
  if (strcmp("MOVIE", input) == 0) {

  }
  return 0;
}

void clear(char* ar) {
  for(unsigned int i = 0; i < strlen(ar); i++) {
    ar[i] = '\0';
  }
}


