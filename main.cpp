//Towers of Hanoi Problem
//Name: Orlando Valdez
//Teacher: Dr_T
//Date: 04-03-2020
//Purpose: Use of knowledge of C++ and Recursion to solve the Towers of Hanoi problem and demonstrate factorial recursion with user input

#include <iostream>
using namespace std;

void towerOfHanoi(int n, char from, char to, char rem)
{
  if(n == 1)
  {
    cout << "Move Disk 1 from rod " << from << " to rod " << to << endl;
    return;
  }
  towerOfHanoi(n - 1, from, to, rem);
  cout << "Move Disk " << n << " from rod " << from << " to rod " << to << endl;

  towerOfHanoi(n - 1, rem, to, from);
}

int factorial(int);


int main()
{
  int n =4; 
  towerOfHanoi(n, 'A', 'C', 'B');

  int number;
  //ask for user input of number
  cout << "\n\nEnter a integer value to display it's factorial: " ;
  cin >> number;

  //display the factorial of the number to the user
  cout << "The factorial of " << number << " is ";
  cout << factorial(number) << endl;
  
  return 0;
}

int factorial(int n)
{
  if (n == 0)
     return 1;
  else 
     return n * factorial(n-1);
}