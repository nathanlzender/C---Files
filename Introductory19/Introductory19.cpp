// Introductory19.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include <fstream>
using namespace std;

//creating strings and sequential access files
ofstream outFile;
ifstream inFile;
int loop = 0;
string amendInput = "";
string output = "";

int main()
{
	//opening sequential access file in append mode
	outFile.open("Introductory19.txt",ios::app);
	//checking if file is open
	if (outFile.is_open() == true)
	{
		while (loop == 0)
		{
			cout << "Enter a payroll amount: ";
			cin >> amendInput;
			outFile << amendInput;

			cout << "Enter -1 to end or 0 to continue: ";
			cin >> loop;
		}
		
	}
		
	outFile.close();

	//outputting file to terminal
	inFile.open("Introductory19.txt", ios::out);
	if (inFile.is_open() == true)
		inFile >> output;

	cout << output;





}

