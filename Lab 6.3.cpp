// Lab 6 areas3.cpp 
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
void findSquareArea();
void findCircleArea();
void findTriangleArea();
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
		cin >> choice;
		// WRITE A STATEMENT HERE TO INPUT THE USER'S MENU CHOICE.
		if (choice == 1) {
			findSquareArea();
		}
		else if (choice == 2) {
			findCircleArea();
		}
		else if (choice == 3) {
			findTriangleArea();
		}
		else if (choice == 4)
			system("exit");
		else
			cout << "Error: invalid input.\n\n\n";
	} while (choice != 4);
}

void findSquareArea() {
	double side, area;
	cout << "How long are the sides of the square? Input 1 value: ";
	cin >> side;
	area = pow(side, 2);
	cout << "The area of your square is " << area << ". \n\n\n";
}

void findCircleArea() {
	double radius, area;
	cout << "What is the radius of the circle? Input 1 value: ";
	cin >> radius;
	area = (pow(radius, 2)) * pi;
	cout << "The area of your circle is " << area << ". \n\n\n";
}

void findTriangleArea() {
	double sideLength1, sideLength2, area;
	cout << "What are the lengths of each side of the triangle? Input 2 values with a space in between: ";
	cin >> sideLength1 >> sideLength2;
	area = (sideLength1 * sideLength2) / 2;
	cout << "The area of your triangle is " << area << ". \n\n\n";
}