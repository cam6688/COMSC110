// Lab 6 fortunes.cpp 
// This fortune telling program will be modified to use a void function.
// Cameron Hui
#include "stdafx.h"
#include <iostream>
#include <cmath>
using namespace std;

// Function prototype
// WRITE A PROTOTYPE FOR THE tellFortune FUNCTION HERE.
void tellFortune(int, int);

 /*****     main     *****/
 int main()
 {
   int numYears,
       numChildren;

   cout << "This program can tell your future. \n" << "Enter two integers separated by a space: ";

   cin >> numYears >> numChildren;

   tellFortune(numYears, numChildren);

   system("pause");
   return 0;
 }

 /*****     tellFortune     *****/
 // WRITE THE tellFortune FUNCTION HEADER HERE.
 // WRITE THE BODY OF THE tellFortune FUNCTION HERE.
 void tellFortune(int sumYears, int sumChildren)
 {
	 sumYears = abs(sumYears) % 5;       // Convert to a positive integer 0 to 4
	 sumChildren = abs(sumChildren) % 6; // Convert to a positive integer 0 to 5

	 cout << "\nYou will be married in " << sumYears << " years " << "and will have " << sumChildren << " children.\n";
 }