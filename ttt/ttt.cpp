/*
 Jacob Marx, 9 September 2018
 This program is a tic tac toe game
 */
#include <iostream>

using namespace std;
//void moves;
char printBoard;
//void checkWin;

int main() {
  char board[3][3];
  //moves();
  printBoard(&board);
  //checkWin();
}

//void moves() {
 
//return;
//}

char printBoard(char print[3][3]) {
  char secOne[3];
  char secTwo[3];
  char secThree[3];

  for (int i = 0; i < 3; i++) {
    for (int j = 0; j < 3; j++) {
      print[i][j] = 1;
    }
  }
  for (int i = 0; i < 3 ; i++) {
    secOne[i] = print[0][i];
    secTwo[i] = print[1][i];
    secThree[i] = print[2][i];
  }

  cout << "  1 2 3" << endl;
  cout << "a " << secOne << endl << "b " << secTwo << endl << "c " << secThree << endl;  

  return;
}

//void checkWin() {

//return;
//}
