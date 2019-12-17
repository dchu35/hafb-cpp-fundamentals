#include <iostream>
#include "my_functions.h"
using namespace std;


// Main Function
int main()
{
  int number1 = 5, number2 = 10;
  cout << "The sum of " <<number1<<" and " << number2 << " is: "<< Sum(number1, number2) << endl;
  
  cout << "Number before UpdateStep() " << number1 << endl;
  UpdateStep(number1);
  cout << "Number after UpdateStep() " << number1 << endl;
  return 0;
}

// // Function Definition
// int Sum(int num1, int num2)
// {
//   return num1+num2;
// }