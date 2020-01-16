#include <iostream>

using namespace std;

int main()
{
	cout << "\n\n\t\t *** Welcome to my Adventure ***\n\n";
	//Giving user the layout


	cout << "\nYou weake up see big spider!\n";
	cout << "\nThe spider comes after you!\n";
	//Give the user a choice
	cout << "\nWhat should you do? Type run or type hide and press enter";
	//Variable to hold users choice
	string userChoice;
	//get users choice
	getline(cin, userChoice);
	//based on what user chose lets influence the story.
	if (userChoice == "Run" || userChoice == "run")
	{
		//if user chose run
		cout << "\n\nYou run as fast you can but spider catches you!\n;"
	}
	else if (userChoice == "Hide" || userChoice == "Hide")
	{
		//if user chose hide
		cout << "\n\nSpider cant see you and run off by whew!\n;"
	}
	else
	{
		//catch all anything esle is invalid
		cout << "\n\nYou typed to much spider catches you!\n;"
	}

	return 0;
}