#include <iostream>



int main()
{
	char grade = ' ';

	std::cout << "Enter a letter grade";
	std::cin >> grade;
	grade = toupper(grade);

	switch (grade)
	{
	case 'A':
		std::cout << "Excellent\n";
		break;
	case 'B':
			std::cout << "above average\n";
		break;
	case 'C':
		std::cout << "average\n";
	case 'D':
	case'F':
		std::cout << "below Average\n";
		break;
	default:
		std::cout << "invalid grade\n";
	}



}	