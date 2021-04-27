#include <iostream>

using namespace std;

// Author: Samantha Bracellari

/*
COMPILING INSTRUCTIONS (ON LINUX)

In the terminal, in the folder that this file is located, run the following command:

    gcc pizza.cpp -lstdc++ -o pizza

This will create an executable named 'pizza'. To run the executable, run this command:

    ./pizza

I have included the executable in my submission, though I'm not sure if it will work that way.
If it doesn't, that first command is the failsafe.
*/


/*
Question 1: Milano Pizza Restaurant
Purpose: For a user to order a pizza. They can choose small (S/s), medium (M/m), or
large (L/l), with a cost associated to each. They will then be asked to enter a tip
amount, and their total will be calculated including tips and tax.
*/
int main() {
  
  // declare initial variables
  char size;
  double tip;
  double tax;
  double cost;
  bool choosingSize = true;
  bool choosingTip = true;

  cout << "Welcome to Milano Pizza Restaurant" << endl;
  cout << "Small\t$10" << endl;
  cout << "Medium\t$12" << endl;
  cout << "Large\t$15" << endl;
  cout << "Enter the size of pizza you'd like (S/M/L): ";

  cin >> size;

  // this will ensure that the selected size is valid, and if it is, will assign the
  // cost based on the chosen size. tax is also calculated here
  do {
    switch(size) {
      case 'S':
      case 's':
        cost = 10;
        tax = cost*0.06;
        choosingSize = false;
        break;
      case 'M':
      case 'm':
        cost = 12;
        tax = cost*0.06;
        choosingSize = false;
        break;
      case 'L':
      case 'l':
        cost = 15;
        tax = cost*0.06;
        choosingSize = false;
        break;
      default: // do this if the selected size is not a valid choice
        cout << "Size not recognized. Try again (S/M/L): ";
        cin >> size;
    }
  } while (choosingSize);
 
  // ge the tip amount and calculate tip
  cout << "Enter tip amount (EX: 2 for a 2% tip): ";
  cin >> tip;
  tip = (tip/100)*cost;
  
  cout << "Tips: " << tip << endl; // output tip
  cout << "Tax: " << tax << endl; // output tax
  cout << "Total: " << cost + tax + tip << endl; // output total

  return 0;
}