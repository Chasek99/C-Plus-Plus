#include <iostream>
#include <ctime>

using namespace std;
int getRandomNumber();

int main()
{
	int num1 = 0;
	int num2 = 0;
	int correctAnswer = 0;
	int userAnswer = 0;

	srand(static_cast<int>(time(0)));

	for (int x = 1; x < 6; x += 1)
	{
		num1 = getRandomNumber();
		num2 = getRandomNumber();
		correctAnswer = num1 + num2;

		correctAnswer = num1 + num2;

		std::cout << "What is the sum of" << num1 << " + " << num2 << "? ";
		std::cin >> userAnswer;

		if (userAnswer == correctAnswer)
			std::cout << "correct";
		else
			std::cout << "sorry, the answer is " << correctAnswer << ".";

		std::cout << endl << endl;

		
	}
	system("pause");
	return 0;
}
