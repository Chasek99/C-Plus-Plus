#include <iostream>


int main()
{
	double salary = 0, rate = 0, hours = 0, counter = 0;
	std::cout << "Enter your hours worked: ";
	std::cin >> hours;
	std::cout << "Enter your rate: ";
	std::cin >> rate;

	while (counter <= hours)
	{
		salary = hours*rate;
		counter++;
	}
	if (hours == -1)
	{
		exit(0);
	}
	else if (hours >= 40)
	{
		rate = rate * 1.5;
		salary = salary + rate;
	}

	std::cout << "$" << salary;

	return 0;
}