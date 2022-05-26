// Intermediate18.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
using namespace std;

int main()
{
	//declaring variables
	double salary = 0;
	double tempsalary = 0;
	double salaryincreaseyear1 = 0;
	double salaryincreaseyear2 = 0;
	double salaryincreaseyear3 = 0;
	double salaryincreaseyear4 = 0;
	int setloop = 1;

	//main while loop
	while (setloop == 1)
	{
		//asks for input
		cout << "What is your current salary? ";
		cin >> salary;

		//multiple repetitive statements finding yearly salary increases
		salaryincreaseyear1 = salary * .03;
		tempsalary = salary + salaryincreaseyear1;

		salaryincreaseyear2 = tempsalary * .04;
		tempsalary = tempsalary + salaryincreaseyear2;

		salaryincreaseyear3 = tempsalary * .05;
		tempsalary = tempsalary + salaryincreaseyear3;

		salaryincreaseyear4 = tempsalary * .06;
		tempsalary = tempsalary + salaryincreaseyear4;

		//output statements that display salary increases
		cout << "Your salary raise for year one is: " << salaryincreaseyear1 << endl;
		cout << "Your salary raise for year two is: " << salaryincreaseyear2 << endl;
		cout << "Your salary raise for year three is: " << salaryincreaseyear3 << endl;
		cout << "Your salary raise for year four is: " << salaryincreaseyear4 << endl;

		//input statement with sentinel value to end program or continue with another salary value
		cout << "Enter sentinel value 0 to end program or enter 1 to enter another salary: ";
		cin >> setloop;

	}
	

}