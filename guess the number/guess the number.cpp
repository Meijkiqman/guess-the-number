#include <iostream>
#include <cstdlib>
#include <ctime>



int easy()
{
	int num, guess, tries = 0;
	srand(time(0));
	num = rand() % 5 + 1;
	std::cout << "Guess a number from 1 to 5!" "\n";

	do
	{
		std::cin >> guess;
		tries++;
		if (guess < num)
		{
			std::cout << "too low!" "\n";
		}
		else if (guess > num)
		{
			std::cout << "too high!" "\n";
		}
		else
			std::cout << "\n" "Correct! you did it in " << tries << " guesses!";
	} while (guess != num);

	return 0;
}


int medium()
{
	int num, guess, tries = 0;
	srand(time(0));
	num = rand() % 10 + 1;
	std::cout << "Guess a number from 1 to 10!" "\n";

	do
	{
		std::cin >> guess;
		tries++;
		if (guess < num)
		{
			std::cout << "too low!" "\n";
		}
		else if (guess > num)
		{
			std::cout << "too high!" "\n";
		}
		else
			std::cout << "\n" "Correct! you did in in " << tries << " guesses!";
	} while (guess != num);

	return 0;
}

int hard()
{
	int num, guess, tries = 0;
	srand(time(0));
	num = rand() % 20 + 1;
	std::cout << "Guess a number from 1 to 20!" "\n";

	do
	{
		std::cin >> guess;
		tries++;
		if (guess < num)
		{
			std::cout << "too low!" "\n";
		}
		else if (guess > num)
		{
			std::cout << "too high!" "\n";
		}
		else
			std::cout << "\n" "Correct! you did in in " << tries << " guesses!";
	} while (guess != num);

	return 0;
}

int main()
{
	std::cout << "Welcome to guess a number, please choose a difficulty" "\n";
	std::cout << "1: Easy" "\n";
	std::cout << "2: Medium" "\n";
	std::cout << "3: Hard" "\n";
	int choice;
	std::cin >> choice;
	if (choice == 1)
	{
		easy();
	}
	else if (choice == 2)
	{
		medium();
	}
	else if (choice == 3)
	{
		hard();
	}
}