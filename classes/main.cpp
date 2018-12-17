#include <iostream>
#include "music.h"
#include "movie.h"
#include "videogame.h"
#include "media.h"
#include <cstring>
#include <vector>
using namespace std;

media* add();
void clear(char* ar);
void look(char* array, vector<media*> data);
void remove(char* array, vector<media*>data);

int main() {
  bool use = true;
  vector<media*> data;
  while(use == true) {
  char input[7];
  input[0] = 'a';
  //cout << input << endl;
  clear(input);
  //cout << input << endl;
  cout << "what would you like to do? ADD, DELETE, or SEARCH for a media?" << endl << "You can also type QUIT to exit the program." << endl;
  cin.get(input, 7); 
  cin.clear();
  cin.ignore(10000, '\n');
  //cout << strlen(input) << endl;
  if (strcmp("ADD", input) == 0) {
      data.push_back(add());
  }
  if (strcmp("DELETE", input) == 0) {
    char title[51];
    cout << "what is the title of the media you want to delete?" << endl;
    clear(title);
    cin.get(title, 50);
    cin.clear();
    cin.ignore(1000, '\n');
    remove(title, data);
  }
  if (strcmp("SEARCH", input) == 0) {
    char title[51];
    cout << "What is the title of the media?" << endl;
    clear(title);
    cin.get(title, 50);
    cin.clear();
    cin.ignore(1000, '\n');
    look(title, data);
  }
  if (strcmp("QUIT", input) == 0) {
    use = false;
  }
  }
}

void look(char* array,vector<media*> data) {
  vector<media*>::iterator it;
  bool found = false;
  for(it = data.begin(); it != data.end(); ++it) {
    if(strcmp(array, (*it)->getTitle()) == 0) {
    cout << "Title: " << (*it)->getTitle() << endl;
    cout << "Year: " << (*it)->getYear() << endl;
    //cout << (*it)->getPublisher() << endl;
    //cout << (*it)->getRating() << endl;
    if((*it)->getType()== 1) {
      cout << "Rating: " << dynamic_cast<videogame*>(*it)->getRating() << endl;
      cout << "Publisher: " << dynamic_cast<videogame*>(*it)->getPublisher() << endl;
    }
    if((*it)->getType() == 2) {
      cout << "Publisher: " << dynamic_cast<music*>(*it)->getPublisher() << endl;
      cout << "Duration: " << dynamic_cast<music*>(*it)->getDuration() << endl;
      cout << "Artist: " << dynamic_cast<music*>(*it)->getArtist() << endl;
    }
    if((*it)->getType() == 3) {
      cout << "Director: " << dynamic_cast<movie*>(*it)->getDirector() <<endl;
      cout << "Duration: " << dynamic_cast<movie*>(*it)->getDuration() << endl;
      cout << "Rating: " << dynamic_cast<movie*>(*it)->getRating() << endl;
    }
    found = true;
  }
  }
  if (found == false) {
    cout << "There was no media that matched your search" << endl;
  }
}
  
//			     cout << "hi" << endl;
  // videogame* vg = new videogame();
  //media* m;

  //m = vg;
  //m->printType();

  //cout << "hi" << endl;
  
void remove(char* array, vector<media*> data) {
  vector<media*>::iterator it;
  char input[5];
  clear(input);
  bool confirm = false;
  cout << "Are you sure you want to delte this media? (YES or NO)" << endl;
  cin.get(input, 5);
  cin.clear();
  cin.ignore(1000, '\n');
  if (strcmp("YES", input) == 0) {
    confirm = true;
    cout << "You deleted the media!" << endl;
    if (strcmp("NO", input) == 0) {
      cout << "You didn't delete the media" << endl;
    }
  }
  for(it = data.begin(); it != data.end(); ++it) {
    if(strcmp(array, (*it)->getTitle()) == 0) {
      if(confirm == true) {
      delete *it;
      it = data.erase(it);
      break;
    }
    }
  }
}

media* add() {
  //cout << "hi there" << endl;
  char input[6];
  clear(input);
  cout << "What type of media do you want to add? 'GAME', 'MUSIC', or 'MOVIE'?" << endl;
  cin.get(input, 6);
  cin.clear();
  cin.ignore(1000, '\n');
  //cout << input << endl;
  if (strcmp("GAME", input) == 0) {
    videogame* vg = new videogame();
    // Get all of the variables as input
    float newrating = 0;
    char* newtitle = new char[51];
    int newyear = 0;
    char* newpublisher = new char[51];
    clear(newtitle);
    clear(newpublisher);
    // Get values via user input
    cout << "what is the title" << endl;
    cin.get(newtitle, 50);
    cin.clear();
    cin.ignore(1000, '\n');
    cout << "who is the publisher?" << endl;
    cin.get(newpublisher, 50);
    cin.clear();
    cin.ignore(1000, '\n');
    cout << "what is the year?" << endl;
    cin >> newyear;
    cin.clear();
    cin.ignore(1000, '\n');
    cout << "what is the rating?" << endl;
    cin >> newrating;
    cin.clear();
    cin.ignore(1000, '\n');
    
    
    
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
    //cout << newartist << endl;
    clear(newtitle);
    clear(newartist);
    //cout << newartist << endl;
    clear(newpublisher);
    //Get values via user input
    cout << "what is the title?" << endl;
    cin.get(newtitle, 50);
    cin.clear();
    cin.ignore(1000, '\n');
    cout << "what is the duration?" << endl;
    cin >> newduration;
    cin.clear();
    cin.ignore(1000, '\n');
    cout << "what is the artist?" << endl;
    cin.get(newartist, 50);
    //cout << newartist << endl;
    cin.clear();
    // cout << newartist << endl;
    cin.ignore(1000, '\n');
    cout << "what is the publisher?" << endl;
    cin.get(newpublisher, 50);
    cin.clear();
    cin.ignore(1000, '\n');
    cout << "what year was it made?" << endl;
    cin >> newyear;
    cin.clear();
    cin.ignore(1000, '\n');
    //cout << "what is the title?" << endl;
    //cin <<title << endl;

    //Add to m
    m->setTitle(newtitle);
    m->setYear(newyear);
    m->setPublisher(newpublisher);
    m->setDuration(newduration);
    m->setArtist(newartist);

    return m;
  }
      
  if (strcmp("MOVIE", input) == 0) {
    
  }movie* m = new movie();
  //Get all the variables
  int newduration = 0;
  int newrating = 0;
  char* newdirector = new char[51];
  char* newtitle = new char[51];
  int newyear = 0;
  clear(newdirector);
  clear(newtitle);
  //get values
  cout << "What is the title of the movie?" << endl;
  cin.get(newtitle, 50);
  cin.clear();
  cin.ignore(1000, '\n');
  cout<< "What is the duration?" << endl;
  cin >> newduration;
  cin.clear();
  cin.ignore(1000, '\n');
  cout << "Who is the director?" << endl;
  cin.get(newdirector, 50);
  cin.clear();
  cin.ignore(1000, '\n');
  cout << "What is the rating?" << endl;
  cin >> newrating;
  cin.clear();
  cin.ignore(1000, '\n');
  cout << "What year was it made?" << endl;
  cin >> newyear;
  cin.clear();
  cin.ignore(1000, '\n');

  //Add to m
  m->setTitle(newtitle);
  m->setYear(newyear);
  m->setDirector(newdirector);
  m->setDuration(newduration);
  m->setRating(newrating);
    
  return m;
}

void clear(char* ar) {
  for(unsigned int i = 0; i < strlen(ar); i++) {
    ar[i] = '\0';
  }
}


