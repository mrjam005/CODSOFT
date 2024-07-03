/*Create a program that generates a random number and asks the
user to guess it. Provide feedback on whether the guess is too
high or too low until the user guesses the correct number.
use loops and switch case for different Options
*/
#include <iostream>
#include <cstdlib>
#include <ctime>
using namespace std;

int main() {
    int number, guess, tries;
    char choice;
    bool playAgain = true;

    srand(time(0));

    while (playAgain) {
        number = rand() % 100 + 1;
        cout << "Guess My Number Game\n\n";
        cout << "1. Play\n";
        cout << "2. Exit\n";
        cout << "Enter your choice (1-2): ";
        cin >> choice;

        switch (choice) {
            case '1':
                tries = 0;
                for (int i = 0; i < 10; ++i) { // Limiting to 10 guesses for added challenge
                    cout << "Enter a guess between 1 and 100: ";
                    cin >> guess;
                    tries++;

                    if (guess > number) {
                        cout << "Too high!\n\n";
                    } else if (guess < number) {
                        cout << "Too low!\n\n";
                    } else {
                        cout << "\nCorrect! You got it in " << tries << " guesses!\n";
                        break; // Exit the for loop if guessed correctly
                    }
                }
                if (guess != number) {
                    cout << "Sorry, you didn't guess the number. It was " << number << ".\n";
                }
                break;
            case '2':
                playAgain = false;
                cout << "Thank you for playing.\n";
                break;
            default:
                cout << "Invalid choice. Please enter 1 or 2.\n";
        }
    }

    return 0;
}
