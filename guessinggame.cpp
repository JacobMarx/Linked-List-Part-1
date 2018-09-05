
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
  while (winner != true) { //while loop that uses a boolean and once the user guesses the right answer the boolean turns true and ends the loop
     cin >> guess;
     if (guess > answer) { //if the guess is higher in the answer it tells the user that and adds one to guess counter
        cout << "You guessed " << guess << " the answer is lower" << endl;
        guesscount += 1;
     }
     if (guess < answer) { //if the guess is lower than the answer it tell the user that and adds one to the guess counter
        cout << "You guessed " << guess << " the answer is higher" << endl;
        guesscount += 1;
     }
     if (guess == answer) { //when the guess equals the answer it tells the user they are correct and stops the while loop
        cout << "You are correct!! " << endl;
        winner = true;
        guesscount += 1;
     }
  }
  cout << "It took you " << guesscount << "tries!!!" << endl;
  return 0;
  }
