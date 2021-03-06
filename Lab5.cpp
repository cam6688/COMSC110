// Lab 5 - cookies.cpp
// This program finds the average number of boxes of cookies sold by the children in a particular scout troop. 
// It illustrates the use of a counter, an accumulator, and an end sentinel.
// Cameron Hui
#include "stdafx.h"
#include <iostream>
#include <cmath>
#include <iomanip>
using namespace std;

int main()
{
	int numBoxes;          // Number of boxes of cookies sold by one child
    double totalBoxes,        // Accumulates total boxes sold by the entire troop
        numSeller;         // Counts the number of children selling cookies

    double averageBoxes;   // Average number of boxes sold per child

    // WRITE CODE TO INITIALIZE THE totalBoxes ACCUMLATOR TO 0 AND THE numSeller COUNTER TO 1.
	totalBoxes = 0, numSeller = 1;
    cout << "             **** Cookie Sales Information **** \n\n";

    // Get the first input
    cout << "Enter number of boxes of cookies sold by seller " << numSeller << " (or -1 to quit): ";
    cin >> numBoxes;

    // WRITE CODE TO START A while LOOP THAT LOOPS WHILE numBoxes IS NOT EQUAL TO -1, THE SENTINEL VALUE.
	while (numBoxes != -1)
	{
		// WRITE CODE TO PROMPT FOR AND INPUT THE NUMBER OF BOXES SOLD BY THE NEXT SELLER.
		while (numBoxes < -1)
		{
			cout << "What is the number of boxes?";
			cin >> numBoxes;
		}
		// WRITE CODE TO ADD numBoxes TO THE totalBoxes ACCUMULATOR.
		totalBoxes += numBoxes;
		// WRITE CODE TO ADD 1 TO THE numSeller COUNTER.
		numSeller += 1;
		cout << "What is the number of boxes?";
		cin >> numBoxes;
		
    }
    // WHEN THE LOOP IS EXITED, THE VALUE STORED IN THE numSeller COUNTER WILL BE ONE MORE THAN THE ACTUAL NUMBER OF SELLERS.
	// SO WRITE CODE TO ADJUST IT TO THE ACTUAL NUMBER OF SELLERS.
	numSeller = numSeller - 1;

    if (numSeller == 0)        // If true, -1 was the very first entry
       cout << "\nNo boxes were sold.\n";
    else
    {  // WRITE CODE TO ASSIGN averageBoxes THE COMPUTED AVERAGE NUMBER OF BOXES SOLD PER SELLER.
       // WRITE CODE TO PRINT OUT THE NUMBER OF SELLERS AND AVERAGE NUMBER OF BOXES SOLD PER SELLER.
		averageBoxes = totalBoxes / numSeller;
		cout << "The average number of boxes sold by the " << numSeller << " sellers was " << averageBoxes << ".";
    }

	system("pause");
    return 0;
 }