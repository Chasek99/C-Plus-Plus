#include <iostream>

int addition(int a, int b)
{
	int r;
	r = a + b;
	return r;
}
int main()
{
	int z, entryNum1, entryNum2;

	std::cout << "Please enter your first number<< ";
	std::cin >> entryNum1;

	std::cout << "Please enter your second number<< ";
	std::cin >> entryNum2;

	z = addition(entryNum1, entryNum2);
	std::cout << "The result is " << z;

	system("pause");
}