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

	int OrderNumber;
	
	const double taxRate = 1.075;


	double TacoOrdered, BurritoOrdered, EnchiladasOrdered, TamalesOrdered, DrinksOrdered, SteakOrdered, ChurrosOrdered, BreadOrdered, ChipsOrdered, GrilledCheeseOrdered, total;

	


	std::cout << " ****************************************************************" << std::endl;
	std::cout << " *                                                              *" << std::endl;
	std::cout << " *                                                              *" << std::endl;
	std::cout << " *                       TACOS FOR SALE!!!!!!!!!!               *" << std::endl;
	std::cout << " *                    -----------------------------             *" << std::endl;
	std::cout << " *                    -                           -                *" << std::endl;
	std::cout << " *                    -                           -               ***************" << std::endl;
	std::cout << " *                    -                           -                        *    *" << std::endl;
	std::cout << " *                    -----------------------------                        ******" << std::endl;
	std::cout << " *                                                                              *" << std::endl;
	std::cout << " *                                                                              *" << std::endl;
	std::cout << " *                                                                              *" << std::endl;
	std::cout << " ********00000000*******************************************00000000*************" << std::endl;
	std::cout << "           0        0                                         0        0              " << std::endl;
	std::cout << "           0        0                                         0        0              " << std::endl;
	std::cout << "            00000000                                           00000000              " << std::endl;






	std::cout << "********************************************************" << std::endl;
	std::cout << "*                                                      *" << std::endl;
	std::cout << "*						   MENU                          *" << std::endl;
	std::cout << "*                                ORDER #      PRICE    *" << std::endl;
	std::cout << "*        Tacos                     1           0.99    *" << std::endl;
	std::cout << "*        Burrito                   2           0.99    *" << std::endl;
	std::cout << "*        Enchiladas                3           4.99    *" << std::endl;
	std::cout << "*        Tamales                   4           0.99    *" << std::endl;
	std::cout << "*        Steak                     5           11.99   *" << std::endl;
	std::cout << "*        Churros                   6           0.99    *" << std::endl;
	std::cout << "*        Bread                     7           0.99    *" << std::endl;
	std::cout << "*        Chips                     8           0.50    *" << std::endl;
	std::cout << "*        GrilledCheese             9           0.99    *" << std::endl;
	std::cout << "*        Drinks                    10          0.99    *" << std::endl;
	std::cout << "*                                                      *" << std::endl;
	std::cout << "********************************************************" << std::endl;



	std::cout << "Welcome to ChaseGadosTacos";
	std::cout << "\nFrom out menu above what would you like to Order???";
	std::cin >> OrderNumber;

	if (OrderNumber == 1)
	{
		std::cout << "\nI see you like Tacos, how many would you like???" << std::endl;
		std::cin >> TacoOrdered;
		total = (TacoPrice * TacoOrdered);
		std::cout << "You ordered " << TacoOrdered << " Tacos, your total is $" << total << std::endl;
	}
	if (OrderNumber == 2)
	{
		std::cout << "\nI see you like Burritos, how many would you like???" << std::endl;
		std::cin >> BurritoOrdered;
		total = (BurritoPrice * BurritoOrdered);
		std::cout << "You ordered " << BurritoOrdered<< " Burritos, your total is $" << total << std::endl;
	}
	if (OrderNumber == 3)
	{
		std::cout << "\nI see you like Enchiladas, how many would you like???" << std::endl;
		std::cin >> EnchiladasOrdered;
		total = (EnchiladasPrice * EnchiladasOrdered);
		std::cout << "You ordered " << EnchiladasOrdered << " Enchiladas, your total is $" << total << std::endl;
	}
	if (OrderNumber == 4)
	{
		std::cout << "\nI see you like Tamales, how many would you like???" << std::endl;
		std::cin >> TamalesOrdered;
		total = (TamalesPrice * TamalesOrdered);
		std::cout << "You ordered " << TamalesOrdered << " Tamales, your total is $" << total << std::endl;
	}
	if (OrderNumber == 5)
	{
		std::cout << "\nI see you like Steak, how many would you like???" << std::endl;
		std::cin >> SteakOrdered;
		total = (StreakPrice * SteakOrdered);
		std::cout << "You ordered " << SteakOrdered<< " Steak, your total is $" << total << std::endl;
	}
	if (OrderNumber == 6)
	{
		std::cout << "\nI see you like Churros, how many would you like???" << std::endl;
		std::cin >> ChurrosOrdered;
		total = (ChurroPrice * ChurrosOrdered);
		std::cout << "You ordered " << ChurrosOrdered << " churros, your total is $" << total << std::endl;
	}
	if (OrderNumber == 7)
	{
		std::cout << "\nI see you like Bread, how many would you like???" << std::endl;
		std::cin >> BreadOrdered;
		total = (BreadOrdered * BreadPrice);
		std::cout << "You ordered " << BreadOrdered << " bread your total is $" << total << std::endl;
	}
	if (OrderNumber == 8)
	{
		std::cout << "\nI see you like Chips, how many would you like???" << std::endl;
		std::cin >> ChipsOrdered;
		total = (ChipsPrice * ChipsOrdered);
		std::cout << "You ordered " << ChipsOrdered << " Chips, your total is $" << total << std::endl;
	}
	if (OrderNumber == 9)
	{
		std::cout << "\nI see you like GrilledCheese, how many would you like???" << std::endl;
		std::cin >> GrilledCheeseOrdered;
		total = (GrilledCheesePrice * GrilledCheeseOrdered);
		std::cout << "You ordered " << GrilledCheeseOrdered << " grilledCheese, your total is $" << total << std::endl;
	}
	if (OrderNumber == 10)
	{
		std::cout << "\nI see you like Drinks, how many would you like???" << std::endl;
		std::cin >> DrinksOrdered;
		total = (DrinkPrice * DrinksOrdered);
		std::cout << "You ordered " << DrinksOrdered << " drinks, your total is $" << total << std::endl;
	}
	
	std::cout << "\nI see you like Drinks, how many would you like???" << std::endl;





}
