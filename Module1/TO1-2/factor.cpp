#include <iostream>
#include "factor.h"
using namespace std;

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

/**
 * @brief Calculate the nubmer of instances 
 * divisible by input parameter in the range
 *  1 through 30.
 * 
 */
void FactorModX(int mod_number, int max_range)
{
    unsigned int count = 0;
    for (unsigned int x = 1; x <= max_range; ++x)
    {
        if (x % mod_number == 0)
        {
                count++;
        }
    }
    cout << "Result is: " << count << endl;
}


/**
 * @brief Get the Factor Mod X Range object
 * 
 * @param mod_number   modules of number
 * @param max_range    max range
 * @return unsigned int  number of instances
 */
unsigned int GetFactorModXRange(int mod_number, int max_range)
{
    unsigned int count = 0;
    for (unsigned int x = 1; x <= max_range; ++x)
    {
        if (x % mod_number == 0)
        {
                count++;
        }
    }
    cout << "Result is: " << count << endl;
    return count;
}