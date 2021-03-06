// GeometryCalcIfElse.cpp 
/* Write a program that displays the following menu:
Geometry Calculator
1. Calculate the area of a circle
2. Calculate the area of a rectangle
3. Calculate the area of a triangle
4. Quit */
// Cameron Hui
#include "stdafx.h"
#include <iostream>
#include <cmath>
using namespace std;

int main()
{
	double pi = 3.13159;
	int choice;
	double radius, length, width, base, height, area;

	cout << "Choose a shape to calculate the area. \n\n";
	cout << "1 circle \n" << "2 rectangle \n" << "3 triangle \n" << "4 quit \n";

	cin >> choice;

	if (choice == 1) {
		cout << "What is the radius of the circle? Input 1 value: ";
		cin >> radius;
		if (radius <= 0) {
			cout << "Error: Invalid radius.";
		}
		else {
			area = (pow(radius, 2)) * pi;
			cout << "The area of your circle is " << area << ". \n";
		}
	}
	else if (choice == 2) {
		cout << "How long are the sides of the rectangle? Input 2 values with a space in between: ";
		cin >> length >> width;
		if (length < 0 || width < 0) {
			cout << "Error: Invalid input.";
		}
		else {
			area = length * width;
			cout << "The area of your square is " << area << ". \n";
		}
	}
	else if (choice == 3) {
		cout << "What are the lengths of each side of the triangle? Input 2 values with a space in between: ";
		cin >> base >> height;
		if (base < 0 || height < 0) {
			cout << "Error: Invalid input.";
		}
		else {
			area = (base * height) / 2;
			cout << "The area of your triangle is " << area << ". \n";
		}
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