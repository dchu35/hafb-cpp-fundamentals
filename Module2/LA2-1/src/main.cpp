#include <iostream>

// using namespace std;

/**
 * @brief Shows how to define and use a string object
 *
 * We will define string variables and then see what operators and
 * functions work with these variables.
 *
 * @return int 0 means function exited with success
 */
int main() 
{
  // create a variable of type string
  // std::string name = "Weber Waldo";

  // print it out
  // std::cout << name << std:: endl;

  // get a string from a user
  // std::cout << "Enter your full name: " << std::endl;
  
  // to get strings with spaces, use getline()
  // getline(std::cin, name);
  // std::cout << "Hi: " << name << std::endl;

  // add two strings together
  // std::string title = "Dr.";
  // std::string formal;
  // formal = title + " " + name;
  // std::cout << "Hi: " << formal << std::endl;

  // how long is the string
  // std::cout << "The length of name is " << name.size() << std::endl;
  // std::cout << "The size of title is " << title.size() << std::endl;
  // std::cout << "The length of title is " << title.length() << std::endl;
  // std::cout << "The length of formal is " << formal.length() << std::endl;

  // use [] to get an individual character
  // std::cout << "The first character of name is " << name[0] << std::endl;
  // std::cout << "The third character of name is " << name[2] << std::endl;

  // get name and commute information from a user
  // int minutes, miles;
  // std::cout << "Enter your full name: " << std::endl;
  // getline(std::cin, name);
  // std::cout << "How long is our commute in minutes?: ";
  // std::cin >> minutes;
  // std::cout << "How long is our commute in miles?: ";
  // std::cin >> miles;
  // std::cout << name << " has a commute that takes " << minutes << " minutes, and spans " << miles << " miles." << std::endl;

  // get commute information and name from a user


  // the string function find
  std::string story =
  "The dragons are flying over the mountains. They are hunting for a "
  "place to settle for the waldo night. What they see is endless horizon.";
  std::cout << "waldo is at location: " << story.find("waldo")  << std::endl;

  // the string function replace
  std::cout << story << std::endl;
  std::string oldhandle = "waldo";
  std::string newhandle = "a really long character phrase";
  story.replace(story.find(oldhandle), oldhandle.size(), newhandle);
  std::cout << story << std::endl;

  return 0;
}

/*
      "The dragons are flying over the mountains. They are hunting for a "
      "place to settle for the waldo night. What they see is endless horizon."
*/
