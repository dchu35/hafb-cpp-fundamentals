#include <iostream>
#include "distance.h"

using namespace std;

// Main Function
int main()
{
  Distance d1(60, 9.5);
  // d1.ShowDist();

  Distance d2;
  // d2.ShowDist();

  // Distance d3;
  // d3 = d1 + d2;
  // d3.ShowDist();

  // Distance d4;
  // d4 = d1 + d2 + d3;
  // d4.ShowDist();

  // // display info with stdout
  // std::cout << d4 << std::endl;

  // if (d1 < d2)
  // {
  //   std::cout << d1 << " is less than " << d2 << std::endl;
  // }
  // else
  // {
  //   std::cout << d1 << " is greater than " << d2 << std::endl;
  // }

  // d3 = d1 - d2;
  // d3.ShowDist();

  d2 = d1; // Assignment operator invoked!
  std::cout << d2 << " and " << d1 << std::endl;
  Distance d3 = d2; // Initialization IS NOT Assignment
  std::cout<<d3<< " and " << d2<< std::endl; // Assignment operator NOT invoked.

  return 0;
}
