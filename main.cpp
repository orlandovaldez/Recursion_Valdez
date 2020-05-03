//Towers of Hanoi Problem
//Name: Orlando Valdez
//Teacher: Dr_T
//Date: 04-03-2020
//Purpose: Use of knowledge of C++ and Recursion to solve the Towers of Hanoi problem
#include <iostream>
using namespace std;

void towerOfHanoi(int n, char from, char to, char rem)
{
  if(n == 1)
  {
    cout << "Move Disk 1 from rod " << from << " to rod " << to << endl;
    return;
  }
  towerOfHanoi(n-1, from, to, rem);
  cout << "Move Disk " << n << " from rod " << from << " to rod " << to << endl;

  towerOfHanoi(n-1, rem, to, from);
}

int main()
{
  int n =999; 
  towerOfHanoi(n, 'A', 'C', 'B');
  
  return 0;
}