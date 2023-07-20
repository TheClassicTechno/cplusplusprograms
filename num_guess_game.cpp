#include <iostream>
#include <cstdlib>
#include <ctime>

int main() {
    // Generate random number
    srand(time(0));
    int secretNumber = rand() % 100 + 1; //1 to 100

    // Game initialization
    int guess;
    int attempts = 0;
    bool win = false;

    std::cout << "Welcome to the Guessing Game!\n";
    std::cout << "I'm thinking of a number between 1 and 100.\n\n";

    // Game loop
    while (!win) {
        std::cout << "Enter your guess: ";
        std::cin >> guess;
        attempts++;

        if (guess == secretNumber) {
            win = true;
        } else if (guess < secretNumber) {
            std::cout << "Too low! Try again.\n";
        } else {
            std::cout << "Too high! Try again.\n";
        }
    }

    // Game over
    std::cout << "\nCongratulations! You guessed the number in " << attempts << " attempts.\n";
    std::cout << "Thanks for playing!\n";

    return 0;
}
