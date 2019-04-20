// Name: Timothy Nkata
// Summary: Exercise 3.4.5 (a+b) This code is meant potray a rock, paper, scissors.
// The most difficult aspect is working out the organization of the code.
// It took about 30 minutes to write the code.
// 04/02/2013 Rev. A
// 04/11/2013 Rev. B added comments and organized the code
// Code Display:
/*Choose from 1, 2, or 3
1 means rock
2 means paper
3 means scissors
2
You chose paper
Computer chose scissors
Computer Won!
*/
#include<iostream>
#include<ctime>
#include<cstdlib>
using namespace std;

int getUserChoice() // variable to get the choice for the user.
{
	int choice;
	string userChoice;
	cout << "Choose from 1, 2, or 3\n";
	cout << "1 means rock\n";
	cout << "2 means paper\n";
	cout << "3 means scissors\n";
	cin >> choice;
	if (choice < 1 || choice > 3) // Sets up to the choices to be made.
	{
	cout << "Has to be greater than 0 and less than 3\n";
	cin >> choice;
	} else if (choice == 1) 
	{
		cout << "You chose rocks" << endl;
		userChoice = "rocks";

	}
	else if (choice == 2)
	{
		cout << " You chose paper" << endl;
		userChoice = "paper";
	}
	else if (choice == 3)
	{
		cout << "You chose scissors" << endl;
		userChoice = "scissors";
	}
	
	return choice;

}

int getComputerChoice() // Function to get the computer's choice
{
	string computerChoice;
	srand(time(0));
	int computerNumber = rand() % 3 + 1; // The rand is used to randomly pick a choice.
	if (computerNumber == 1) // if statements used to assign each choice with a number.
	{
		computerChoice = "rocks";
		cout << "Computer chose rocks\n";
	}
	else if (computerNumber == 2)
	{
		computerChoice = "paper";
		cout << " Computer chose paper\n";

	}
	else if (computerNumber == 3 )
	{
		computerChoice = "scissors";
		cout << "Computer chose scissors\n";
	}

	return computerNumber;
}

void determineWinner(int choice, int computerNumber) // This function establishes the winner and who ties.
{
	if (choice == 1 && computerNumber == 2)
	{
		cout << "Computer win\n";
	} else if (choice == 1 && computerNumber == 3)
	{
		cout << "You win\n";
	}
	else if (choice == 2 && computerNumber == 1)
	{
		cout << "You Won!\n";
	}
	else if (choice == 2 && computerNumber == 3)
	{
		cout << " Computer Won!\n";
	}
	else if (choice == 3 && computerNumber == 1)
	{
		cout << "Computer Won!\n";
	}
	else if (choice == 3 && computerNumber == 2)
	{
		cout << "You Won!\n";
	}
	else if (choice == computerNumber)
	{
		cout << "Its a Tie Game!\n";
		choice = getUserChoice();
		computerNumber = getComputerChoice();
		
		determineWinner(choice, computerNumber);
	}
}

//void displayChoice(int a) // This function is made to display the winners.
//{
	//cout << "The Winners are\n";
	//cin >> a;
//}

int main()
{
	int userChoice, computerChoice; // declare the varibles
		userChoice = getUserChoice(); // assign the functions to the variable
		computerChoice = getComputerChoice();// assign the functions to the variable to get the computer choice
		determineWinner(userChoice, computerChoice); // Passes down the variables into the function
	system("pause");
	return 0; // no return
}
// End of program