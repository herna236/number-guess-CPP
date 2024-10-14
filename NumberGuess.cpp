#include <iostream>
#include <cstdlib>
#include <ctime>

using namespace std;

int main() {
    // Seed the random number generator/ makes sure that the number is different everytime
    srand(static_cast<unsigned int>(time(0)));

    // Generate a random number between 1 and 100
    int targetNumber = rand() % 100 + 1;
    int guess;
    int attempts = 0;

    cout << "Welcome to Guess the Number!" << endl;

    do {
        cout << "Enter your guess (1-100): ";
        cin >> guess;
        attempts++;

        if (guess > targetNumber) {
            cout << "Oops! Too high." << endl;
        } else if (guess < targetNumber) {
            cout << "Oops! Too low." << endl;
        } else {
            cout << "Congratulations! You guessed the number in " << attempts << " attempts!" << endl;
        }
    } while (guess != targetNumber);

    return 0;
}
