#include <iostream>
#include <cstdlib>
#include <ctime>

int main()

{
	srand(static_cast<unsigned int>(time(0))); //random number generator
	int randomNumber = rand();//generates ramdom number
	int die = (randomNumber % 100) + 1; //getting a number between one and 6
	int number;
	int chances = 0;
	int difficulty;

	std::cout << "Welcome to my number game" << std::endl;
	std::cout << "Would you like to play on easy, medium, or hard?" << std::endl;
	std::cin >> number;

if difficulty == easy

	do{
		chances++;
		std::cout << "Pick a number between 1 and 100" << std::endl;
		std::cin >> number;
		if (number == die)
		{
			std::cout << "Congratulations the number" << die << "is correct" << std::endl;
		}
		else if (number >die)
		{
			std::cout << "You chose too high " << die << std::endl;
		}
		else
		{
			std::cout << "You chose to low" << std::endl;
		}

		std::cout << "You have used " << chances << "of 5 chances" << std::endl;


	} while (chances != 5 || number == die);

	std::cout << "Game Over! " << chances << " of 5 chances" << std::endl;

	system("pause");
	return 0;
}