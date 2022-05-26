//Intermediate20.cpp - displays the account balance at
//the end of 1 through 3 years
//Created/revised by Nathan Zender on 3/5/2021

#include <iostream>
#include <iomanip>
#include <cmath>
using namespace std;

//function prototype
double getBalance(int amount, double rate, int y);

int main()
{
	int deposit = 0;
	double acctBalance = 0.0;
	double interestRate = 0.0;
	double maxRate = 0.0;
	double minRate = 0.0;

	cout << "Deposit: ";
	cin >> deposit;
	cout << "Minimum rate (in decimal form): ";
	cin >>  minRate;
	cout << "Maximum rate (in decimal form): ";
	cin >> maxRate;

	cout << fixed << setprecision(2);
	for (double interestRate = minRate; interestRate <= maxRate ; interestRate += .01)
	{

		cout << "Interest Rate : " << interestRate << endl;

		for (int year = 1; year < 4; year += 1)
		{
			acctBalance =
				getBalance(deposit, interestRate, year);
			cout << "Year " << year << ": $"
				<< acctBalance << endl;
		}  //end for


	}

	return 0;
}   //end of main function

//*****function definitions*****
double getBalance(int amount, double rate, int y)
{
	double balance = 0.0;
	balance = amount * pow((1 + rate), y);
	return balance;
}  //end of getBalance function