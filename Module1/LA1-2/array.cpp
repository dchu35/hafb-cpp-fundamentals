/**
 * @file array.cpp
 * @author your name (you@domain.com)
 * @brief 
 * @version 0.1
 * @date 2019-12-16
 * 
 * @copyright Copyright (c) 2019
 * 
 */

#include <iostream>
#include <cmath>
using namespace std;

const int kmaxNum = 5;
const int kmaxRow = 3;
const int kmaxCol = 5;
int main()
{
    // C-style array
    // Array notation is as follows: "type name [elements];"
    // To access elements, use Index notation: begins at 0
    int grades[kmaxNum]; // an array of 5 integers
    float average = 0;
    // cout << "Enter your exam grades:" << endl;
    // for (int num = 0; num < kmaxNum; ++num)
    // {
    //     cout << "Enter " << num + 1 << " grade:" << endl;
    //     cin >> grades[num]; // access each element using []
    //     average += grades[num];
    // }
    // average = average / kmaxNum;
    // cout << "Your average grade is " << average << "." << endl;
    // return 0;

    // 2D Arrays: type name[row][col]
    int bi_array[3][5] = {
        {2, 4, 6, 8, 10},
        {1, 3, 5, 7, 9},
        {0, 1, 2, 3, 4}
        };
    // Print each element in the array
    for (int row = 0; row < kmaxRow; ++row)
    {
        for (int column = 0; column < kmaxCol; ++column)
        {
            cout << "Array element at [" << row << "]"
         << "[" << column << "]" << bi_array[row][column] << endl;
        }
    }
    
}