//Advanced28.cpp - displays the pay rate 
//corresponding to the pay code entered by the user
//Created/revised by <Nathan Zender> on <4/2/2021>

#include <iostream>
using namespace std;
int row = 6;

//initializing array and variables
int codesAndRates[7][2] = { {1, 8},
							   {2, 14},
							   {5, 10},
							   {6, 20},
							   {7, 15},
							   {9, 16},
							   {11, 20} };

int payCode = 1;

int main()
{
	//asking for input
	row = 6;
	cout << "Pay code (1, 2, 5, 6, 7, 9, or 11). " << endl;
	cout << "Enter a paycode number to search, or 0 to end: ";
	cin >> payCode;
	if (payCode == 0)
	{
		exit;
	}

	else
	{
		//checking for middle number
		if (payCode == 6)
		{
			cout << "The rate is " << codesAndRates[3][1];

		}

		//checking for numbers under 6
		else if (payCode < 6)
		{
			//decreasing row to find paycode
			while (payCode != codesAndRates[row][0]) 
			{

				row -= 1;

			}

			cout << "The rate is " << codesAndRates[row][1];

		}

		//checking numbers above 6 and below 12
		else if ((payCode > 6) and (payCode < 12))
		{
			row = 0;
			//increasing row to find paycode
			while (payCode != codesAndRates[row][0])
			{
				row += 1;
			}
			cout << "The rate is " << codesAndRates[row][1];
		}

		//if the paycode is not found, then an error occurs
		else
		{
			cout << "That paycode doesnt exist";
		}

	}
		
	return 0;
}	//end of main function
