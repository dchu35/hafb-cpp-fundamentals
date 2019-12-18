#include "carton.h"

// Constructors have access to private data members
Carton::Carton()
{
    height_=0; // initilizes the variables located in carton.
    width_=0;
    length_=0;
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

