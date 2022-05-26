// Introductory12.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
using namespace std;

int main()
{
    double aquariumLength = 0.0;
    double aquariumWidth = 0.0;
    double aquariumHeight = 0.0;

    double aquariumVolume = 0.0;

    cout << "Input length of aquarium: " ;
    cin >> aquariumLength;

    cout << "Input width of aquarium: " ;
    cin >> aquariumWidth;

    cout << "Input height of aquarium: " ;
    cin >> aquariumHeight;
    aquariumVolume = aquariumLength * aquariumWidth * aquariumHeight;
    aquariumVolume = aquariumVolume / 231;

    cout << "Your aquarium can hold this many gallons of water: " << aquariumVolume << endl;



}

