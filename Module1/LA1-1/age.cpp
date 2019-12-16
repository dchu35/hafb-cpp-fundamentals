/**
 * @file age.cpp
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

// Constants


int main()
{
    int age;
    cout << "Enter your age: " << endl;
    cin >> age;
    // Task display rights by age:
    // 1) If you are under 18, you must go to school.
    // 2) If you are over 18, you can vote.
    // 3) If you are over 21, you can buy alcohol.
    // 4) If you are over 65, you can retire.

    if(age < 18)
    {
        cout << "You should be in school." << endl;
    }
    else if(age >= 18 && age < 21)
    {
        cout << "You can vote." << endl;
    }
        else if(age >= 21 && age < 65)
    {
        cout << "You can buy alcohol." << endl;
    }
        else
    {
        cout << "You can retire." << endl;
    }

    return 0;
}