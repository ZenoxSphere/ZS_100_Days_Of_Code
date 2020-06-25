// Babylonian_Algorithm.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>

int main()
{
    float input{};
    std::cin >> input;

    float number = input;
    float approximation = number/2;
    float change{};
    float accuracy = 0.000001;

    while (number - change > accuracy) {
        number = (number + change) / 2;
        change = input / number;
    }
    std::cout << number;
}

