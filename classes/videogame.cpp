#include "videogame.h"
#include <cstring>
using namespace std;

videogame::videogame() {
  publisher = new char;
  title = 0;
  year = 0;
  rating = 0;
}

//Constructor
videogame::videogame(char* pub, float rating){
  publisher = new char[strlen(pub) + 1];
  strcpy(publisher, pub);
  rating = 0;
  year = 0;
  title = 0;
}
/*

//Copy constructor
videoGame::videoGame(const videoGame& source) {
  cout << "Copy Constructor called." << endl;

  title = new char;
  year = source.year;
  publisher = new  ;
  rating = source.rating;

  strcpy(title,source.title); 
}
*/
void videogame::printType() {
  cout << "hola como estas you tengo no idea que yo haciendo" << endl;
}

void videogame::setRating(float rat) {
  rating = rat;
}

void videogame::setPublisher(char* pub) {
  delete publisher;
  publisher = new char[strlen(pub) + 1];
  strcpy(publisher, pub);
}
