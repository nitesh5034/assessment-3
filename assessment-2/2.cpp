#include <iostream>
#include <stdlib.h>   // for rand() and srand()
#include <ctime>      // for time()

using namespace std;

// Class for Rock Paper Scissors Game
class RockPaperScissors {
public:
    // Function to start the game
    void startGame() {
        int userChoice, compChoice;
        char playAgain;

        // Menu driven loop
        do {
            // Display the Menu
            cout << "\n======= Rock Paper Scissors Game =======\n";
            cout << "1. Rock\n";
            cout << "2. Paper\n";
            cout << "3. Scissors\n";
            cout << "Enter your choice (1-3): ";
            cin >> userChoice;

            // Generate random number for computer choice
            srand(time(0));              // Seeding the random number generator
            compChoice = (rand() % 3) + 1; // Random value between 1 and 3

            // Display user and computer choices
            cout << "You chose: " << choiceName(userChoice) << endl;
            cout << "Computer chose: " << choiceName(compChoice) << endl;

            // Game logic using conditional statements
            if (userChoice == compChoice) {
                cout << "Result: It's a Draw!" << endl;
            } else if ((userChoice == 1 && compChoice == 3) ||
                       (userChoice == 2 && compChoice == 1) ||
                       (userChoice == 3 && compChoice == 2)) {
                cout << "Result: You Win!" << endl;
            } else {
                cout << "Result: Computer Wins!" << endl;
            }

            // Ask if user wants to play again
            cout << "\nDo you want to play again? (y/n): ";
            cin >> playAgain;

        } while (playAgain == 'y' || playAgain == 'Y');
    }

    // Helper function to convert choice number to name
    string choiceName(int choice) {
        switch (choice) {
            case 1: return "Rock";
            case 2: return "Paper";
            case 3: return "Scissors";
            default: return "Invalid Choice";
        }
    }
};

// Main function
int main() {
    // Create object of the class
    RockPaperScissors game;

    // Call function through object
    game.startGame();

    return 0;
}
