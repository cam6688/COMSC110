// Lab 4 areas.cpp 
/* Create a menu-driven program that finds and displays areas of 3 different objects.
The menu should have the following 4 choices:
1 --square // finds the area of a square
2 --circle // finds the area of a circle
3 --right triangle // finds the area of a right triangle
4 --quit // quits the program */
// Cameron Hui
#include "stdafx.h"
#include <iostream>
#include <cmath>
using namespace std;

int main()
{
	double pi = 3.13159; // DEFINE THE NAMED CONSTANT PI HERE AND SET ITS VALUE TO 3.14159
	int choice;
	double sideLength1, sideLength2, area; // DECLARE ALL NEEDED VARIABLES HERE. GIVE EACH ONE A DESCRIPTIVE NAME AND AN APPROPRIATE DATA TYPE. 

	// WRITE STATEMENTS HERE TO DISPLAY THE 4 MENU CHOICES.
	cout << "Choose a shape to calculate the area. \n\n";
	cout << "1 square \n" << "2 circle \n" << "3 right triangle \n" << "4 quit \n";

	// Get the user's choice
	cin >> choice;

	// WRITE A STATEMENT HERE TO INPUT THE USER'S MENU CHOICE.
	if (choice == 1) {
		cout << "How long are the sides of the square? Input 1 value: ";
		cin >> sideLength1;
		area = pow(sideLength1, 2);
		cout << "The area of your square is " << area << ". \n";
	}
	else if (choice == 2) {
		cout << "What is the radius of the circle? Input 1 value: ";
		cin >> sideLength1;
		area = (pow(sideLength1, 2)) * pi;
		cout << "The area of your circle is " << area << ". \n";
	}
	else if (choice == 3) {
		cout << "What are the lengths of each side of the triangle? Input 2 values with a space in between: ";
		cin >> sideLength1 >> sideLength2;
		area = (sideLength1 * sideLength2) / 2;
		cout << "The area of your triangle is " << area << ". \n";
	}
	else if (choice == 4) {
		cout << "Press any key to quit.";
		system("pause");
		return 0;
	}
	else
		cout << "Error: invalid input.";

	system("pause");
	return 0;
}


