// Babylonian_Algorithm.cpp : This program takes a number as input and calculates the square root.
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

