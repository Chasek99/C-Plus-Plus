#include <iostream>

int main()
{

	int OneNight = 100;
	int ServiceCharge = 35;
	int TelephoneTime = .25;
	double GuestsStayed;
	double nightsStayed;
	double TotalCost;



	std::cout << "Welcome to my hotel calculator that shows how much cash you're racking in" << std::endl;

	std::cout << "How many people stayed in the hotel room???" << std::endl;
	std::cin >> GuestsStayed;
	
	std::cout << "How many nights did the person/persons stay at your hotel???" << std::endl;
	std::cin >> nightsStayed;

	std::cout << "How much time did they spend on the Telephone???" << std::endl;
	std::cin >> TelephoneTime;



	TotalCost = GuestsStayed * OneNight * nightsStayed + ServiceCharge + TelephoneTime;

	std::cout << "\n"  << GuestsStayed  << " Guest stayed " << nightsStayed << " Nights at the hotel, with a $" <<ServiceCharge<< " Service charge and owe $" << TelephoneTime<< "For telephone time."  << std::endl;

	std::cout << "They owe you this much money $" << TotalCost << std::endl;
}
