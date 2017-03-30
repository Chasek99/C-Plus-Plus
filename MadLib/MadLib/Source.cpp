#include <iostream>
#include <string>

int main()
{
	int  c;
	std::string color, coolest, arms, dragon, china, foods;


	std::cout << "Welcome to my mad limb" << std::endl;
	std::cout << "Please enter the following information" << std::endl;

	std::cout << "Enter a color" << std::endl;
	std::cin >> color;

	std::cout << "Enter a word ending in est" << std::endl;
	std::cin >> coolest;

	std::cout << "Enter a plural body part" << std::endl;
	std::cin >> arms;

	std::cout << "Enter a animal" << std::endl;
	std::cin >> dragon;

	std::cout << "Enter a noun" << std::endl;
	std::cin >> china;

	std::cout << "Enter a plural noun" << std::endl;
	std::cin >> foods;

	std::cout << "The" << color << " dragon is the " << coolest << " Dragon of them all. It has"
		<< c << arms << ", and a " << dragon << "shaped like a " << china << ". It loves to eat " << foods <<
		", although it will feast on anything." << std::endl;


}