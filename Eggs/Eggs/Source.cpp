//Chase Kress
//April 4th
//Egg calculator

#include <iostream>
#include <string>


int main()
{
	std::string Answers;
	double DozenPrice = 2.00;
	double SinglePrice = .25;
	int dozenEggs = 12;
	int remainderEggs;
	int numDozenEggs;
	int TotalOrdered;
	double TotalCost;
	 


	std::cout << "Welcome to my Egg calculator";
	std::cout << "\nHow many eggs would you like to order";
	std::cin >> TotalOrdered;

	numDozenEggs = TotalOrdered / dozenEggs;
	remainderEggs = TotalOrdered % dozenEggs;

	TotalCost = numDozenEggs * DozenPrice + remainderEggs * SinglePrice;

	std::cout << "\nYou ordered" << TotalOrdered << "Eggs";
	std::cout << "\nYour total cost is" << TotalCost << std::endl;
	
}