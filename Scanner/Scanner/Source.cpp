#include <iostream>
#include <string>

int main()
{
	long studentsComputerNumber;
	int response;
	
	do{
	std::cout << "Please Scan your computer";
	std::cin >> studentsComputerNumber;

		switch (studentsComputerNumber)
		{
		case 99732:
			std::cout << "Dusty's computer\n";
			break;
		case 99720:
			std::cout << "Hannah's computer\n";
			break;
		case 99724:
			std::cout << "Kayla's computer\n";
			break;
		case 98718:
			std::cout << "Zach's computer\n";
			break;
		case 99727:
			std::cout << "Chase's computer\n";
			break;
		case 99733:
			std::cout << "Chance's computer\n";
			break;
		case 99715:
			std::cout << "Glenn's computer\n";
			break;
		case 99735:
			std::cout << "Trey's computer\n";
			break;
		case 99721:
			std::cout << "Gairren's computer\n";
			break;
		case 99738:
			std::cout << "Dipesh's computer\n";
			break;
		case 99717:
			std::cout << "Andrew's computer\n";
			break;	
		}
		std::cout << "Enter 1 if you want to scan another computer\n";
		std::cin >> response;
	} while (response == 1);
	
}