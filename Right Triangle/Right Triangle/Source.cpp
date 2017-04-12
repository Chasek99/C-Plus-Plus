#include <iostream>
#include <string>

int aside()
{
	double userEntryC, userEntryB, answerA;
	std::cout << "Enter a number for side C" << std::endl;
	std::cin >> userEntryC;
	std::cout << "\nEnter a number for side B" << std::endl;
	std::cin >> userEntryB;
	answerA = sqrt((userEntryC * userEntryC) - (userEntryB * userEntryB));
	std::cout << answerA << std::endl;

}
int bside()
{
	double userEntryA, userEntryC, answerB;
	std::cout << "Enter a number for side A" << std::endl;
	std::cin >> userEntryA;
	std::cout << "\nEnter a number for side C" << std::endl;
	std::cin >> userEntryC;
	answerB = sqrt((userEntryC * userEntryC)-(userEntryA * userEntryA));
	std::cout << answerB << std::endl;

}
int cside()
{
	double userEntryA, userEntryB, answerC;
	std::cout << "Enter a number for side A" << std::endl;
	std::cin >> userEntryA;
	std::cout << "\nEnter a number for side B" << std::endl;
	std::cin >> userEntryB;
	answerC = sqrt((userEntryA * userEntryA) + (userEntryB * userEntryB));
	std::cout << answerC << std::endl;

}
int main()
{
	
	int response;
	int A;
	int B;
	int C;
	std::cout << "Welcome to my triangle solver." << std::endl;
	std::cout << "type STOP to exit the program" << std::endl;
	std::cout << "Which side of the triangle do you need to solve, A, B, C?" << std::endl;
	std::cin >> response;

	if (response == A)
	{
		int aside();
	}
	if (response == B)
	std::cin >> B;
	std::cin >> response;
	{
		int bside();
	}
	if (response == C)
	std::cin >> C;
	std::cin >> response;
	{
		int cside();
	}
	
}