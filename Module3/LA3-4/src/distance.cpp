// countpp3.cpp
// increment counter variable with ++ operator
// uses unnamed temporary object
#include <iostream>
#include <cmath>
using namespace std;
#include "distance.h"

void Distance::ShowDist() const
{
    std::cout << feet() << "\'-" << inches() << "\"" << std::endl;
}

// Distance Distance::operator+(Distance rhs) const
// {
//     // Distance temp;
//     int feet = feet_ + rhs.feet_;
//     float inches = inches_ + rhs.inches_;
//     // Update values IF inches > 12
//     if (inches >= 12.0)
//     {
//         inches -= 12.0;
//         feet++;
//     }
//     // Distance temp(feet, inches);
//     // return temp;
//     return Distance(feet, inches);
// }
// Distance operator-(Distance lhs, Distance rhs) // Friend operator
// // Distance Distance::operator-(Distance rhs) const
// {
//     // Distance temp;
//     int ft = lhs.feet_ - rhs.feet_;
//     float in = 0;
//     // Update values IF inches < 12
//     if (lhs.inches_ < 12.0)
//     {
//         ft -= 1;
//         in = (lhs.inches_ + 12) - rhs.inches_;
//     }
//     // Update values IF inches > 12
//     if (in >= 12.0)
//     {
//         in -= 12.0;
//         ft++;
//     }
//     // Distance temp(feet, inches);
//     // return temp;
//     return Distance(ft, in);
// }

// void Distance ::update_distance(int ft, float in)
// {
//     set_feet(ft);
//     set_inches(in);
// }

// std::ostream &operator<<(std::ostream &os, Distance &distance)
// {
//     // recommended not to include a '\n' or endl character
//     os << "feet: " << distance.feet_ << " inches: " << distance.inches_;
//     return os;
// }

// bool Distance::operator<(Distance dist) const
// {
//     return feet_ < dist.feet_ ? true : inches_ < dist.inches_;
// }

// bool Distance::operator==(Distance rhs) const
// {
//     float ft1 = feet_ + inches_/12.0;
//     float ft2 = rhs.feet_ + rhs.inches_/12.0;

//     return(ft2 == ft2) ? true : false; // return a response; Is ft2 equal to ft1? if yes, its "true", else, its "false"
// }

Distance Distance::operator = (Distance& rhs)
{
    std::cout<<"Assignment operator invoked!"<< std::endl;
    feet_ = rhs.feet_;
    inches_ = rhs.inches_;
    return Distance(feet_, inches_);
}

// Copy Constructor
Distance::Distance(const Distance& dist) // Copy Constructor
{
    std::cout<<"Copy Constructor invoked" << std::endl;
    feet_ = dist.feet_;
    inches_ = dist.inches_;
}