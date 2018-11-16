#include <iostream>
#include "videogame.h"
#include "media.h"
#include <cstring>

void add();
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
  /*
  videogame* vg = new videogame();
  media* m;

  m = vg;
  m->printType();

    cout << "hi" << endl;
  */
  
}

Media* add() {
  char input[6];
  clear(input);
  cout << "What type of media do you want to add?" << endl;
  cin.get(input, 5);
  cin.clear();
  cin.ignore(1000, '\n');

  if (strcmp("GAME", input) = 0) {
    videogame* vg = new vide=ogame();
    // Get all of the variables as input
    float newrating;
    char* newtitle;
    int newyear;
    char* newpublisher;

    // Get values via user input
    cout << "what is the title" << endl;
    cin.get(newtitle, 50);
    cin.clear();
    cing.ignore(1000, '\n');
    cout << "what is the rating?" << endl;
    cin >> newrating;
    
    // Add to vg
    vg.setTitle(newtitle);
    vg.setYear(newyear);
    vg.setPublisher(newpublisher);
    vg.setRating(newrating);

    return vg;
  }
}

void clear(char* ar) {
  for(int i = 0; i < strlen(ar); i++) {
    ar[i] = '\0';
  }
}


