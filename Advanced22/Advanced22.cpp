// Advanced22.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include <string>
using namespace std;

//standard membership function
double standardMembership(double rewardsPoints, double monthlyPurchaseAmount)
{

    //multiple if statements to check for monthly purchased amount and calculate rewards points
    if (monthlyPurchaseAmount < 75)
    {
        rewardsPoints = .05 * monthlyPurchaseAmount;
        cout << "Your total reward points is: " << (round(rewardsPoints)) << endl;
    }

    else if ((monthlyPurchaseAmount >= 75) and (monthlyPurchaseAmount < 150))
    {
        rewardsPoints = .075 * monthlyPurchaseAmount;
        cout << "Your total reward points is: " << (round(rewardsPoints)) << endl;
    }

    else
    {
        rewardsPoints = .1 * monthlyPurchaseAmount;
        cout << "Your total reward points is: " << (round(rewardsPoints)) << endl;
    }

    return 0;

}

//plus membership function
double plusMembership(double rewardsPoints, double monthlyPurchaseAmount)
{
    //multiple if statements to check for monthly purchased amount and calculate rewards points
    if (monthlyPurchaseAmount < 150)
    {
        rewardsPoints = .06 * monthlyPurchaseAmount;
        cout << "Your total reward points is: " << (round(rewardsPoints)) << endl;
    }

    else
    {
        rewardsPoints = .13 * monthlyPurchaseAmount;
        cout << "Your total reward points is: " << (round(rewardsPoints)) << endl;
    }

    return 0;

}

//premium membership function
double premiumMembership(double rewardsPoints, double monthlyPurchaseAmount)
{

    //multiple if statements to check for monthly purchased amount and calculate rewards points
    if (monthlyPurchaseAmount < 200)
    {
        rewardsPoints = .04 * monthlyPurchaseAmount;
        cout << "Your total reward points is: " << (round(rewardsPoints)) << endl;
    }

    else
    {
        rewardsPoints = .15 * monthlyPurchaseAmount;
        cout << "Your total reward points is: " << (round(rewardsPoints)) << endl;
    }

    return 0;

}

int main()
{
    //Declaring variables
    double rewardsPoints = 0.0;
    string membershipType = "standard";
    double monthlyPurchaseAmount = 0.0;

    //Getting membership type input
    cout << "What is your membership type? ";
    cin >> membershipType;

    //Getting monthly purchase amount input
    cout << "What is your total monthly purchase amount? ";
    cin >> monthlyPurchaseAmount;
    monthlyPurchaseAmount = round(monthlyPurchaseAmount);

    //First check for membership type standard
    if ((membershipType == "standard") or (membershipType == "Standard"))
    {
        standardMembership(rewardsPoints, monthlyPurchaseAmount);

    }

    //Second check for membership type plus
    else if ((membershipType == "plus") or (membershipType == "Plus"))
    {
        
        plusMembership(rewardsPoints, monthlyPurchaseAmount);

    }

    //Third check for membership type premium
    else if ((membershipType == "premium") or (membershipType == "Premium"))
    {
       
        premiumMembership(rewardsPoints, monthlyPurchaseAmount);

    }

}
