// Advanced26.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
using namespace std;
int month = 0;
int year = 0;

int main()
{
    //declaring array
    int days[12] = { 31, 28, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31};

    cout << "Type the number coresponding to see how many days are in that month: ";
    cin >> month;

    //checking to see if they want to know the second month's day amount
    if (month == 2)
    {
        cout << "What is the current year? ";
        cin >> year;
        //checking if the year is divisible by 4 evenly
        if (year % 4 > 0)
        {
            cout << days[month - 1];
        }
        //checking if the year is divisible by 4 evenly and not by 100
        else if ((year % 4 == 0) and (year % 100 > 0))
        {
            cout << "29";
        }
        //checking if the year is divisible by 4, 100, and 400 evenly
        else if ((year % 4 == 0) and (year % 100 == 0) and (year % 400 == 0))
        {
            cout << "29";
        }
        else
        {
            cout << "28";
        }

    }

    //output statement for all other months besides the second taken from the array
    else
    {
        cout << days[month - 1];
    }
    


}
