#include <iostream>
#include "videogame.h"
#include "media.h"
#include <cstring>
#include <vector>

media* add();
void clear(char* ar);
void look(char* array);
void remove(char* array);

using namespace std;

int main() {
  bool use = true;
  vector<media*> data;
  while(use == true) {
  char input[7];
  input[0] = 'a';
  cout << input << endl;
  clear(input);
  cout << input << endl;
  cout << "what would you like to do? ADD, DELETE, or SEARCH for a media?" << endl << "You can also type QUIT to exit the program." << endl;
  cin.get(input, 6); 
  cin.clear();
  cin.ignore(10000, '\n');
  cout << strlen(input) << endl;
  if (strcmp("ADD", input) == 0) {
      data.push_back(add());
  }
  if (strcmp("DELETE", input) == 0) {
    char title[51];
    cout << "what is the title of the media you want to delete?" << endl;
    clear(title);
    cin.get(title, 50);
    cin.clear();
    cin.ignore(1000. '\n');
    remove(title);
  }
  if (strcmp("SEARCH", input) == 0) {
    char title[51];
    cout << "What is the title of the media?" << endl;
    clear(title);
    cin.get(title, 50);
    cin.clear();
    cin.ignore(1000, '\n');
    look(title);
  }
  if (strcmp("QUIT", input) == 0) {
    use = false;
  }
  }
}

void look(char* array) {
  vector<media*>::iterator it;
  for(it = data.begin(); it != data.end(); ++it) {
    if(strcmp(array, (*it)->getTitle()) == 0) {
    cout << (*it)->getTitle() << endl;
    cout << (*it)->getYear() << endl;
    //cout << (*it)->getPublisher() << endl;
    //cout << (*it)->getRating() << endl;
    if((*it)->getType()== 1) {
      cout << dynamic_cast<videogame*>(*it)->getRating() << endl;
      cout << dynamic_cast<videogame*>(*it)->getPublisher() < endl;
    }
    if((*it)->getType() == 2) {
      cout << dynamic_cast<music*>(*it)->getPublisher() << endl;
      cout << dynamic_cast<music*>(*it)->getDurationg() << endl;
      cout << dynamic_cast<music*>(*it)->getArtist() << endl;
    }
    if((*it)->getType() == 3) {
      cout << dynamic_cast<movie*>(*it)->getDirector() <<endl;
      cout << dynamic_cast<movie*>(*it)->getDuration() << endl;
      cout << dynamic_cast<movie*>(*it)->getRating() << endl;
    }
  }
  }
}
  
//			     cout << "hi" << endl;
  // videogame* vg = new videogame();
  //media* m;

  //m = vg;
  //m->printType();

  //cout << "hi" << endl;
  
void remove(char* array) {
  for(it = data.begin(); it != data.end(); ++it) {
    if(strcmp(array, (*it)->getTitle()) == 0) {
      delete *it;
      data.erase(it);
      break;
    }
  }
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


