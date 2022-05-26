//Advanced20.cpp - displays a pattern of asterisks
//Created/revised by <Nathan Zender> on <2/19/2021>


#include <iostream>
using namespace std;

int main()
{
	int outerAmount = 0;
	int incrementAmount = 0;
	int outerLast = 0;

	cout << "Enter outer amount: ";
	cin >> outerAmount;

	cout << "Enter increment amount: ";
	cin >> incrementAmount;
	if ((outerAmount % incrementAmount) == 0)
	{

		for (int outer = 0; outer < (outerAmount / incrementAmount); outer++)
		{
			outerLast = outerLast + incrementAmount;
			for (int nested = 0; nested < outerLast; nested++)
				cout << '*';
			//end for
			cout << endl;
		}	//end for
		return 0;

	}
	else
	{

		cout << "The maximum number must be evenly divisable by the number to repeat.";

	}
		

}	//end of main function
