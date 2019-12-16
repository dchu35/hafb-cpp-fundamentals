/**
 * @file main.cpp
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

int main()
{
    char code;
    cout << "Enter the specification code: ";
    cin >> code;

    // == operator to compare values
    // when comparing characters use single ticks ' '
    // if(code == 'S')
    // {
    //     cout << "The item is space exploration grade." << endl;
    // }
    // ctrl+/ to comment out blocks of code.
    
    // Use a switch statement
    switch(code)
    {
        case 'S':   // like an IF statement
        case 's':   // IF statement with OR case (||)
            cout << "The item is space exploration grade." << endl;
            break;  // The break command gets the user out of the switch loop, 
                    // otherwise it will display all options 
                    // until it encounters a break.

        case 'M':   // like an another IF statement
            cout << "The item is military grade." << endl;
            break;  // The break command gets the user out of the switch loop.

        case 'C':   // like an another IF statement
            cout << "The item is commercial grade." << endl;
            break;  // The break command gets the user out of the switch loop.
        
        case 'T':   // like an another IF statement
            cout << "The item is toy grade." << endl;
            break;  // The break command gets the user out of the switch loop.

        default:   // like an ELSE statement
            cout << "The item is not supported." << endl;
    }
    return 0;
}