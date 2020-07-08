#include <iostream>
#include <ctime>
#include <string>

using namespace std;

int computerChoice();
int personChoice();
int calcWinner(int,int);

int main()
{
	int userComputer,userPerson,winner,counter=0;
	string choice1,choice2;

	do
	{
		userComputer = computerChoice();
		userPerson   = personChoice();
		winner = calcWinner(userComputer,userPerson);

		(userComputer == 1) ?  choice1 = "Rock" : "";
		(userComputer == 2) ?  choice1 = "Paper" : "";
		(userComputer == 3) ?  choice1 = "Scissors" : "";
		(userPerson == 1)   ?  choice2 = "Rock" : "";
		(userPerson == 2)   ?  choice2 = "Paper" : "";
		(userPerson == 3)   ?  choice2 = "Scissors" : "";
		
		cout << "\n Computers choice:\t " << choice1;
		cout << "\n You have chosen:\t " << choice2;

		if (winner == 3)
		{
			cout << "! DRAW - PLAY AGAIN !";
			counter++;
		}
		else if(winner == 1)
		{
			cout << "! YOU WIN !";
		}
		else if(winner == 2)
		{
			system("color 02");
			cout << ":( you loose :(";
		}
		

	}while(counter > 1);

	return 0;
}

int computerChoice()
{
	srand(time(NULL));
	int choice = rand()% 2 + 1;

	return choice;
}

int personChoice()
{
	int choice;

	cout << "\n ROCK PAPER SCISSORS GAME";
	cout << "\n\n [1] - Rock\n [2] - Paper\n [3] - Sissors";
	cout << "\n\n Select 1, 2 or 3: ";
	cin >> choice;

	return choice;
}

int clacWinner (int userComputer, int userPerson)
{
	int winner = 0;
	// Note winner = 1 is Computer and winner = 2 is User
	// winner = 3 is a draw

	if(userComputer == 1 && userPerson == 2)
	{
		winner = 2;
	}
	else if(userComputer == 1 && userPerson == 3)
	{
		winner = 1;
	}
	else if(userComputer == 2 && userPerson == 1)
	{
		winner = 1;
	}
	else if(userComputer == 2 && userPerson == 3)
	{
		winner = 1;
	}
	else if(userComputer == 3 && userPerson == 1)
	{
		winner = 2;
	}
	else if(userComputer == 3 && userPerson == 2)
	{
		winner = 2;
	}
	else if(userComputer == userPerson)
	{
		winner = 3;
	}

	return winner;
}
