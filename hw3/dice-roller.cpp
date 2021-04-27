#include <iostream>
#include <ctime>

using namespace std;

// Author: Samantha Bracellari

/*
COMPILING INSTRUCTIONS (ON LINUX)

In the terminal, in the folder that this file is located, run the following command:

    gcc dice-roller.cpp -lstdc++ -o dr

This will create an executable named 'dr'. To run the executable, run this command:

    ./dr

I have included the executable in my submission, though I'm not sure if it will work that way.
If it doesn't, that first command is the failsafe.
*/

int roll() {
  return ((rand() % 6) + 1);
}

void rollDice() {
  int d1 = roll();
  int d2 = roll();

  cout << "Die 1: " << d1 << endl;
  cout << "Die 2: " << d2 << endl;
  cout << "Total: " << d1 + d2 << endl;

  if (d1 == 1 && d2 == 1) {
    cout << "Snake eyes!" << endl;
  }

  if (d1 == 6 && d2 == 6) {
    cout << "Boxcars!" << endl;
  }
}

int main() {
  char choice;
  srand(time(0));

  cout << "Dice Roller" << endl << endl;
  cout << "Roll the dice? (y/n): "; 
  cin >> choice;
  cout << endl;

  while (choice == 'y') {
    rollDice();
    cout << endl;
    cout << "Roll again? (y/n): ";
    cin >> choice;
    cout << endl;
  }
  return 0;
}