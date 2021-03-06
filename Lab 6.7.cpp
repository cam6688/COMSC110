// Lab 6 kiloConverter.cpp 
// This menu-driven program lets the user convert pounds to kilograms and kilograms to pounds.
// Cameron Hui COMSC110
#include "stdafx.h"
#include <iostream>
#include <cmath>
using namespace std;

// Function prototypes
// WRITE PROTOTYPES FOR THE displayMenu, getChoice, kilosToPounds and poundsToKilos FUNCTIONS HERE.
int getChoice(int, int);
void displayMenu();
double kilosToPounds(double);
double poundsToKilos(double);

/*****     main     *****/
int main()
{
    // DECLARE ANY VARIABLES MAIN USES HERE.

    // WRITE THE CODE HERE TO CARRY OUT THE STEPS REQUIRED BY THE PROGRAM SPECIFICATIONS.
	displayMenu();

	system("pause");
    return 0;
 }

 /*****     displayMenu     *****/
 // WRITE THE displayMenu FUNCTION HERE.
 // THIS void FUNCTION DISPLAYS THE MENU CHOICES
 //  1. Convert kilograms to pounds
 //  2. Convert pounds to kilograms
 //  3. Quit
void displayMenu() {
	int choice;
	do
	{
		cout << "Choose to convert what to what below. \n\n";
		cout << "1. Convert kilograms to pounds \n" << "2. Convert pounds to kilograms \n" << "3. Quit \n";
		// Get the user's choice
		choice = getChoice(1, 3);
		// WRITE A STATEMENT HERE TO INPUT THE USER'S MENU CHOICE.
		if (choice == 1) {
			double pounds1, kilos1;
			cout << "Weight to be converted: ";
			cin >> kilos1;
			pounds1 = kilosToPounds(kilos1);
			cout << kilos1 << " kilos = " << pounds1 << " pounds." << endl;
		}
		else if (choice == 2) {
			double kilos2, pounds2;
			cout << "Weight to be converted: ";
			cin >> pounds2;
			kilos2 = poundsToKilos(pounds2);
			cout << pounds2 << " pounds = " << kilos2 << " kilos." << endl;
		}
		else if (choice == 3)
			system("exit");
	} while (choice != 3);
}

 /*****     getChoice     *****/
 // THIS IS THE SAME FUNCTION YOU WROTE EARLIER IN THIS SET OF LAB EXERCISES. JUST FIND IT AND PASTE IT HERE. 
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


/*****     kilosToPounds     *****/
// WRITE THE kilosToPounds FUNCTION HERE.
// IT RECEIVES A WEIGHT IN KILOS AND MUST CALCULATE AND RETURN THE EQUIVALENT NUMBER OF POUNDS.
double kilosToPounds(double kilos) {
	double pounds;
	return pounds = kilos * 2.20462;
}

 /*****    poundsToKilos     *****/
 // WRITE THE poundsToKilos FUNCTION HERE.
 // IT RECEIVES A WEIGHT IN POUNDS AND MUST CALCULATE AND RETURN THE EQUIVALENT NUMBER OF KILOS.
double poundsToKilos(double pounds) {
	double kilos;
	return kilos = pounds * 0.453592;
}