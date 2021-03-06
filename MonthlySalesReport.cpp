/*A retail company must file a monthly sales tax report listing the sales for the month and the amount of sales tax collected.
Write a program that asks for the month, the year, and the toal amount collected at the cash register (that is,
sales plus sales tax).  Assume the state sales tax is 4 percent and the county sales tax is 2 percent.*/
//Cameron Hui COMSC 110

#include "stdafx.h"
#include <cmath>
#include <iostream>
#include <iomanip>
#include <string>
using namespace std;


int main()
{
	double S, T, totax, statax, cotax, statetax, countytax, totaltax;
	string month;
	int year;
	totax = 0.06, statax = 0.04, cotax = 0.02;

	cout << "What is the month?\n";
	cin >> month;
	cout << "What is the year?\n";
	cin >> year;
	cout << "What was the total amount collected at the cash register?\n";
	cin >> T;
	S = T / (1 + totax);
	statetax = statax * S;
	countytax = cotax * S;
	totaltax = totax * S;

	cout << "Date: " << month << " " << year << "\n";
	cout << "-----------------------------" << "\n";
	cout << "Total Collected:	$" << setw(12) << right << T << "\n";
	cout << "Sales:			$" << setw(12) << right << setprecision(2) << fixed << S << "\n";
	cout << "County Sales Tax:	$" << setw(12) << right << setprecision(2) << fixed << countytax << "\n";
	cout << "State Sales Tax:	$" << setw(12) << right << setprecision(2) << fixed << statetax << "\n";
	cout << "Total Sales Tax:	$" << setw(12) << right << setprecision(2) << fixed << totaltax << "\n";

	system("pause");
	return 0;
}

