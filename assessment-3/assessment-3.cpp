#include <iostream>
#include <cstdlib>
#include <ctime>
using namespace std;

string choiceName(int choice)   
{
    switch (choice) {
        case 1: return "Rock";
        case 2: return "Paper";
        case 3: return "Scissors";
        default: return "Invalid Choice";
    }
}

int main()
{
    char userchoice, playagain;
    int user, comp;

    srand(time(0));  
    comp = rand() % 3 + 1;   
    cout << "Welcome to rock paper scissors game\n";
    cout << "1. Rock\n2. Paper\n3. Scissors\n";
    cout << "Enter your choice (1-3): ";
    cin >> user;

    cout << "You chose: " << choiceName(user) << endl;
    cout << "Computer chose: " << choiceName(comp) << endl;

    if (user == comp) {
        cout << "It's a tie!\n";
    }
    else if ((user == 1 && comp == 3) || 
             (user == 2 && comp == 1) || 
             (user == 3 && comp == 2)) {
        cout << "You win!\n";
    }
    else {
        cout << "Computer wins!\n";
    }

    cout << "Do you want to play again? (y/n): ";
    cin >> playagain;
    if (playagain == 'y' || playagain == 'Y') {
        main();   
    }

    return 0;
}