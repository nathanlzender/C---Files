// Advanced29(Chapter 14).cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include <fstream>
#include <string>
using namespace std;

//creating out files and in files
ofstream outFile;
ifstream inFile;
string strNumber;
int number;
int x = 0;

int main()
{
	//opening given text file
	inFile.open("Chp14-Advanced28.txt", ios::in);
	//checking if text file is open
	if (inFile.is_open() == true)
	{
		//creating / opening updated numbers file
		outFile.open("UpdatedAdvanced28.txt", ios::app);
		//checking if updated text file is open
		if (outFile.is_open() == true)
		{
			//while loop to go through each line
			while (x <= 19)
			{
				//getting the currently selected line and placing it into variable strNumber
				getline(inFile, strNumber);
				//converting string number to integer and adding one
				number = stoi(strNumber);
				number += 1;
				//putting nubmer into update text file
				outFile << number << endl;

				x += 1;


			}


		}

		//closing first text file
		inFile.close();

		//opening updated text file
		inFile.open("UpdatedAdvanced28.txt", ios::in);
		x = 0;
		//displaying all lines of new text file
		while (x <= 19)
		{
			getline(inFile, strNumber);
			number = stoi(strNumber);
			cout << number;

			x += 1;


		}
	
	}
	else
		cout << "error";



}

