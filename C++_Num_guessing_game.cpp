//
// Created by Daniel Nwachukwu on 31/07/2026.
//
//Program stars here.
#include <iostream>
#include <random>
#include <cstdlib>
//#include <string>
using namespace std;

char choice = 'n';

int main () {
    //Generate a random number between 1 and 100.
    srand(time(0));
    int randomNumber = rand() % 100 + 1;

    // Declare variables for the guess and attempt.
    int attempts = 0;
    int guess = 0;
    cout << " welcome to the Number Guessing Game! " << endl;

    // Ask for guess until the correct one.
    /*while (guess != randomNumber) {
        cout << " guess the number: " << endl;
        cin >> guess;
        attempts++;

        // Compare the guesses with the randomNumber.
        if (guess < randomNumber) {
            cout << " too low!, try again." << endl;
        }
        else if (guess > randomNumber) {
            cout << " too high!, try again. " << endl;
        }
        else {
            cout << "correct! . You guessed it in " << attempts << " attempts" << endl;
        }
        // if player reaches 10 attempts, Game should stop!
        if (attempts > 2) {
            cout << "you lost! Game over!, The number was " << randomNumber << endl;
            break;
        }
    }*/
    // Asking the Player to Repeat the Game
    srand(time(0));
    do {
        randomNumber = rand() % 100 + 1;
        attempts = 0 ;
        guess = 0;

        while (guess != randomNumber) {
            cout << " guess the number: " << endl;
            cin >> guess;
            attempts++;

            if (guess < randomNumber) {
                cout << " too low!, try again." << endl;
            }
            else if (guess > randomNumber) {
                cout << " too high!, try again. " << endl;
            }
            else {
                cout << "correct! . You guessed it in " << attempts << " attempts" << endl;
            }

            if (attempts > 2) {
                cout << "you lost! Game over!, The number was " << randomNumber << endl;
                break;
            }
        }


        cout << " Do you want to Play Again? (y/n): ";
        cin >> choice;

    }while (choice == 'Y' || choice == 'y');
    cout << " THANK YOU FOR PLAYING SEE YOU NEXT TIME ";

    // End the program.
    return 0;
}
