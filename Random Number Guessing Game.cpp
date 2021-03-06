// Random Number Guessing Game
// Cameron Hui COMSC110
/* Write a program that generates a random number between 1 and 100 and asks the user to guess what the number is. If the user's guess is 
higher than the random number, the program should display "Too high. Try Again". IF the user's guess is lower than the random number, 
the program should display "Too low. Try again." The program should use a loop that repeats until the user correctly guesses the random 
number. Then the program should display "Congratulations! You figured out my number!"*/

#include "stdafx.h"
#include <iostream>
#include <cstdlib>
#include <cmath>
using namespace std;


int main()
{
	int guess;
	int randNum = (rand() % (1 - 100));
	do {
		cout << "Guess my number (any from 1-100). ";
		cin >> guess;
		if (guess < randNum)
			cout << "\nToo low.\n";
		else if (guess > randNum)
			cout << "\nToo high.\n";
	}while (guess != randNum);
	cout << "Congratulations! You figured out my number!";
	system("pause");
    return 0;
}

