// Grade_Calculator_Multi_File.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include <string>
#include "calc.h" // for calc::calculate()


int main()
{
    std::cout << "Please enter your score.\n";
    int score{};
    std::cin >> score;
    std::cout << "You have earned the grade:" << calc::calculate(score) << "\n";
    return 0;
}