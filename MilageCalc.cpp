#include <iostream>
#include"functions.h"
int main()
{
    double milesDriven;
    double gallonsUsed;
    std::cout<<"Hello and welcome to my attempt at a milage calculator.\n";
    std::cout<<"How many miles did you drive in your last trip?\n";
    std:: cin>> milesDriven;
    std::cout<<"How many gallons of fuel did you use in your last trip?\n";
    std::cin>> gallonsUsed;
    double mpg=CalculateMilage(milesDriven,gallonsUsed);
    std::cout<<"Your mileage is "<<mpg<<" miles per gallon.";
    return 0;
}