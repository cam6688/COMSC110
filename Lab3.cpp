// Lab 3 tryIt3A Cameron Hui

#include "stdafx.h"
#include <iostream>
#include <cmath>

using namespace std;

/*int main()
{
	int someInt, w = 5, x = 9, y = 2, z = 7;
	char someChar = 'A';
	cout << "tryIt3A output \n";
	z += 3;
	cout << z << "  " << z % w << endl;
	z *= w + y;
	cout << z << endl;
	z -= 60.1;
	cout << z << endl;
	cout << (x - 1) / (x - w) * y << endl;
	cout << (x - 1) / ((x - w) * y) << endl;
	cout << static_cast<double>(x) / y << endl;
	cout << x / y << endl;
	cout << (w + x % 7 / y) << endl;
	cout << (abs(y - w) + sqrt(x)) << endl;
	someInt = someChar;
	cout << someChar << "  "
		<< someInt << endl;
	system("pause");
	return 0;
}*/

// Lab 3 findErrors.cpp
// This program contains many syntax errors and will not compile.
// Fix the errors so that it correctly finds the average of the
// two integers the user enters. 
// Cameron Hui
int main()
{
	int num, num2;
	double average;

	// Input 2 integers
	cout << "Enter two integers separated by one or more spaces: ";
	cin >> num1, num2;

	//Find and display their average
	average = (num1 + num2) / 2;

	cout << "\nThe average of these 2 numbers is " << average << "endl";

	system("pause");
	return 0;
}