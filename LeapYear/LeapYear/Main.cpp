#include <iostream>
using namespace std;

//Program: LeapYear
//Author: Tyler Timmins
//Class: ITSE 1307 2002
//Description: A program that listls all the leap years
//			between 1900 and 2200.

int main()
{
	//declare variables
	int iYear;

	//Output
	cout << "LEAP YEARS FROM 1900 TO 2200" << endl;
	cout << endl;

	//loop
	for (int x = 1900; x <= 2200; x = x + 4)
	{
		//calculations
		iYear = x / 4;
		
		//if statements
		if (iYear <= 550)
		{
			cout << x << endl;
			cout << endl;

		}
		
	}


	return 0;
}