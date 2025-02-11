#include <iostream>
#include "distance.h"
using namespace std;

// Main Function
int main() 
{
  Distance d1(45,9.5);
  d1.ShowDist();

  Distance d2(10,8.5);
  d2.ShowDist();

  Distance d3;
  d3 = d1 + d2;
  d3.ShowDist();

  Distance d4;
  d4 = d1 + d2 + d3;
  d4.ShowDist();

  // display info with stdout
  std::cout << d4 << std::endl;

  d3 = d1 - d2;
  d3.ShowDist();

  return 0;
}

