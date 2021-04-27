#include <iostream>
#include <cmath>
#include <string>
#include <iomanip>

using namespace std;

// Author: Samantha Bracellari

/*
COMPILING INSTRUCTIONS (ON LINUX)

In the terminal, in the folder that this file is located, run the following command:

    gcc calculator.cpp -lstdc++ -o calculator

This will create an executable named 'calculator'. To run the executable, run this command:

    ./calculator

I have included the executable in my submission, though I'm not sure if it will work that way.
If it doesn't, that first command is the failsafe.
*/

/*
Question 1: Calculator
Purpose: To work as a simple calculator, and ask for two numbers and an operator
The program will only terminate if the user enters (E) or tries to divide by zero
Else, it will continue asking for operations to perform on the two specified numbers
*/
int main() {
  double firstNumber;
  double secondNumber;
  char o;
  double result;
    
  cout << "1\t2\t3" << endl;
  cout << "4\t5\t6" << endl;
  cout << "7\t8\t9" << endl;
  cout << "+\t0\t-" << endl;
  cout << "*\t/\tp" << endl;

  cout << "Enter the first number: ";
  cin >> firstNumber;

  cout << "Enter the second number: ";
  cin >> secondNumber;

  // this will run indefinitely until the user either enters (E) or tries to divide by zero
  while(true) {
    cout << "Enter operator: ";
    cin >> o;

    if (o == 'E') {
      return 0;
    } else if (o == 'p') {
      cout << "Result: " << pow(firstNumber, secondNumber) << endl;
    } else if (o == '/') {
      if (secondNumber == 0) {
        cout << "Error: Divide by zero" << endl;
        return 0;
      } else {
        // setprecision used to round the result to two decimal places
        cout << setprecision(2) << fixed << "Result: " << firstNumber/secondNumber << endl;
      }
    } else if (o == '*') {
      cout << "Result: " << firstNumber*secondNumber << endl;
    } else if (o == '+') {
      cout << "Result: " << firstNumber+secondNumber << endl;
    } else if (o == '-') {
      cout << "Result: " << firstNumber-secondNumber << endl;
    // added an extra condition if the operator is not recognized
    } else {
      cout << "Operator not recognized" << endl;
    }
    cout << "Enter (E) to stop" << endl;
  }
}