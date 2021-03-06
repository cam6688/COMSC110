// Lab 6 areas4.cpp 
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

void displayMenu();
double findSquareArea();
double findCircleArea();
double findTriangleArea();
int getChoice(int, int);
double pi = 3.13159; // DEFINE THE NAMED CONSTANT PI HERE AND SET ITS VALUE TO 3.14159

int main()
{
	displayMenu();

	system("pause");
	return 0;
}

void displayMenu() {
	int choice;
	do
	{
		cout << "Choose a shape to calculate the area. \n\n";
		cout << "1 square \n" << "2 circle \n" << "3 right triangle \n" << "4 quit \n";
		// Get the user's choice
		choice = getChoice(1, 4);
		// WRITE A STATEMENT HERE TO INPUT THE USER'S MENU CHOICE.
		if (choice == 1) {
			cout << "Area = " << findSquareArea() << endl;
		}
		else if (choice == 2) {
			cout << "Area = " << findCircleArea() << endl;
		}
		else if (choice == 3) {
			cout << "Area = " << findTriangleArea() << endl;
		}
		else if (choice == 4)
			system("exit");
	} while (choice != 4);
}

double findSquareArea() {
	double side, area;
	cout << "How long are the sides of the square? Input 1 value: ";
	cin >> side;
	return area = pow(side, 2);
}

double findCircleArea() {
	double radius, area;
	cout << "What is the radius of the circle? Input 1 value: ";
	cin >> radius;
	return area = (pow(radius, 2)) * pi;
}

double findTriangleArea() {
	double sideLength1, sideLength2, area;
	cout << "What are the lengths of each side of the triangle? Input 2 values with a space in between: ";
	cin >> sideLength1 >> sideLength2;
	return area = (sideLength1 * sideLength2) / 2;
}

int getChoice(int min, int max)
{
	int input;

	// Get and validate the input
	cin >> input;
	while (input < min || input > max)
	{
		cout << "Invalid input. Enter an integer between 1 and 4: ";
		cin >> input;
	}
	return input;
}