//Advanced25.cpp - Increases the prices stored in
//the first column in a two-dimensional array, and
//then stores the updated prices in the second column.
//Displays the contents of the array, row by row.
//Created/revised by <Nathan Zender> on <4/2/2021>

#include <iostream>
using namespace std;
double increase = 0;
int x = 1;

int main()
{
	int prices[5][2] = { {10, 0},
						{13, 0},
						{36, 0},
						{74, 0},
						{22, 0} };

	cout << "How much should each price be increased by? ";
	cin >> increase;

	while (x < 6)
	{
		prices[x][2] = prices[x][1] + increase;
		x += 1;

	}

	x = 1;
	while (x < 6)
	{
		cout << prices[x][1] << prices[x][2] << endl;
		x += 1;


	}

	return 0;
}	//end of main function