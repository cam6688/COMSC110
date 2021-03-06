// Lab 5 - summation.cpp
// This program displays a series of terms and computes its sum.
// Cameron Hui                    
#include "stdafx.h"
#include <iostream>
#include <cmath>
#include <string>
using namespace std;

int main()
{
	int n;				// Final denominator
	string choice;	// Sets the expression to allow for loop later

	cout << "Cameron Hui. \n";
	cout << "This program sums the series 1/2^1 + 1/2^2 + 1/2^3 + . . . + 1/2^n \n";
	cout << "Would you like to try? (Y or y for yes, N or n for no.) ";
	cin >> choice;
	do {
		if ((choice == "y") || (choice == "Y")) {
			cout << "What should n be in the final term (can only be 2 - 10)? ";
			cin >> n;
			double sum = 0.0;     // Accumulator that adds up all terms in the series
			// WRITE THE CODE TO START A FOR LOOP THAT LOOPS ONCE FOR EACH TERM.
			// I.E., FOR TERMS WITH DENOMINATORS FROM 2 TO THE FINAL DENOMINATOR.
			for (int count = 1; count <= n; count++) {
				// WRITE THE CODE TO PRINT THIS TERM.
				double term = (1 / ((pow(2, count))));
				cout << "1/" << pow(2, count);
				// IF IT IS NOT THE LAST TERM, FOLLOW IT WITH A +.
				if (count < n)
					cout << " + ";
				// IF IT IS THE LAST TERM, FOLLOW IT WITH A =.
				else if (count == n)
					cout << " = ";
				// WRITE THE CODE TO ADD THE VALUE OF THIS TERM TO THE ACCUMULATOR.
				sum = sum + term;
			}
			// WRITE A LINE OF CODE TO PRINT THE SUM.  
			cout << sum;
			cout << "\nWould you like to try again? (Y or y for yes, N or n for no.) ";
			cin >> choice;
		}
		else if ((choice == "n") || (choice == "N"))
			//system("exit");
			break;
		else
			cout << "Invalid input.";

	} while ((choice != "n") || (choice != "N"));
	system("pause");
	return 0;
}