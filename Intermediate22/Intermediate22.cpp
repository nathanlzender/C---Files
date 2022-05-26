// Intermediate22.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
using namespace std;

int main()
{

//declaring variables
int setLoop = 0;
int scoreAmount = 0;
int scoreTotal = 0;
double scoreAverage = 0;
int tempscore = 0;
string loopAnswer = "";


//main while loop with a conditional variable for exit
while (setLoop == 0)
	{
	//setting temporary score to zero before further computation
	tempscore = 0;
	//adding one to this variable to find final judge amount
	scoreAmount = scoreAmount + 1;
	cout << "What is your score? ";
	cin >> tempscore;

	//adding input score to total score
	scoreTotal = scoreTotal + tempscore;
	//getting input to set condition for exiting of the while loop
	cout << "Are those all of the scores? ";
	cout << "Enter 'Yes' or 'No' ";
	cin >> loopAnswer;

	//checking to see if all judges have entered
	if ((loopAnswer == "Yes") or (loopAnswer == "yes"))
	{
	setLoop = 1;
	scoreAverage = (double)scoreTotal / scoreAmount;
	//outputting final amount of judges, total score, and average score
	cout << "The amount of judge scores that were entered was: " << scoreAmount << endl;
	cout << "The total from the judge scores that were entered was: " << scoreTotal << endl;
	cout << "The average from the judge scores that were entered was: " << scoreAverage << endl;
		
	}
		
	}

}

