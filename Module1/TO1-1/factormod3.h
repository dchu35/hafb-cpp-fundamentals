/*
** EPITECH PROJECT, 2019
** hafb-cpp-fundamentals
** File description:
** factormod3
*/

#pragma once

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
