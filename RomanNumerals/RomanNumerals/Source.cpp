#include <iostream>
#include<string>


int main()
{
	int l = 1;
	int ll = 2;
	int lll = 3;
	int lV = 4;
	int V = 5;

	int response;

	std::cout << "Please Enter a Roman Numeral" << std::endl;
	std::cin >> response;

	if (response == l)
	{
		std::cout << "1" << std::endl;
		std::cin >> l;
	}
	else if (response == ll)
	{
		std::cout << "2" << std::endl;
		std::cin >> ll;
	}
	else if (response == lll)
	{
		std::cout << "3" << std::endl;
		std::cin >> lll;
	}
	else if (response == lV)
	{
		std::cout << "4" << std::endl;
		std::cin >> lV;
	}
	else if (response == V)
	{
		std::cout << "5" << std::endl;
		std::cin >> V;
	}



}