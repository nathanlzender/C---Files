// Intermediate26.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
using namespace std;
string partNumber = "";
int shipping = 0;
int randomCounter = 0;
int endVar = 0;

int main()
{
	while (endVar == 0)
	{
		randomCounter = 0;
		shipping = 0;

		cout << "Enter a part number with four or five characters: ";
		cin >> partNumber;

		if (partNumber.length() >= 6)
			cout << "You entered an invalid part number" << endl;

		else
		{

			shipping = partNumber.find("MS", 0);
			if (shipping == 1)
			{
				randomCounter = +1;
				cout << "Your part is coming by Mail-Standard" << endl;

			}

			shipping = partNumber.find("MP", 0);
			if (shipping == 1)
			{
				randomCounter = +1;
				cout << "Your part is coming by Mail-Priority" << endl;
			}

			shipping = partNumber.find("FS", 0);
			if (shipping == 1)
			{
				randomCounter = +1;
				cout << "Your part is coming by Fedex-Standard" << endl;
			}

			shipping = partNumber.find("FO", 0);
			if (shipping == 1)
			{
				randomCounter = +1;
				cout << "Your part is coming by Fedex-Overnight" << endl;
			}

			shipping = partNumber.find("UP", 0);
			if (shipping == 1)
			{
				randomCounter = +1;
				cout << "Your part is coming by UPS" << endl;
			}

			else if (randomCounter == 0)
				cout << "You entered an invalid part number" << endl;


		}

		cout << "Enter 1 to end or any other number to enter another part number: ";
		cin >> endVar;



	}



}
