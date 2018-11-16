#include "videogame.h"

using namespace std;


/*
//Constructor
videoGame::videoGame(char*title[], int year, char* publisher[], float rating){
  title = t;
  year = 0;
  publisher = pub;
  rating = 0;
}

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

videogame::videogame() {

}
