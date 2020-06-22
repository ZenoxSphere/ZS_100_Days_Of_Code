// Grade_Calculator.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include <string>

std::string calculate(int score);

int main()
{
    std::cout << "Please enter your score.\n";
    int score{};
    std::cin >> score;
    std::cout << "You have earned the grade:" << calculate(score) << "\n";
    return 0;
}

std::string calculate(int score)
{
    if (score < 40) {
        return "Fail";
    }
    else if  (score < 60){
        return "Pass";
    }
    else if (score < 70) {
        return "Merit";
    }
    else {
        return "Distinction";
    }   
}