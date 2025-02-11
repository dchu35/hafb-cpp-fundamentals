/*
** EPITECH PROJECT, 2019
** hafb-cpp-fundamentals
** File description:
** my_functions
*/

#pragma once
#include <array>

int Sum(int num1, int num2); 

void UpdateStep(int& step); // int& means the address of where step is.

int Max2(int num1, int num2);
int Max3(int num1, int num2, int num3);
int Max10(std::array<int, 10> &nums);

void ClearElements(std::array<int, 10>nums);