// Lab 5 - loops.cpp  Working with looping structures
// Cameron Hui
#include "stdafx.h"
#include <iostream>
#include <cmath>
#include <iomanip>
using namespace std;

int main()
{
    cout << "Cameron Hui. \n";
    cout << "\nActivity 1 \n==========\n";
    // Change the following do-while loop to a while loop. //done
	int inputNum;
	cout << "Enter a number (or 0 to quit): ";
	cin >> inputNum;
	while (inputNum != 0)
    {  cout << "Enter a number (or 0 to quit): ";
       cin >> inputNum;
    } 

    cout << "\nActivity 2 \n==========\n";
    // Change the following while loop to a do-while loop. //done
    char doAgain = 'y';
    do
		{  cout << "Do you want to loop again? (y/n) ";
		   cin >> doAgain;
		}
	while (doAgain == 'Y' || doAgain == 'y');

    cout << "\nActivity 3 \n==========\n";
    // Change the following while loop to a for loop. //done
	for (int count = 0; count < 5; count++) 
       cout << "Count is " << count << endl;

    cout << "\nActivity 4 \n==========\n";
    // Change the following for loop to a while loop. //done
	int x = 5;
	while (x-- > 0) //fix
       cout << x << " seconds to go. \n";

    cout << "\nActivity 5 \n==========\n";
    // Make the following changes to the code below that uses nested loops:
    // 1. The code is supposed to print 3 lines with a $ and 5 stars on 
    //    each line, but it contains a logic error. Find and fix the error. 
    // 2. Then revise the code to follow each $ with just 4 stars, like this:
    //    $****
    //    $****
    //    $****
    // 3. Change the two loop control variable names to be more descriptive.
    for (int i = 1; i <= 3; i++)
    {  cout << '$';
       for (int j = 1; j <= 5; j++)
          cout << '*';
    }
    cout << endl;

	system("pause");
    return 0;
 }


