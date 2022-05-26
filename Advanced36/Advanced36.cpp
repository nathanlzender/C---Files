// Advanced36.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
using namespace std;
string idcheck = "";

//Variable Stacks for seperate arrays
int a = 0;
int b = 0;
int c = 0;

int d = 0;
int e = 0;
int f = 0;

int g = 0;
int h = 0;
int i = 0;

int j = 0;
int k = 0;
int l = 0;




int loop = 0;

//arrays for storing memberIDs and Cars Sold
string newcarsFulltime[99][99];
string newcarsPartime[99][99];
string usedcarsFulltime[99][99];
string usedcarsPartime[99][99];
int idcheckvalue = 0;

void newcarsFulltimeFunction(string)
{
	//sets in array counter
	c += 1;
	newcarsFulltime[a][b] = idcheck;
	//row counter
	b += 1;

	cout << "Enter member cars sold: ";
	cin >> newcarsFulltime[a][b];
	//Set counter
	a += 1;

}

void newcarsFulltimeFunctionOut(string)
{
	a = 0;
	b = 0;
	cout << endl;
	cout << "Fulltime Employees Selling New Cars" << endl;
	while (a < c)
	{
		cout << "ID number: " << newcarsFulltime[a][b];
		b += 1;
		cout << " Car Count: " << newcarsFulltime[a][b] << endl;
		a += 1;
	}



}

void newcarsParttimeFunction(string)
{
	//sets in array counter
	f += 1;
	newcarsPartime[d][e] = idcheck;
	//row counter
	e += 1;

	cout << "Enter member cars sold: ";
	cin >> newcarsPartime[d][e];
	//Set counter
	d += 1;

}

void newcarsPartimeFunctionOut(string)
{
	d = 0;
	e = 0;
	cout << endl;
	cout << "Partime Employees Selling New Cars" << endl;
	while (e < f)
	{
		cout << "ID number: " << newcarsPartime[d][e];
		e += 1;
		cout << " Car Count: " << newcarsPartime[d][e] << endl;
		d += 1;
	}



}

void usedcarsFulltimeFunction(string)
{
	//sets in array counter
	i += 1;
	usedcarsFulltime[g][h] = idcheck;
	//row counter
	h += 1;

	cout << "Enter member cars sold: ";
	cin >> usedcarsFulltime[g][h];
	//Set counter
	g += 1;

}

void usedcarsFulltimeFunctionOut(string)
{
	g = 0;
	h = 0;
	cout << endl;
	cout << "Fulltime Employees Selling Used Cars" << endl;
	while (g < i)
	{
		cout << "ID number: " << usedcarsFulltime[g][h];
		h += 1;
		cout << " Car Count: " << usedcarsFulltime[g][h] << endl;
		g += 1;
	}



}

//above this done

void usedcarsPartimeFunction(string)
{
	//sets in array counter
	l += 1;
	usedcarsPartime[j][k] = idcheck;
	//row counter
	k += 1;

	cout << "Enter member cars sold: ";
	cin >> usedcarsPartime[j][k];
	//Set counter
	j += 1;

}

void usedcarsPartimeFunctionOut(string)
{
	j = 0;
	k = 0;
	cout << endl;
	cout << "Partime Employees Selling Used Cars" << endl;
	while (j < l)
	{
		cout << "ID number: " << usedcarsPartime[j][k];
		k += 1;
		cout << " Car Count: " << usedcarsPartime[j][k] << endl;
		j += 1;
	}



}


int main()
{
	while (loop == 0)
	{
		
		cout << "Enter member ID number: ";
		cin >> idcheck;

		//New Cars memberID check for part time or full time
		idcheckvalue = idcheck.find("N", 0);
		if (idcheckvalue == 3)
		{
			idcheckvalue = idcheck.find("F", 0);
			
			if (idcheckvalue == 4)
				newcarsFulltimeFunction(idcheck);
			
			else
				newcarsParttimeFunction(idcheck);
			
				
		}

		//Used Cars memberID check for part time or full time
		else
		{
			idcheckvalue = idcheck.find("F", 0);
			if (idcheckvalue == 4)
				usedcarsFulltimeFunction(idcheck);

			else
				usedcarsPartimeFunction(idcheck);

		}

		//sentinel value to end loop
		cout << "Enter 1 to stop entering or 0 to enter another id: ";
		cin >> loop;



	}



	//Call to functions for output
	newcarsFulltimeFunctionOut(newcarsFulltime[99][99]);

	newcarsPartimeFunctionOut(newcarsPartime[99][99]);

	usedcarsFulltimeFunctionOut(usedcarsFulltime[99][99]);

	usedcarsPartimeFunctionOut(usedcarsPartime[99][99]);
}

