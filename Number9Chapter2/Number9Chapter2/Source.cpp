//ChaseKress
//April 6th
//Chapter 2 #7 page 71

#include <iostream>
#include <string>

int main()
{
	double Bagels = .99;
	double donuts = .99;
	double coffee = 2.50;

	double BagelOrdered;
	double donutsOrdered;
	double coffeeOrdered;

	double BagelTotal, donutTotal, CoffeeTotal, Total;


	std::cout << "Welcome to my fantastic Coffee shop!!!" << std::endl;

	std::cout << "How many bagels would you like???" << std::endl;
	std::cin >> BagelOrdered;
	
	std::cout << "How many donuts would you like???" << std::endl;
	std::cin >> donutsOrdered;

	std::cout << "How many coffees would you like???" << std::endl;
	std::cin >> coffeeOrdered;

	BagelTotal = BagelOrdered * Bagels;
	donutTotal = donutsOrdered * donuts;
	CoffeeTotal = coffeeOrdered * coffee;

	Total = BagelTotal + donutTotal + CoffeeTotal;

	std::cout << "You're total comes out to be $" << Total << std::endl;



}