#include <iostream>
#include "carton.h"
#include <array>
#include "carton_fileio.h"

using namespace std;
const int kMaxSize = 10;

int main() 
{
  // create a Carton object using the default constructor
  Carton box;
  // std::cout << "Box length: " << box.length() << std::endl; // we can now suppress this information and carton.cpp will take care of handling this.
  // std::cout << "Box width: " << box.width() << std::endl;
  // std::cout << "Box height: " << box.height() << std::endl;

  box.ShowInfo();   // display object information
  box.set_length(10.9);
  box.set_width(23.0);
  box.set_height(12.5);
  // std::cout << "Box length: " << box.length() << std::endl;
  // std::cout << "Box width: " << box.width() << std::endl;
  // std::cout << "Box height: " << box.height() << std::endl;
  box.ShowInfo();

  // create a Carton object using the other constructor
  Carton box2(34, 89, 11);
  box2.ShowInfo();

  Carton box3(2, 4, 8);
  box3.ShowInfo();
  // create an array of Cartons 
  std::array<Carton, kMaxArraySize> boxes;

  // add some valid elements to the array
  boxes[0] = Carton(12, 41, 52);
  // Read data from file
  std::string message;
  int record_size = 0;

  message = ReadDataFormatFromFile("../carton_data.txt", boxes, record_size);
  std::cout << message << std::endl;

  // loop through the array
  std::cout << "\nPrinting Array: " << std::endl;
  // for(auto box : boxes)
  for(auto box = 0; box < record_size; ++box)
  // for(auto box : boxes)
  {
    boxes[box].ShowInfo();
    // box.ShowInfo();

    // Write data to file
  
  }

  // print out the volume of packages

  // print out the girth of packages

  // print out the length plus girth of packages

  // check if package is sized to ship

  // define a package that is too big to ship

  // define a package that is too small to ship

  // print if sized to ship

  // write carton data and information

  // read data from file

  // write data to file

  return 0;
}