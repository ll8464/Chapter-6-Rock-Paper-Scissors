#include <iostream>
#include <iomanip>
using namespace std;

void random_number() //Generates the random number And Contains Game Loop

{//Variables
	unsigned seed = time(0);
	const int min = 1;
	const int max = 3;
	int y = 0.0;
	double number = 0;
	char Again;
	double total_u = 0.0; //wins accumulator
	double total_c = 0.0;
	double computer_wins=0;// variable for wins by computer
	double user_wins=0; // variable for wins by user

	
	//Calculations
	srand(seed); //Seed for random number
	y = (rand() % (max - min + 1)) + min; //Equation for assigning a random number in a range
	//Display
	do //do while in order to set up the loop to make game repeatable
	{			
		if (number >= 0 && number < 4)
		{
			for (int count = 0; count <= 4; count++)
			{
				cout << "Rock, Paper, Scissors" << endl;
				cout << "-------------------------" << endl;
				cout << "1. Rock\n2. Paper\n3. Scissors\n";
				cout << "Enter your choice (1/2/3): " << endl;
				
				cin >> number;

				if (number == y)
				{
					cout << "Computer chose " << y << "." << endl;
					cout << "Tie Game!!!" << endl;
					
				}
				else if (y == 1 && number == 2)
				{
					cout << "Computer chose Rock." << endl;
					cout << "You Won!" << endl;
					total_u = total_u + 1;//Accumulates running total
					
					
				}
				else if (y==1 && number ==3 )
				{
					cout << "Computer chose Rock." << endl;
					cout << "You Lost!" << endl;
					total_c = total_c + 1;//Accumulates running total
					
					
				}
				else if (y == 2 && number == 1)
				{
					cout << "Computer chose Paper." << endl;
					cout << "You Lost!" << endl;
					total_c = total_c + 1;//Accumulates running total
					
					
				}
				else if (y == 2 && number == 3)
				{
					cout << "Computer chose Paper." << endl;
					cout << "You Won!" << endl;
					total_u = total_u + 1;//Accumulates running total
					
					
					
				}
				else if (y == 3 && number == 1)
				{
					cout << "Computer chose Scissors." << endl;
					cout << "You Won!" << endl;
					total_u = total_u + 1;//Accumulates running total
				
					
				}
				else if (y == 3 && number == 2)
				{
					cout << "Computer chose Scissors." << endl;
					cout << "You Lost!" << endl;
					total_c = total_c + 1;//Accumulates running total
					
					
				}
				else;
				
				cout << "User:\t\t" << total_u << " wins" << endl;
				cout << "Computer: \t" << total_c << " wins" << endl;
			}


		}
		else
		{
			cout << "Please check the information that was entered." << endl;

		}

		
		cout << "Enter y for yes or n for no to repeat again: ";
		cin >> Again;
		
	}

	while (Again == 'Y' || Again == 'y');
	
}
int main()
{
	//Function call
	
	random_number();



	return 0;
}