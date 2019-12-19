// countpp3.cpp
// increment counter variable with ++ operator
// uses unnamed temporary object
#include <iostream>
using namespace std;
#include "distance.h"

void Distance::ShowDist() const
{
    std::cout << feet() << "\'-" << inches() << "\"" << std::endl;
}

Distance Distance::operator+ (Distance rhs) const
{
    // Distance temp;
    int feet = feet_ + rhs.feet_;
    float inches = inches_ + rhs.inches_;
    // Update values IF inches > 12
    if(inches >= 12.0)
    {
        inches -= 12.0;
        feet++;
    }
    // Distance temp(feet, inches);
    // return temp;
    return Distance(feet, inches);
}

   std::ostream&operator << (std::ostream &os, Distance& distance)
   {
       // recommended not to include a '\n' or endl character
       os << "feet: " << distance.feet_ << " inches: " << distance.inches_;
       return os;
   }
