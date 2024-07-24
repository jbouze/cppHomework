#include <iostream>
#include <string>
#include <random>
using std::cout;
using std::cin;
using std::endl;
using std::string;

int randomNumber(int lowerBound, int upperBound)
{
    std::random_device random_device;
    std::mt19937 random_engine{random_device()};
    std::uniform_int_distribution<> distribution{lowerBound, upperBound};
    int num = distribution(random_engine);
    return num;
}

void printWelcomeStatement()
{
    cout << "Welcome to the GUESSING GAME!" << endl;
    cout << "I will generate a number and you will guess it!" << endl;
}

int getNumber(string prompt)
{
    int tmpInt;
    cout << prompt << endl;
    cin >> tmpInt;
    return tmpInt;
}

int main(int argc, char* argv[])
{
    printWelcomeStatement();
    
    int smallest = getNumber("Please provide the smallest number:");
    int largest = getNumber("Please provide the largest number:");

    int target = randomNumber(smallest, largest);
    cout << "I've generated a number. Try to guess it!" << endl;

    int counter = 0;
    unsigned int guess = -1;

    while (guess != target) {
        cout << "Please provide the next guess: ";
        cin >> guess;
        counter++;
        if (guess > target) {
            cout << "Your number is too big. Try again!" << endl;
        }
        else if (guess < target) {
            cout << "Your number is too small. Try again!" << endl;
        }
    }
    cout << "You've done it! You guessed the number " << target << 
        " in " << counter << " guesses!" << endl;
    return 0;
}
