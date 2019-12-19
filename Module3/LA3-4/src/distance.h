#include <iostream>
#pragma once

class Distance
{
private:
    int feet_;
    float inches_;

public:
    Distance() : feet_(0), inches_(0) {}
    Distance(int feet, float inches) : feet_(feet), inches_(inches) {}
    Distance(Distance& dist); // Copy Constructor
    ~Distance(){};

    // Getter & Setter
    int feet() const { return feet_; }
    int set_feet(int feet) { feet_ = feet; }

    float inches() const { return inches_; }
    int set_inches(float inches) { inches_ = inches; }

    // Other Methods
    void ShowDist() const;
    Distance operator+(Distance rhs) const;

    friend std::ostream &operator<<(std::ostream &os, Distance &distance);

    // Task 1: create the "-operator"
    friend Distance operator-(Distance lhs, Distance rhs); // Friend operator
    // Task 2: create an update_distance(feet, inches) function to update fields using setters
    void update_distance(int ft, float in);

    bool operator<(Distance rhs) const;  // compare objects
    bool operator==(Distance rhs) const; // compare objects

    Distance operator =(Distance& rhs);
};
