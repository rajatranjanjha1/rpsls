//Rock Paper Scissors Lizard Spock
#include<iostream>
#include<cstdlib>
#include<ctime>
using namespace std;

int main ()
{
	int MyChoice;
	int AiChoice;
	int lose1, lose2;
	
	//The Game Intro
	cout << "Welcome to RPSLS!!!\n";
	cout << "1) Rock\n2) Paper\n3) Scissors\n4) Lizard\n5) Spock\n";
	cout << "Enter your choice: ";
	cin >> MyChoice;
	
	srand(static_cast<unsigned int>(time(0)));
	AiChoice = rand()%5 + 1;
	
	//Cases to lose
	if((AiChoice - 2) < 0)
	{
		lose1 = AiChoice + 3;
		lose2 = AiChoice + 2;
	}
	else if((AiChoice + 2) > 5)
	{
		lose1 = AiChoice - 2;
		lose2 = AiChoice - 3;
	}
	else
	{
		lose1 = AiChoice - 2;
		lose2 = AiChoice + 2;
	}
	
	//Output
	if(MyChoice > 0 and MyChoice < 6)
	{
		if(MyChoice==AiChoice)
		{
			cout << "This is a draw.\n";
		}
		else if(MyChoice==lose1 or MyChoice==lose2)
		{
			cout << "Computer won.\n";
		}
		else
		{
			cout << "You won.\n";
		}
	}
	else
	{
		cout << "Invalid Input.\n";
	}
	
	return 0;
}
