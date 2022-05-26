//Advanced29.cpp -allows the user to guess a letter chosen randomly by the computer
//Created/revised by <Nathan Zender> on <04/09/2021>

#include <iostream>
#include <string>
#include <ctime>
#include <cstdlib>

using namespace std;

int main()
{
	srand(time(NULL));
	
	string letters = "abcdefghijklmnopqrstuvwxyz";
	string randomLetter = "";
	string letterGuess = "";
	int randomnumber = 0;
	randomnumber = (rand() % 23) + 1;
	randomLetter = letters[randomnumber];

	int endloop = 0;

	while (endloop == 0)
	{
		cout << "Enter one lowercase letter: ";
		getline(cin, letterGuess);
		int find = letters.find(letterGuess, 0);
		if (find == randomnumber)
		{
			cout << "You did it";
			endloop = 1;
		}
		else
			cout << "Enter another letter" << endl;


	}



	return 0;
}	//end of main function