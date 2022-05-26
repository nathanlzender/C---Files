// Introductory18.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
using namespace std;

//declaring variables
double startMeasurement = 0;
string typeMeasurement = "";
double endMeasurement = 0;

//inches conversion function
double inchesConversion(double startMeasurement)
{
    double returnVariable = 0;
    returnVariable = startMeasurement / 2.54;
    return(returnVariable);
}

//centimeters conversion function
double centimetersConversion(double startMeasurement)
{
    double returnVariable = 0;
    returnVariable = startMeasurement * 2.54;
    return(returnVariable);
}

int main()
{
    //asking for input measurment
    cout << "Enter your measurement in inches or centimeters: ";
    cin >> startMeasurement;

    //asking for end result unit
    cout << "Enter what unit you want to convert to: ";
    cin >> typeMeasurement;

    //if statement that decide whether to call the centimeter or inches conversion function
    if (typeMeasurement == "inches" or typeMeasurement == "Inches")
    {
        endMeasurement = inchesConversion(startMeasurement);
        cout << "Your measurement in inches is: " << endMeasurement << endl;

    }

    else
    {
        endMeasurement = centimetersConversion(startMeasurement);
        cout << "Your measurement in centimeters is: " << endMeasurement << endl;
    }

}


