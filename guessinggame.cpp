
#include <iostream>
#include <cstdlib>
using namespace std;

int main()
  {
   int answer = rand() % 100 + 1;
   int guess;
   bool winner = false;
   int guesscount = 0;
  cout << "Welcome to the Guessing Game! Guess any number between 0 and 100 (inclusive)" << endl;
  while (winner != true) {
     cin >> guess;
     if (guess > answer) {
        cout << "You guessed " << guess << " the answer is lower" << endl;
        guesscount += 1;
     }
     if (guess < answer) {
        cout << "You guessed " << guess << " the answer is higher" << endl;
        guesscount += 1;
     }
     if (guess == answer) {
        cout << "You are correct!! " << endl;
        winner = true;
        guesscount += 1;
     }
  }
  cout << "It took you " << guesscount << "tries!!!" << endl;
  return 0;
  }
