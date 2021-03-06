// Lab 6 choice.cpp 
// This program illustrates how to use a value-returning 
// function to get, validate, and return input data.
// Cameron Hui COMSC 110

#include "stdafx.h"
#include <iostream>
#include <cmath>
using namespace std;

// Function prototype
int getChoice(int, int);

int main()
{
	int choice, value1, value2;

	cout << "Input your maximum and minimum values, with minimum value first. Separate with a space: ";
	cin >> value1 >> value2;
	cout << "Enter an integer between those two values: ";

    // WRITE A LINE OF CODE TO CALL THE getChoice FUNCTION AND TO ASSIGN THE VALUE IT RETURNS TO THE choice VARIABLE.
	choice = getChoice(value1, value2);

    cout << "You entered " << choice << endl;
	system("pause");
	return 0;
 }

int getChoice(int min, int max)
{
	int input;

    // Get and validate the input
    cin >> input;
    while (input < min || input > max)
    {  cout << "Invalid input. Enter an integer between 1 and 4: ";
       cin >> input;
    }
    return input;
 }