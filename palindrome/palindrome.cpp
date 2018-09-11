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
  int count = 0;
  bool palindrome = true;
  bool run = true;

  for (int i = 0; i < 80; i++) {
    if (input[i] >= 48 && input[i] <= 57 || input[i] >= 65 && input[i] <= 90
	|| input[i] >= 97 && input[i] <= 122) {
      count ++;
    }
  }
  cout << input << endl;
  cout << "count: " << count << endl;

  char clean[count-1];
  for (int i = 0; i < count-1; i++) {
    clean[i] = 0x00;
  }
  int index = 0;

  for (int i = 0; i <80; i++) {
    if (input[i] >= 0 && input[i] <= 9 || input[i] >= 65 && input[i] < 90
	|| input[i] > 97 && input[i] <= 122){
      clean[index] = input[i];
      index++;
    }
  }
  cout << clean << endl;
  count--;
  while (run == true) {
    for (int i = 0; i <= count; i++) {
      if (clean[i] == clean[count]) {
	palindrome = true;
	count--;
      }
      if (clean[i] != clean[count]) {
	palindrome = false;
	run = false;
      }
      if (palindrome == true && count == 0) {
	run = false;
      }
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
