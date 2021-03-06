// Cameron Hui Test 3.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include <iostream>                           // includes the header file allowing the user to input and for the compiler to output text.        
using namespace std;                          // 

bool searchList(const long[], int, long);    //  Creates a function named searchList that returns a boolean value (true/false). The parameters for the function are a constant array named long
						
const int SIZE = 10;                          //

int main()                                    //
{
	long ticket[SIZE] = { 13579,  26791,       //
		26792,  33445,
		55555,  62483,
		77777,  79422,
		85647,  93121 };


	long winningNum;                           //

	cout << "\nPlease enter this week's 5-digit "   //
		<< "winning lottery number: ";              //    

	cin >> winningNum;                             //


	if (searchList(ticket, SIZE, winningNum))       //  
	{

		cout << "You have a winning ticket.\n";      //
	}
	else                                            //
	{
		cout << "You did not win this week." << endl;    //
	}
	
	system("pause");
	return 0;                             //
}

bool searchList(const long list[], int numElems, long value)
{
	bool found = false;                            //

	for (int count = 0; count < numElems && !found; count++)
	{
		if (list[count] == value)      //
			found = true;               //
	}

	return found;                     //  
}
