#include <iostream>
#include <cstdlib>
#include <ctime>

int main() {
    srand(time(0)); 

    int secretNumber = rand() % 100 + 1;
    int guess;

    std::cout << "Guess the number between 1 and 100: ";

    do {
        std::cin >> guess;

        if (guess == secretNumber) {
            std::cout << "Congratulations! You guessed the correct number.\n";
            break;
        } else if (guess < secretNumber) {
            std::cout << "Too low!  \n Try again: ";
        } else {
            std::cout << "Too high! \n  Try again: ";
        }
    } while (true);

    return 0;
}