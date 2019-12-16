/**
 * @file magic.cpp
 * @author your name (you@domain.com)
 * @brief 
 * @version 0.1
 * @date 2019-12-16
 * 
 * @copyright Copyright (c) 2019
 * 
 */
#include <iostream>
using namespace std;

// Function Prototype
void FactorMod3();

int main()
{
    
    return 0;
}


// Function Prototype
void FactorMod3()
{
unsigned int count = 0;
    for (unsigned int x = 1; x <= 30; ++x)
    {
        if (x % 3 == 0)
        {
            count++;
        }
    }
    cout << "Result is: " << count << endl;
}
