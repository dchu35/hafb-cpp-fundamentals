#include <iostream>
using namespace std;

struct Part
{
   int model_number;
   int part_number;
   float cost;
};

struct Car
{
   Part doors;
   Part windows;
   Part tires;
};


// Local Prototypes

int main()
{
   Part part1;
   part1.model_number = 6244;
   part1.part_number = 373;
   part1.cost = 45.90;
   std::cout << "P1 Model: " << part1.model_number << " Part: " << part1.part_number << " Cost: $" << part1.cost << std::endl;
   
   Part part2 = {6277, 781, 32.10}; // declare and initialize
   std::cout << "P2 Model: " << part2.model_number << " Part: " << part2.part_number << " Cost: $" << part2.cost << std::endl;

   // Part part3;
   // part3 = part2;
   // std::cout << "P3 Model: " << part3.model_number << " Part: " << part3.part_number << " Cost: $" << part3.cost << std::endl;
   Car sedan;
   sedan.doors.part_number = 101;
   sedan.windows.model_number = 7002;
   sedan.windows.cost = 89.99;

   
   
   return 0;
}
