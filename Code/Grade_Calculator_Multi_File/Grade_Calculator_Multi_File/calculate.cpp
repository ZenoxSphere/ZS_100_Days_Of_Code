#include <string>
#include "calc.h" // for calc::calculate()
namespace calc 
{
    std::string calculate(int score)
    {
        if (score < 40) {
            return "Fail";
        }
        else if (score < 60) {
            return "Pass";
        }
        else if (score < 70) {
            return "Merit";
        }
        else {
            return "Distinction";
        }
    }
}