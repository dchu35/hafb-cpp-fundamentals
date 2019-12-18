#include <iostream>
#include "carton.h"
#include <string>

// Static constants : Don't use the static keyword in non-header (.h) files.
// const double Carton::kMaxSize = 100;
const double Carton::kMinLength = 6;
const double Carton::kMinWidth = 3;
const double Carton::kMinHeight = 0.25;

// Constructors have access to private data members
Carton::Carton()
{
    height_= 0; // initializes the variables located in carton.
    width_= 0;
    length_= 0;
}

// Second Constructor
Carton::Carton(double length, double width, double height)
{
    try
    {
        SetMeasurements(length, width, height);
    }
    // catch(const std::exception& e)
    // {
    //     std::cerr << e.what() << '\n';
    // }
    
    // height_ = height;
    // width_ = width;
    // length_ = length;
    

    catch(std::out_of_range e)
    {
        std::cerr << e.what() << '\n';
        throw;
    }
}



// Deconstructor
Carton::~Carton()
{

}

void Carton::SetMeasurements(double length, double width, double height)
{
    // if(length <=0 || height <=0 || width <= 0)
    // {
    //     throw std::out_of_range("All measurements must be greater than zero!");
    //     // creates a bad scenario condition and gives a message to the user. 
        

    // }
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

// Getters

void Carton::set_length(double length)
{
    // if(length_ < kMinLength)
    // {
    //     std::string error_msg = "LENGTH MUST BE GREATER THAN " + std::to_string(kMinLength) + "!";
    //     throw std::out_of_range(error_msg); 
    // }
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
    std::cout << "Box volume: " << Volume() << std::endl;
}

double Carton::Volume() const
{
    return length_ * width_ * height_;
}

// Capture otuput in an outStream
void Carton::WriteData(std::ostream &out) const
{
    out << length_ << "," << width_ << "," << height_ << "," << Volume() << std::endl;
}