/*
  Jacob Marx Date:9/13/18 
  Purpose: Checks if an input is a palindrome
 */


#include <iostream>
#include <cstring>
#include <string.h>

using namespace std;

int main() {
  char input[80];
  for (int i = 0; i < 80; i++) {
    input[i] = 0x00;
  }
  
  cin.get(input, 80);
  cin.get();

  int countg = 0;
  int countb = 0;
  bool palindrome = true;
  bool run = true;

  for (int i = 0; i < 80; i++) {//this for look goes through the input chracter array to count  the amount of numbers and letters in the input
    if ((input[i] >= 'A' && input[i] <= 'Z') || (input[i] >= 'a' && input[i] <= 'z')
	|| (input[i] >= '0' && input[i] <= '9')) {
      countg++;
    }
    countb++;
  }

  if (countg == 0) {
    palindrome = false;
  }

  cout << input << endl;
  cout << "count: " << countg << endl;

  char clean[countg];
  for (int i = 0; i < countg-1; i++) {//this for loop inserts null chracters into the 'cleaned' array
    clean[i] = 0x00;
  }
  
  int index = 0;

  for (int i = 0; i <80; i++) {//this for loop takes all letters and numbers and puts them in   the 'clean' array
    if ((input[i] >= '0' && input[i] <= '9') || (input[i] >= 'A' && input[i] < 'Z')
	|| (input[i] >= 'a' && input[i] <= 'z')){
      clean[index] = input[i];
      index++;
    }
  }

  clean[countg] = 0x00;
  
  cout << clean << endl;

  int right = countg-1;
  
  while (run == true) {
    for (int i = 0; i < countg; i++) {
      cout << clean[i] << ", " << clean[right] << endl;
      if (clean[i] == clean[right]) {
	palindrome = true;
	right--;
      }
      if (clean[i] != clean[right] && right > 0) {//makes palindrome false and stops while loop
	palindrome = false;
	run = false;
      }
      if (palindrome == true && right == 0) {//stops while loop
	run = false;
	palindrome = true;
      }
      // cout << "l: " << clean[i] << endl << "r: " << clean[countg] << endl;
    }
  }

  if (palindrome == false) {
    cout << "That is not a Palindrome!" << endl;
  }

  if (palindrome == true) {
    cout << "That is a Palindrome!" << endl;
  }
  
  return 0;
}
