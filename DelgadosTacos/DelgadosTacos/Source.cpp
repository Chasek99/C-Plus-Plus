//Delgados Tacos
//Chase Kress
//March 30th

#include <iostream>
#include <string>

int main()
{
	double TacoPrice = 0.99;
	double BurritoPrice = 0.99;
	double EnchiladasPrice = 4.99;
	double TamalesPrice = 0.99;
	double DrinkPrice = 1.99;
	double StreakPrice = 12.99;
	double ChurroPrice = 0.99;
	double BreadPrice = 0.50;
	double ChipsPrice = 0.99;
	double GrilledCheesePrice = 0.99;

	const double taxRate = 1.075;

	double TacoOrdered, BurritoOrdered, EnchiladasOrdered, TamalesOrdered, DrinksOrdered, SteakOrdered, ChurrosOrdered, BreadOrdered,ChipsOrdered, GrilledCheeseOrdered, total, totalwithTaxes;

	double TacoTotal, BurritoTotal, EnchiladasTotal, TamalesTotal, DrinkTotal, SteakTotal, ChurrosTotal, BreadTotal, ChipTotal, GrilledCheeseTotal;


	std::cout << "***********************************************************************" << std::endl;
	std::cout << "*                                                                     *" << std::endl;
	std::cout << "*                                                                     *" << std::endl;
	std::cout << "*                       TACOS FOR SALE!!!!!!!!!!                      *" << std::endl;
	std::cout << "*                    -----------------------------                    *" << std::endl;
	std::cout << "*                    -                           -                      *" << std::endl;
	std::cout << "*                    -                           -                      ***************" << std::endl;
	std::cout << "*                    -                           -                               *    *" << std::endl;
	std::cout << "*                    -----------------------------                               ******" << std::endl;
	std::cout << "*                                                                                     *" << std::endl;
	std::cout << "*                                                                                     *" << std::endl;
	std::cout << "*                                                                                     *" << std::endl;
	std::cout << "***********0000000000*****************************************0000000000***************" << std::endl;
	std::cout << "           0        0                                         0        0              " << std::endl;
	std::cout << "           0        0                                         0        0              " << std::endl;
	std::cout << "           0000000000                                         0000000000              " << std::endl;











	std::cout << "Welcome to Delgados Tacos, where our food is made with hate";

	std::cout << "\nHow many Taco's do you want?" << std::endl;
	std::cin >> TacoOrdered;

	std::cout << "How many Burritos do you want?" << std::endl;
	std::cin >> BurritoOrdered;

	std::cout << "How many Enchiladas do you want?" << std::endl;
	std::cin >> EnchiladasOrdered;

	std::cout << "How many Tamales do you want?" << std::endl;
	std::cin >> TamalesOrdered;

	std::cout << "How many Drinks do you want?" << std::endl;
	std::cin >> DrinksOrdered;

	std::cout << "How many Steaks do you want?" << std::endl;
	std::cin >> SteakOrdered;

	std::cout << "How many Churros do you want?" << std::endl;
	std::cin >> ChurrosOrdered;

	std::cout << "How many Breads do you want?" << std::endl;
	std::cin >> BreadOrdered;

	std::cout << "How many Chips do you want?" << std::endl;
	std::cin >> ChipsOrdered;

	std::cout << "How many GrilledCheeses do you want?" << std::endl;
	std::cin >>  GrilledCheeseOrdered;



	TacoTotal = TacoOrdered * TacoPrice;
	BurritoTotal = BurritoOrdered * BurritoPrice;
	EnchiladasTotal = EnchiladasOrdered * EnchiladasPrice;
	TamalesTotal = TamalesOrdered * TamalesPrice;
	DrinkTotal = DrinksOrdered * DrinkPrice;
	SteakTotal = SteakOrdered * StreakPrice;
	ChurrosTotal = ChurrosOrdered * ChurroPrice;
	BreadTotal = BreadOrdered * BreadPrice;
	ChipTotal = ChipsOrdered * ChipsPrice;
	GrilledCheeseTotal = GrilledCheeseOrdered * GrilledCheesePrice;

	total = TacoTotal + BurritoTotal + EnchiladasTotal + TamalesTotal + DrinkTotal + SteakTotal + ChurrosTotal + BreadTotal + ChipTotal + GrilledCheeseTotal;

	std::cout << "You owe me this much much money now fool $" << total << std::endl;

}