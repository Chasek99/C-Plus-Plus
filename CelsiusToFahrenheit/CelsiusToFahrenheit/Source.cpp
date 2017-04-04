//ChaseKress
//April 3rd
//Celsius to Fahrenheit


#include <iostream>
#include <string>


int main()
{
	double MorningTemp;
	double NoonTemp;
	double EveningTemp;


	double MorningFahenheit, NoonFahenheit, EveningFahenheit;






	std::cout << "Welcome to my Celsius to Fahrenheit calculator";

	std::cout << "" << std::endl;

	std::cout << "\nWhat is the temperature at 8:00am in celsius?"<< std::endl;
	std::cin >> MorningTemp;

	std::cout << "What is the temperature at 12:00pm in celsius?" << std::endl;
	std::cin >> NoonTemp;

	std::cout << "What is the temperature at 5:00pm in celsius?" << std::endl;
	std::cin >> EveningTemp;

	MorningFahenheit = MorningTemp * 1.8 + 32;
	NoonFahenheit = NoonTemp * 1.8 + 32;
	EveningFahenheit = EveningTemp * 1.8 + 32;

	std::cout << "The Temperature in Fahenheit at 8:00am is " << MorningFahenheit << std::endl;
	std::cout << "The Temperature in Fahenheit at 12:00pm is  " << NoonFahenheit << std::endl;
	std::cout << "The Temperature in Fahenheit at 5:00pm is " << EveningFahenheit << std::endl;

}