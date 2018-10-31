// COMSC110 Test 1 Part 2 Spring 2018 Cameron Hui
/* test pt 2 : w/ comments
take name
og weight
pounds lost
(lost / original weight) * 100 - to find % lost
current weight*/

#include "stdafx.h"
#include <iostream>
#include <cmath>
#include <iomanip>
#include <string>
using namespace std;


int main()
{
	double originalWeight, lostWeight, currentWeight, percentLost;
	string name;

	cout << "What is the member's name?"; // taking input for the member name
	cin >> name;
	cout << "How much did you weigh?"; // takes input for original weight
	cin >> originalWeight;
	cout << "How many pounds have you lost?"; // takes input for lost weight
	cin >> lostWeight;
	percentLost = (lostWeight / originalWeight) * 100; // calculates lost weight as a percentage
	currentWeight = originalWeight - lostWeight; // calculates current weight
	cout << "The member " << name << " has lost " << setprecision(2) << fixed << percentLost << "% of weight and now weighs " << currentWeight << " pounds." << endl;
	
	system("pause");
	return 0;
}

