// Advanced23.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
using namespace std;

//declaring variables
string customerType = "";
int premiumChannels = 0;
int connections = 0;
double finalBill = 0;
double mathVariable = 0;

//residential customer void function
void residentialCustomer(double premiumChannels)
{
    finalBill = 5 * premiumChannels;
    finalBill = finalBill + 4.5 + 30;
    cout << "Your cost for service is: " << finalBill << "$" << endl;

}

//business customer void function
void businessCustomer(double premiumChannels, double connections)
{
    finalBill = 50 * premiumChannels;
    finalBill = finalBill + 16.50;

    //if statement to differntiate first 5 connections from additional connections
    if (connections > 5)
    {
        mathVariable = (connections - 5);
        mathVariable = mathVariable * 4;
        finalBill = finalBill + mathVariable + 80;
        cout << "Your cost for service is: " << finalBill << "$" << endl;

    }
    else
    {
        finalBill = finalBill + 80;
        cout << "Your cost for service is: " << finalBill << "$" << endl;
    }
    

}


int main()
{
    //determining customer type
    cout << "Are you a business or residential customer? ";
    cin >> customerType;

    //if statment to determine which void function to call based off of customer type
    if (customerType == "residential" or customerType == "Residential")
    {
        cout << "How many premium channels would you like to pay for? ";
        cin >> premiumChannels;
        residentialCustomer(premiumChannels);

    }
    else
    {
        cout << "How many premium channels would you like to pay for? ";
        cin >> premiumChannels;

        cout << "How many connections would you like to pay for? ";
        cin >> connections;

        businessCustomer(premiumChannels,connections);

    }


}
