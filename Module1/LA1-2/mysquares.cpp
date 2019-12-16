/**
 * @file 
 * @author your name (you@domain.com)
 * @brief 
 * @version 0.1
 * @date 2019-12-16
 * 
 * @copyright Copyright (c) 2019
 * 
 */

#include <iostream>
#include <iomanip> // for formatted output
#include <cmath> // for sqrt() function
// #include <math> 
using namespace std;
const int kMaxCount = 5;

int main()
{
    cout << "Number    Square Root" << endl;
    cout << "------    -----------" << endl;
    cout << setiosflags(ios::showpoint);
    // cout << 81 << "        " << sqrt(81) << endl;
    for(int count = 1; count < kMaxCount; ++count) 
    // putting "++" before count increases performance 
    // because the computer doesn't have to reload the 
    // data then increase by one. 
    {
        cout << setw(4) << count << "         " << sqrt(count) << endl;
    }
    return 0;
}
// cppreference.com for more libraries and commands