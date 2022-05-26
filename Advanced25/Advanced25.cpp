// Advanced25.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
using namespace std;

int main()
{
    int registrants = 0;
    int totalRegistrants = 0;
    string setLoop = "no";
    int totalCost = 0;
    int cost = 0;

    while ((setLoop != "yes") and (setLoop != "Yes"))
    {
        cout << "How many are registering from this company? ";
        cin >> registrants;
        totalRegistrants = totalRegistrants + registrants;

        if (registrants <= 3)
        {
            cost = registrants * 150;
            totalCost = totalCost + cost;
        }
        else if (registrants >= 4 and registrants <= 9)
        {
            cost = registrants * 100;
            totalCost = totalCost + cost;

        }
        else
        {
            cost = registrants * 90;
            totalCost = totalCost + cost;

        }
        cout << "Is this the last company? ";
        cout << "Enter 'Yes' or 'No' ";
        cin >> setLoop;

    }
    cout << "The total amount of registrants is: " << totalRegistrants << endl;
    cout << "The total cost is: " << totalCost << endl;
    cout << "The average charge per registrant is: " << ((double)totalCost / totalRegistrants) << endl;

}
