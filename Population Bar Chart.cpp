// Population Bar Chart.cpp
// The program should read in the population figures (rounded to the nearest 1000 people) from a file. For each year it should display 
// the date and a bar consisting of one asterisk for each 1000 people.
// Cameron Hui COMSC110
#include "stdafx.h"
#include <iostream>
#include <fstream>
#include <string>
#include <cmath>

using namespace std;

int main()
{
	int popl, ast, year = 1900;
	ifstream dataIn;
	dataIn.open("C:\\Users\\cam66\\Documents\\COMSC110\\Week 6 - 3.20.18 - 4.3.18\\People.txt");
	cout << "PRARIEVILLE POPULATION GROWTH\n\n(Each * represents 1000 people)\n";

		for (int yearcount = 0; yearcount <= 5; yearcount++) {
			dataIn >> popl;
			ast = popl / 1000;
			cout << year << " ";
			for (int count = 0; count <= ast; count++) {
				if (count < ast)
					cout << "*";
				else
					cout << "\n";
			}
			year += 20;
		}
	
	dataIn.close();
	system("pause");
	return 0;
}

