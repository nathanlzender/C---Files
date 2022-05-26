//Intermediate25.cpp - increases the prices stored in
//an array and then displays the increased prices
//Created/revised by <Nathan Zender> on <3/26/2021>

#include <iostream>
#include <iomanip>
using namespace std;

int x = 0;
double percent = 0;

int main()
{
	//getting input for percentage increase
	cout << "Enter the percent by which the array should increase: ";
	cin >> percent;
	percent = percent * .01;
	cout << fixed << setprecision(2);

	//declare array
	double prices[10] = { 4.5, 6.75, 23.0, 21.5, 5.25, 8.99, 9.99, 10.89, 3.99, 4.0 };

	//increasing individual prices of each item in array by using their position
	do
	{
		prices[x] = prices[x] + (prices[x] * percent);
		x += 1;

	} while (x < 10);

	x = 0;

	//displaying each item in array
	do
	{
		cout << prices[x] << endl;
		x += 1;

	} while (x < 10);


	return 0;
}	//end of main function