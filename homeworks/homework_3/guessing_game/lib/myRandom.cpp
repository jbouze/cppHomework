#include <iostream>
#include <random>
#include "myRandom.h"

// Todo: seed once and maintain state (use a class probably)

int randomNumber(int lowerBound, int upperBound)
{
    std::random_device random_device;
    std::mt19937 random_engine{random_device()};
    std::uniform_int_distribution<> distribution{lowerBound, upperBound};
    int num = distribution(random_engine);
    return num;
}

// int main()
// {
//     std::cout << randomNumber(1, 5) << std::endl;
//     return 0;
// }
