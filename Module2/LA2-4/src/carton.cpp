#include <iostream>
#include "carton.h"

// Constructors have access to private data members
Carton::Carton()
{
    height_=0; // initializes the variables located in carton.
    width_=0;
    length_=0;
}

// Second Constructor
Carton::Carton(double length, double width, double height)
{
    height_ = height;
    width_ = width;
    length_ = length;
}

double Carton::length()
{
    return length_;
}

double Carton::width()
{
    return width_;
}

double Carton::height()
{
    return height_;
}

void Carton::set_length(double length)
{
    length_ = length;
}

void Carton::set_width(double width)
{
    width_ = width;
}

void Carton::set_height(double height)
{
    height_ = height;
}

void Carton::ShowInfo()
{
    std::cout << "Box length: " << length() << std::endl;
    std::cout << "Box width: " << width() << std::endl;
    std::cout << "Box height: " << height() << std::endl;
}