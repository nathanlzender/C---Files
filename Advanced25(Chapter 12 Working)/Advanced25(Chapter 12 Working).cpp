//Advanced25.cpp - Increases the prices stored in
//the first column in a two-dimensional array, and
//then stores the updated prices in the second column.
//Displays the contents of the array, row by row.
//Created/revised by <Nathan Zender> on <4/2/2021>

#include <iostream>
using namespace std;
double increase = 0;
int row = 0;

int prices[5][2] = { {10, 0}, {13, 0}, {36, 0}, {74, 0}, {22, 0} };

int main()
{

	cout << "How much should each price be increased by? ";
	cin >> increase;

	while (row < 5)
	{
		prices[row][1] = prices[row][0] + increase;
		row += 1;

	}

	row = 0;
	while (row < 5)
	{
		
		cout << "(" << prices[row][0] << ", " << prices[row][1] << ")" << endl;
		row += 1;

	}

	return 0;
}	//end of main function