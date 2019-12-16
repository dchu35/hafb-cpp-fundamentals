/**
 * @file multitables.cpp
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

using namespace std;
const int kmax = 10; // defines your max column length

int main()
{
    int number;
    cout << "Enter a value to print multiplication tables: " << endl;
    cin >> number
    ;
    for(int num1 = 1; num1 <= number; ++num1)    // rows
    {
        
        for(int num2 = 1; num2 <= kmax; ++num2)  // columns
        {
            cout << setw(3) << num1*num2 << " "; // setw(x) = set width between characters
        }
        cout << endl; // ends the multiplication line and starts a new one.

    }
    return 0;
}