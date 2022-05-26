//Advanced16.cpp - demonstrates the comparison of real numbers for equality
//Created/revised by <your name> on <current date>

#include <iostream>
#include <cmath>
using namespace std;

int main()
{
	double num1 = 10.0;
	double num2 = 3.0;
	double quotient = 0.0;

	quotient = num1 / num2;

	//compare for equality
	if ((fabs(quotient - 3.33333)) < .00001)
		cout << "Yes, the quotient " << quotient << " is equal to 3.33333." << endl;
	else
		cout << "No, the quotient " << quotient << " is not equal to 3.33333." << endl;
	//end if
	return 0;
}	//end o