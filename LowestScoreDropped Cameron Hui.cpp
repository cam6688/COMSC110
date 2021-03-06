// LowestScoreDropped
// Write a program that calculates the average of a group of test scores, where the lowest score in the group is dropped.
// Cameron Hui COMSC110

#include "stdafx.h"
#include <iostream>
#include <cmath>
using namespace std;

void getScore(int&);
int inputValid(int, int, int&);
void calcAverage(int, int, int, int, int);
int findLowest(int&, int&, int&, int&, int&);

int main()
{
	cout << "This program calculates the average of five test scores, with the lowest score dropped.\n";
	cout << "Enter a test score: ";
	int score1;
	cin >> score1;
	getScore(score1);
	cout << "Enter a test score: ";
	int score2;
	cin >> score2;
	getScore(score2);
	cout << "Enter a test score: ";
	int score3;
	cin >> score3;
	getScore(score3);
	cout << "Enter a test score: ";
	int score4;
	cin >> score4;
	getScore(score4);
	cout << "Enter a test score: ";
	int score5;
	cin >> score5;
	getScore(score5);

	calcAverage(score1, score2, score3, score4, score5);

	system("pause");
    return 0;
}

void getScore(int &score) {
	inputValid(0, 100, score);
}
/* should ask the user for a test score, store it in a reference parameter variable, and validate it. This function should be called by
main once for each of the five scores to be entered.*/

int inputValid(int min, int max, int &input) {

	while (input < min || input > max) {
		cout << "Invalid input. Enter a score between 0 and 100: ";
		cin >> input;
	}

	return input;
}
/*INPUT VALIDATION: DO NOT ACCEPT TEST SCORES LOWER THAN 0 OR HIGHER THAN 100*/

void calcAverage(int one, int two, int three, int four, int five){
	double sum, average;
	int min;
	min = findLowest(one, two, three, four, five);
	if (min == one)
		one = 0;
	if (min == two)
		two = 0;
	if (min == three)
		three = 0;
	if (min == four)
		four = 0;
	if (min == five)
		five = 0;
	sum = one + two + three + four + five;
	average = sum / 4;
	cout << "The average is " << average << ".";
}
/* should calculate and display the average of the four highest scores. This function should be called just once by main, and should be
passed the five scores.*/

int findLowest(int &num1, int &num2, int &num3, int &num4, int &num5){
	int min = num1;
	if (num2 < min)
		min = num2;
	if (num3 < min)
		min = num3;
	if (num4 < min)
		min = num4;
	if (num5 < min)
		min = num5;
	return min;
}
/* should find and return the lowest of the five scores passed to it. It should be called by calcAverage, which uses the function to
determine one of the five scores to drop.*/

