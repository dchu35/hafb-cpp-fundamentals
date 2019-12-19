/**
 * @file my_sets.cpp
 * @author your name (you@domain.com)
 * @brief  Learn about sets:
 * Elements are sorted according to the values.
 * Elements are all distinct values.
 * @version 0.1
 * @date 2019-12-19
 * 
 * @copyright Copyright (c) 2019
 * 
 */
#include <iostream>
#include <set> // A container with a UNIQUE group SORTED elements
// Methods: size(), empty(), insert(), erase(), find()
// find(): returns the position of the first element equal to the provided value.
//          You should always compare the value against the end() of the container.

int main()
{
    std::set<int> numbers;
    numbers.insert(10);
    numbers.insert(20);
    numbers.insert(30);
    numbers.insert(40);
    // Search for a value
    if(numbers.find(10) != numbers.end())
    {
        std::cout<<"10 is in numbers"<<std::endl;
    }
    std::cout<<"The set has: "<<numbers.size()<<" elements"<<std::endl;
    // Iterate over the set
    std::cout<<"Using iterator"<<std::endl;
    for(auto it = std::begin(numbers); it!= std::end(numbers); ++it)
    {
        std::cout<<*it<<" ";
    }
    std::cout<<std::endl;

    // Range based
    std::cout<<"Range based"<<std::endl;
    for(const auto&value: numbers)
        {
            std::cout<<value<<" ";
        }
    std::cout<<std::endl;
    return 0;
}