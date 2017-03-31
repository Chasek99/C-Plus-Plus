#include <iostream>
#include <string>

int main()
{
	double OrchestraSeats = 25.00;
	double MainFloorSeats = 30.00;
	double BalconySeats = 15.00;

	double OrchestraSeatsSold;
	double MainFloorSeatsSold;
	double BalconySeatsSold;
	double Total;

	double OrchestraTotal;
	double MainFloorTotal;
	double BalconyTotal;


	std::cout << "Welcome to my concert hall profit calculator" << std::endl;


	std::cout << "\nHow many Orchestra seats did you sell?" << std::endl;
	std::cin >> OrchestraSeatsSold;

	std::cout << "\nHow many Main Floor seats did you sell?" << std::endl;
	std::cin >> MainFloorSeatsSold;

	std::cout << "\nHow many Balcony seats did you sell?" << std::endl;
	std::cin >> BalconySeatsSold;


	OrchestraTotal = OrchestraSeatsSold * OrchestraSeats;
	MainFloorTotal = MainFloorSeatsSold * MainFloorSeats;
	BalconyTotal = BalconySeatsSold * BalconySeats;

	Total = OrchestraTotal + MainFloorTotal + BalconyTotal;

	std::cout << "Your total gross revenue is $" << Total << std::endl;

}