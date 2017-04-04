#include <iostream>
#include <string>

int main()
{
	double OrchestraSeats = 25.00;
	double MainFloorSeats = 30.00;
	double BalconySeats = 15.00;
	double Hotdogs = 2.00;

	double OrchestraSeatsSold;
	double MainFloorSeatsSold;
	double BalconySeatsSold;
	double HotdogsSold;
	double Total;

	double OrchestraTotal;
	double MainFloorTotal;
	double BalconyTotal;
	double HotdogsTotal;


	std::cout << "Welcome to my concert hall profit calculator" << std::endl;


	std::cout << "\nHow many Orchestra seats did you sell?" << std::endl;
	std::cin >> OrchestraSeatsSold;

	std::cout << "\nHow many Main Floor seats did you sell?" << std::endl;
	std::cin >> MainFloorSeatsSold;

	std::cout << "\nHow many Balcony seats did you sell?" << std::endl;
	std::cin >> BalconySeatsSold;

	std::cout << "\nHow many wennies Did you sell?" << std::endl;
	std::cin >> HotdogsSold;


	OrchestraTotal = OrchestraSeatsSold * OrchestraSeats;
	MainFloorTotal = MainFloorSeatsSold * MainFloorSeats;
	BalconyTotal = BalconySeatsSold * BalconySeats;
	HotdogsTotal = HotdogsSold * Hotdogs;

	Total = OrchestraTotal + MainFloorTotal + BalconyTotal + HotdogsTotal;

	std::cout << "Your total gross revenue is $" << Total << std::endl;

}