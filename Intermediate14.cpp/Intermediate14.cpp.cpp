// Intermediate14.cpp.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include <string>
using namespace std;

int main()
{
    //Initializing Variables
    string personGender = "male";
    double personWeightlbs = 0.0;
    double personHeightFeet = 0.0;
    int personAge = 0;
    double personWeightKg = 0.0;
    double personHeightCm = 0.0;
    int personAgeBMR = 0;
    int basalMetabolicRate = 0;

    //Getting input for Age, Weight, Height, and Gender
    cout << "Input gender of person: ";
    cin >> personGender;

    cout << "Input weight of person in lbs: ";
    cin >> personWeightlbs;

    cout << "Input height of person in feet: ";
    cin >> personHeightFeet;

    cout << "Input age of person: ";
    cin >> personAge;

    // Calculating weight
    personWeightKg = (personWeightlbs * 2.2) * 10;

    //Calculating Height
    personHeightCm = ((personHeightFeet * 12) * 2.54) * 6.25;
    personHeightCm = round(personHeightCm);

    //Calculating Age for BMR
    personAgeBMR = personAge * 5;

    //Determining whether the gender is male or female and calculating BMR off of that
    if (personGender == "male")
    {
        basalMetabolicRate = personWeightKg + personHeightCm - personAgeBMR + 5;
    }

    else
    {
        basalMetabolicRate = personWeightKg + personHeightCm - personAgeBMR - 161;
    }

    //Displaying BMR
    cout << "Your BMR is : " << basalMetabolicRate << endl;

}