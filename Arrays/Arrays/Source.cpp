#include <iostream>

int addition[] = { 1, 2, 3 };

int addition2[] = {  5, 10, 15, 20, 25, 30, 35, 40, 45, 50};
int n, result = 0;


int main()
{
	int x[] = { 1 };
	int y[] = { 2 };
	int z[] = { 3 };
	std::cout << x[0] << std::endl;
	std::cout << y[0] << std::endl;  //long way
	std::cout << z[0] << std::endl;

	for (n = 0; n < 5; ++n)
	{
		result = addition[n] + result;
	}
	std::cout << result << std::endl;

	int a[] = { 1 };
	int b[] = { 1 };
	int c[] = { 1 };
	int d[] = { 1 };
	int e[] = { 1 };
	int f[] = { 1 };
	int g[] = { 1 };
	int h[] = { 1 };







	system("pause");
	return 0;
}