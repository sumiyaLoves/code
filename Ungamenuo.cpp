#include <iostream>
#include <cstdlib>
#include <ctime>

int main() {
    // Seed the random number generator with the current time
    std::srand(std::time(0));

    // Generate a random number between 1 and 100
    int secretNumber = std::rand() % 100 + 1;

    // Initialize variables
    int guess = 0;
    int attempts = 0;

    std::cout << "Welcome to the Guess the Number Game!" << std::endl;

    while (guess != secretNumber) {
        try {
            // Ask the user to guess the number
            std::cout << "Enter your guess (between 1 and 100): ";
            std::cin >> guess;
            attempts++;

            // Provide feedback on the guess
            if (guess < secretNumber) {
                std::cout << "Too low! Try again." << std::endl;
            } else if (guess > secretNumber) {
                std::cout << "Too high! Try again." << std::endl;
            } else {
                std::cout << "Congratulations! You guessed the correct number " << secretNumber << " in " << attempts << " attempts." << std::endl;
            }

        } catch (...) {
            std::cerr << "Invalid input. Please enter a valid number." << std::endl;
            std::cin.clear();
        
        }
    }

    return 0;
}
