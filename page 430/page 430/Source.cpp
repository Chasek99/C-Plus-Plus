#include<iostream>
#include <iomanip>


int main()

{
	//declareing the array
	double sales[4] = { 0.0 };

	//stores data in the array
	for (int sub = 0; sub < 4; sub = sub + 1)
	{
		std::cout << "Enter the sales for the Region";
		std::cout << sub + 1 << ": ";
		std::cin >> sales[sub];
		//end for loop

	}
	//displays the contents of the array
	std::cout << std::fixed << std::setprecision(2) << "\n\n";

	for (int sub = 0; sub < 4; sub = sub + 1)
	{
		std::cout << "sales for Region " << sub + 1 << ": $";
		std::cout << sales[sub] << std::endl;
	}
	double result = 0;
	for (int n = 0; n < 4; ++n)
	{
		result = sales[n] + result;
	}
	std::cout << "The toal for all the regions is " << result << std::endl;
	system("pause");
	return 0;
}