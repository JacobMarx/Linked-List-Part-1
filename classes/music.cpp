#include "music.h"
#include <cstring>

using namespace std;

music::music() {
  publisher = new char;
  title = 0;
  year = 0;
  artist = new char;
  duration = 0;
}

music::getType() {
  return 2;
}

//constructor
music::music(char* pub, int dur, char* art) {
  publisher = new char[strlen(pub) + 1];
  strcpy(publisher, pub);
  duration = 0;
  year = 0;
  artist = new char[strlen(art) + 1];
  strcpy(artist, art);
  title = 0;
}

music::~music() {
  delete[] publisher;
  delete[] artist;
}

void music::setDuration(int dur) {
  duration = dur;
}

void music::setPublisher(char* pub) {
  delete[] publisher;
  publisher = new char[strlen(pub) + 1];
  strcpy(publisher, pub);
}

void music::setArtist(char* art) {
  delete[] artist;
  artist = new char[strlen(art) + 1];
  strcpy(artist,art);
}

char* music::getPublisher() {
  return publisher;
}

int music::getDuration() {
  return duration;
}

char* music::getArtist() {
  return artist;
}
