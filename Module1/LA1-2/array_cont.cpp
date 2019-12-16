/**
 * @file array_cont.cpp
 * @author your name (you@domain.com)
 * @brief 
 * @version 0.1
 * @date 2019-12-16
 * 
 * @copyright Copyright (c) 2019
 * 
 */

#include <iostream>
#include <array>  //array container
using namespace std;

int main()
{
    // To create arrays with library
    // array<type, #ofelements> name;
    array<double, 5> grades{22.1, 6.1, 7.2, 84.9, 7};
    cout <<"Size of array: " << grades.size() << endl;
    //cout << "Array empty?: " << grades.empty() << endl; // 0 = true, and checks if there are vlues in the array
    for (int index = 0; index < grades.size(); ++index)
    {
        cout << grades[index] << endl;
    }
    // for each loop
    cout << "For each: " << endl;
    for(auto grade : grades)
    {
        cout << grade << endl;
    }
    return 0;
}