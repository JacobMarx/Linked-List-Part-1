/*xc
 Jacob Marx, 9 September 2018
 This program is a tic tac toe game
 */
#include <iostream>

using namespace std;
void moves(char** here);
void printBoard(char** print);
//void checkWin;
int move = 1;
bool playing = true;

int main() {
  char**  boardPtr = new char*[3];
  for (int i = 0; i < 3; i++) {
    boardPtr[i] = new char[3];
  }
  while (playing == true) {
    printBoard(boardPtr);
  for (int i = 0; i < 3; i++) {
    for (int j = 0; j < 3; j++) {
      cout << boardPtr[i][j];
    }
  }
  
  moves(boardPtr);
  //checkWin();
  //From let_me_be on Stack Overflow, retrived 10/3
  for (int i = 0; i < 3; i++) {
    delete[] boardPtr[i];
  }
  delete[] boardPtr;
  }
 
}

void moves(char** here) {
  for (int i = 0; i < 3; i++) {
    for (int j = 0; j < 3; j++) {
      cout << here[i][j] << endl;
    }
  }
  char column[2] = {0};
  char row[2] = {0};

  column[1] = '1';
  row[1] = '1';
  

  if (move == 1) {
    cout << "it is x's turn enter fsomejshltguthslfd" << endl;
  }
  if (move == 2) {
    cout << "it is o's tuen enter something" << endl;
  }
  
  cout << "enter your column" << endl;
  cin.get(column, 2);
  cin.clear();
  cin.ignore(10000, '\n');
  cout << "enter the row" << endl;
  cin.get(row, 2);
  cin.clear();
  cin.ignore(10000, '\n');

  cout << column[0] << ", " << row[0] << endl;
  int c = (int)column[0];
  int r = (int)row[0];
  cout << c << ", " << r << endl;
  
    here[1][1] = 'X';
    cout << here[1][1] << endl;
    move++;
    cout << "hi" << endl;
    printBoard(here);
    cout << "hi" << endl;
  

  if (move == 2) {
    here[c-49][r-97] = 'O';
    move--;
  }
  
  
  return;
}

void printBoard(char** print ) {
  
  for (int i = 0; i < 3; i++) {
    for (int j = 0; j < 3; j++) {
      print[i][j];
      
    }
  }

  //for (int i = 0; i < 3; i++) {
  //for (int j = 0; j < 3; j++) {
  //  print[i][j] = 'x';
  //}
  //}

  char secOne[4];
  char secTwo[4];
  char secThree[4];
  
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
