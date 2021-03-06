/*Write a program to behave exactly as shown with these 5 sample runs.  The user input is shown in bold face. 
So your program should ask the user how many brothers and sisters they have, input that value, and output the appropriate response
to make the program behave as shown below, along with the part asking for the names of your siblings, if appropriate. (You don't
need to keep or do anything with the names. Just input them.) The sample output is intended to demonstrate ranges of behavior.  So
all negative inputs should produce output like shown in the first example, and all inputs greater than 3 should produce output like
shown in the last example.  Similarly, all inputs between 1 and 3 should produce output like shown for those numbers.  Write your
program below and/or on another sheet of paper. Don’t forget to include comments. User input is shown in bold.
Cameron Hui */

#include "stdafx.h"
#include <iostream>
#include <string>
using namespace std;

int main()
 {
	int numSibs;        // Number of siblings
    cout << "How many siblings do you have? ";
    cin >> numSibs;
	string null;

	if (numSibs == 0)// use if/else if to do different responses. Use a while loops for 2+ siblings until you have all names.
		cout << "\nOh, you were an only child!\n";
	else if (numSibs >= 1)
	{
		if (numSibs <= 3)
		{
			cout << "\nSounds like a nice size family.\n";
			for (int count = 1; count <= numSibs; count++)
			{
				cout << "\nWhat's the name of your #" << count << " sibling? ";
				cin >> null;
			}
		}
		else
		{
			cout << "\nA big family!\n";
			for (int count = 1; count <= numSibs; count++)
			{
				cout << "\nWhat's the name of your #" << count << " sibling? ";
				cin >> null;
			}
		}
	}
    else
		cout << "\nHow could that be?\n";
	
	system("pause");
    return 0;
 }


