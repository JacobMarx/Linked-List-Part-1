/*xc
 Jacob Marx, 9 September 2018
 This program is a tic tac toe game
 */
#include <iostream>

using namespace std;
void moves(char array[][3]);
void printBoard(char print[][3]);
//void checkWin;
int move = 1;

int main() {
  char board[3][3];
  printBoard(board);
  moves(&board);
  //checkWin();
}

void moves(char &get[][3]) {
  char x;
  char y;

  if (move == 1) {
    cout << "it is x's turn enter fsomejshltguthslfd" << endl;
  }
  if (move == 2) {
    cout << "it is o's tuen enter something" << endl;
  }
  
  count << "enter your column" << endl;
  cin.get(x, 1);
  cin.clear();
  cin.ignore(10000, 0x00);
  count << "enter the row" << endl;
  cin.get(y, 1);
  cin.clear();
  cin.ignore(10000, 0x00);

  if (move == 1) {
    get[x][d-y] = 'X';
    move++;
  }
  if (move == 2) {
    get[x][d-y] = 'X';
    move--;
  }
  
 return;
}

void printBoard(char print[][3]) {
  char secOne[4];
  char secTwo[4];
  char secThree[4];

  for (int i = 0; i < 3; i++) {
    for (int j = 0; j < 3; j++) {
      print[i][j] = 0x00;
    }
  }

  for (int i = 0; i < 3; i++) {
    for (int j = 0; j < 3; j++) {
      print[i][j] = 'x';
    }
  }
  
  for (int i = 0; i < 3 ; i++) {
    secOne[i] = print[0][i];
    secTwo[i] = print[1][i];
    secThree[i] = print[2][i];
    secOne[3] = '\0';
    secTwo[3] = '\0';
    secThree[3] = '\0';
  }

  cout << "  123" << endl;
  cout << "a " << secOne << endl << "b " << secTwo << endl << "c " << secThree << endl;  

  return;
}

//void checkWin() {

//return;
//}
