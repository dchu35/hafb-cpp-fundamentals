#include <array>      // for array containers
#include <iostream>   // basic I/O
#include <string>     // strings
#include <fstream>    // file stream

using namespace std;
const int kMaxSize = 24;
const int kMaxNameSize = 24;

/**
 * @brief Shows how to define and use an ifstream object to read from a file.
 *
 * We will define ifstream objects and then see some operators
 * and methods that work with these objects.
 *
 * @return int 0 means function exited with success
 */
int main() 
{
  // create an object of type ifstream
  std::ifstream in;   // InputFileStream
  std::ifstream namelist;   // InputFileStream
 

  // open the file age.txt
  in.open("../age.txt");   // from the relative path of the executable

  if(in.fail())
  {
    std::cout << "Unable to open file: age.txt.\nShutting down";
    return 7;
  }

  // read from the age file and store values in an array
  std::array<int, kMaxSize> ages;
  ages.fill(-1);  // initialize elements to -1
  int age_size = 0;
  
  // in >> ages[age_size];
  // age_size++;
  // in >> ages[age_size];
  // in >> ages[age_size++];
  
  // read to the end of the file
  while (age_size < kMaxSize && in >> ages[age_size])
    {
      age_size++;
    }

  // print out the values in the array
  for(auto age: ages)
  {
    std::cout << age << std::endl;
  }
  in.close();  // close input file  
 

  // print out the valid values in the array
  namelist.open("../name.txt");   // from the relative path of the executable
  std::array<string, kMaxNameSize> names;
  names.fill("\0");  // initialize elements to C++ version of null, "" lets you input characters
  int name_size = 0;
  while (name_size < kMaxNameSize && std::getline(namelist, names[name_size]))
    {
      name_size++;
    }
  for(auto name: names) // print out the values in the array
  {
    std::cout << name << std::endl;
  }
  namelist.close();  // close input file  


  // print out the all the values in the array


  // Define an ifstream object and open the file name.txt

  // read one name, store it in the array, and print it


  // read the rest of the names in the file


  // print valid elements in the names array


  // print all the elements in the names array


  // Use a file with mixed values
  // Define an ifstream object and open the file name_age.txt
  std::ifstream in_name_age("../name_age.txt");
  if(in_name_age.fail())
  {
    std::cout <<"Unable to open file name_age.txt./nShutting down.\n";
    return 1;
  }

  // reset age and name arrays
  ages.fill(-1);
  names.fill("-");
  int index = 0;

  // read all the values from the name_age.txt file
 while(index < kMaxSize && in_name_age >> ages[index])
 {
   // need to load the next record or any extra characters?
   in_name_age.ignore();
    std::getline(in_name_age, names[index]);
   index++; // increment index
 }

  // print valid elements in the names and ages array
  for(int num=0; num < index; ++num)
  {
    std::cout<<"Age: "<<ages[num]<<" for Name: "<<names[num]<<std::endl;
  }

  // print all elements in the names and ages array
in_name_age.close();

  return 0;
}
