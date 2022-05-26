// Advanced30.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
using namespace std;

int x = 0;

int main()
{
    //initiating array
    int numbers[6];

    //initiating loop
    do
    {
        //seting a variable to random number
        numbers[x] = (rand() % 55);
        cout << numbers[x] << endl;
        //changing variable selected
        x += 1;
    
    } while (x < 6);

}

