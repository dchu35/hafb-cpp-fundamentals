#include <array>
#include <iostream>
#include <string>
#include <fstream>  // for I/O files (ifstream & ofstream commands) (input/output file stream)

using namespace std;

/**
 * @brief Shows how to define and use an ofstream object to write to a file.
 *
 * We will define ofstream objects and then see some of the operators
 * and functions that work with these objects.
 *
 * @return int 0 means function exited with success
 */
int main() {
  // arrays that contain data
  const int kMaxSize = 20;
  array<int, kMaxSize> commute_minutes = {22, 51, 63, 12, 17, 93, 45,
                                          18, 66, 45, 43, 77, 38, 43,
                                          52, 21, 8,  19, 7,  14};

  array<int, kMaxSize> commute_miles = {8,  22, 28, 2,  4,  62, 15, 6, 42, 28,
                                        16, 43, 27, 18, 41, 8,  3,  5, 2,  4};

  array<string, kMaxSize> towns = {
      "Bountiful",    "Centerville",        "Clinton",       "South Weber",
      "West Point",   "Cottonwood Heights", "Murray",        "Salt Lake City",
      "South Jordan", "West Jordan",        "American Fork", "Lindon",
      "Payson",       "Pleasant Grove",     "Spanish Fork",  "Harrisville",
      "Ogden",        "Pleasant View",      "Riverdale",     "South Ogden"};

  array<string, kMaxSize> names = {
      "Walter", "Chris", "Stan",   "Mary",  "Shelly", "Kim",  "Kelly",
      "George", "Sam",   "Walter", "Ann",   "Laura",  "Paul", "Phillip",
      "Susan",  "Hal",   "Olivia", "Polly", "Roy",    "Scott"};

  // create a variable of type ofstream
  std::ofstream commute_file; // this establishes that an output stream is to be made 

  // open the file commute.txt
  commute_file.open("../commute.csv"); // this says that the output stream 
  // commute_file is to be connected to commute.csv and where the info is to be stored.
  if(commute_file.fail())
  {
    std::cout << "Unable to open file commute.csv to write.\nShuttingdown.\n";
    return 1;
  }

  // write commute_minutes and commute_miles to the file commute.txt
  for(int index = 0; index < kMaxSize; ++index) // it is more efficient to define the 
  // variables when the loops or scopes are created 
  // as opposed to traditionally stating them above everything.
  {
    std::cout << commute_minutes[index] << "," << commute_miles[index] << std::endl;
    commute_file << commute_minutes[index] << "," << commute_miles[index] << std::endl;
  }

  // create a variable of type ofstream and open the file town.txt
  std::ofstream town_file;
  // write the towns to the file town.txt
  town_file.open("../town.csv");
  if(town_file.fail())
  {
    std::cout << "Unable to open file town.csv to write.\nShutting down.\n";
    return 1;
  }
  for(int index = 0; index < kMaxSize; ++index)
  {
    std::cout << towns[index] << std::endl;
    town_file << towns[index] << std::endl;
  }
  
  // create a variable of type ofstream and open the file commute_data.txt
  std::ofstream utah_file;
  // write commute_minutes, commute_miles, and towns to the file commute.txt
  utah_file.open("../utah.csv");
  if(utah_file.fail())
  {
    std::cout << "Unable to open file utah.csv to write.\nShutting down.\n";
    return 1;
  }

  std::string header = "minutes, miles, minutes/miles, name, town"; // label header
  utah_file << header << std::endl;  // write header to utah_file
  std::cout << header << std::endl;  // write header to utah_file

  for(int index = 0; index < kMaxSize; ++index)
  {
    std::cout << commute_minutes[index] << ", " << commute_miles[index] << ", " << static_cast<float>(commute_minutes[index])/commute_miles[index] << ", " << towns[index] << std::endl;
    utah_file << commute_minutes[index] << ", " << commute_miles[index] << ", " << static_cast<float>(commute_minutes[index])/commute_miles[index] << ", " << towns[index] << std::endl;
  // static_cast<float>(...stuff...) lets us get decimal results as opposed to truncating to integer results.
  }
  // do computations and add labeling to data before writing to file

  // write a report to the commute_report.txt file. Include name, town,
  // commute_minutes, commute_miles, and average minutes per mile to the file
  // commute.txt

  commute_file.close();
  town_file.close();
  utah_file.close();

  return 0;
}
