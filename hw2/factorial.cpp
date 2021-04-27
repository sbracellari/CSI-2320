#include <iostream>

using namespace std;

// Author: Samantha Bracellari

/*
COMPILING INSTRUCTIONS (ON LINUX)

In the terminal, in the folder that this file is located, run the following command:

    gcc factorial.cpp -lstdc++ -o factorial

This will create an executable named 'factorial'. To run the executable, run this command:

    ./factorial

I have included the executable in my submission, though I'm not sure if it will work that way.
If it doesn't, that first command is the failsafe.
*/


/*
Question 1: Factorial Calculator
Purpose: To calculate a factorial. The user enters an integer between 1-10, and the
program returns the factorial of that integer. The user is then asked if they would
like to enter another number. If not, the program terminates.
*/
int main() {

  char cont;

  cout << "Factorial Calculator" << endl << endl;
  
  while (true) {
    int num = 0;
    int n = 1;

    cout << "Enter an integer (1-10): " ;
    cin >> num;

    // loop to calculate the factorial
    for (int i = num; i > 1; i--) {
      n *= i;
    }

    cout << "The factorial of " << num << " is " << n << endl << endl;
    cout << "Continue? (y/n) ";
    cin >> cont;
    cout << endl;

    // if the user does not answer with y or Y, the program terminates
    if (cont != 'y' && cont != 'Y') {
      cout << "Bye!";
      break;
    }
  }

  return 0;
}