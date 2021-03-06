// Lab 3 icecream.cpp
// This program prompts the user to enter the number of each cone type sold that day, and then computes and displays a
// daily sales report that includes the following nicely formatted and labeled information:
/* Number of cones sold of each type, Total sales $ of each type, Total number of cones sold, Total sales $ of all cones sold */
// Cameron Hui
#include "stdafx.h"
#include <iostream>
#include <cmath>
#include <iomanip>
#include <string>
using namespace std;

int main()
{
	// DEFINE NAMED CONSTANTS HERE TO HOLD THE PRICES OF THE 3 SIZES OF ICE CREAM CONES. GIVE EACH ONE A DESCRIPTIVE NAME AND AN APPROPRIATE DATA TYPE.
	double singdelight = 1.49, doubdelight = 2.49, tripdelight = 3.49;

	// DECLARE ALL NEEDED VARIABLES HERE. GIVE EACH ONE A DESCRIPTIVE NAME AND AN APPROPRIATE DATA TYPE. 
		int singsold, doubsold, tripsold, totalsold;
		double singamount, doubamount, tripamount, totalamount;
	// WRITE STATEMENTS HERE TO PROMPT FOR AND INPUT THE INFORMATION THE PROGRAM NEEDS TO GET FROM THE USER.
		cout << "Input the number of single, double, and triple scoops sold. Separate each number by one or more spaces.";
		cin >> singsold >> doubsold >> tripsold;

	// WRITE STATEMENTS HERE TO PERFORM ALL NEEDED COMPUTATIONS AND ASSIGN THE RESULTS TO VARIABLES.
		singamount = singsold * singdelight;
		doubamount = doubsold * doubdelight;
		tripamount = tripsold * tripdelight;
		totalsold = singsold + doubsold + tripsold;
		totalamount = (singdelight * singsold) + (doubdelight * doubsold) + (tripdelight * tripsold);
	// WRITE STATEMENTS HERE TO DISPLAY THE REQUESTED INFORMATION.
		cout << "Number of single scoop cones sold: " << singsold << "\n";
		cout << "Number of double scoop cones sold: " << doubsold << "\n";
		cout << "Number of triple scoop cones sold: " << tripsold << "\n\n";
		cout << setw(20) << left << "DeLIGHTful cones" << setw(5) << right << singsold << "    $ " << setprecision(2) << fixed << singamount << "\n";
		cout << setw(20) << left << "Double DeLIGHT cones" << setw(5) << right << doubsold << "    $ " << setprecision(2) << fixed << doubamount << "\n";
		cout << setw(20) << left << "Triple DeLIGHT cones" << setw(5) << right << tripsold << "    $ " << setprecision(2) << fixed << tripamount << "\n";
		cout << setw(20) << left << "Total" << setw(5) << right << totalsold << "    $ " << setprecision(2) << fixed << totalamount << "\n";
	system("pause");
	return 0;
}




