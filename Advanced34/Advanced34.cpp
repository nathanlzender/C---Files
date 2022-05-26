//Advanced34.cpp - displays the price and quantity
//associated with a product ID
//Created/revised by <Nathan Zender> on <3/26/2021>

#include <iostream>
using namespace std;

//declaring variables
int productID = 0;
int location = 0;
int x = 1;

//declared arrays
int ids[5] = { 10, 14, 34, 45, 78 };
int prices[5] = { 125, 600, 250, 350, 225 };
int quantities[5] = { 5, 3, 9, 10, 2 };
int main()
{
	//loop for main functions
	while (x != 0)
	{
		cout << "Enter a product id (10, 14, 34, 45, 78): ";
		cin >> productID;
		// while loops that checks the location vs the id
		while (location < 5 && productID != ids[location])
		{
			//accumulator to check each location in each array
			location += 1;
		}

		//output statement
		cout << "The price is " << prices[location] << " per " << quantities[location] << " units." << endl;

		cout << "To enter another id enter '1', otherwise enter '0': ";
		cin >> x;

	}
	
	return 0;
}	//end of main function