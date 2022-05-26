// Intermediate23.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
using namespace std;

int temperatures[2][7];

int x = 1;
int row = 1;

int averagehigh = 0;
int averagelow = 0;

int main()
{
	while (x < 8)
	{
		cout << "Enter day " << x << " highest temperature: ";
		cin >> temperatures[x][1];
		x += 1;

	}

	x = 1;
	

	while (x < 8)
	{
		cout << "Enter day " << x << " lowest temperature: ";
		cin >> temperatures[x][2];
		x += 1;

	}

	x = 1;

	while (x < 8)
	{
		averagehigh = averagehigh + temperatures[x][1];
		x += 1;
	}
	
	x = 1;

	while (x < 8)
	{
		averagelow = averagelow + temperatures[x][2];
		x += 1;
	}

	averagehigh = (averagehigh / 7);
	averagelow = (averagelow / 7);

	cout << "The average high temperature is: " << averagehigh << endl;
	cout << "The average low temperature is: " << averagelow << endl;

}

