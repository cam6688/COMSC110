// MinMax.cpp : Defines the entry point for the console application.
/*Write a program that asks the user to enter two numbers. The program should use the con-
ditional operator to determine which number is the smaller and which is the larger.*/
// Cameron Hui

#include "stdafx.h"
#include <iostream>

using namespace std;


int main()
{
	double num1, num2;
	double higher, lower;

	cout << "Enter your two numbers here and I will tell you which one is bigger and smaller. Enter two numbers with a space to separate them.\n";
	cin >> num1 >> num2;

	if (num1 == num2) {
		cout << "The two numbers are equal.";
		system("pause");
		return 0;
	}
	else
		higher = num1 > num2 ? num1 : num2;
		lower = num1 < num2 ? num1 : num2;
		cout << higher << " is bigger, while " << lower << " is smaller.";

	system("pause");
    return 0;
}

