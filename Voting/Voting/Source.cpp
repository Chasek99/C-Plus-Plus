#include<iostream>


int main()
{
	int age;

	std::cout << "Enter your age.";
	std::cin >> age;

	if (age <= 10)
		std::cout << "You are 10 or less" << std::endl;
	else if (age <= 12 && age < 18)
		std::cout << "You are less than 18 but older than 12 " << std::endl;
	else if (age >= 19 && age <=30)
		std::cout << "You are still in your 20s" << std::endl;
	else if (age > 30 && age <=40)
		std::cout << "You probaly have kids, I bet thats fun" << std::endl;
	else if (age > 40&& age <= 50)
		std::cout << "You're getting up there" << std::endl;
	else if (age > 50 && age <= 60)
		std::cout << "Do you have grey hairs yet?" << std::endl;
	else if (age > 60 && age <= 70)
		std::cout << "Have you planned out your funeral yet?" << std::endl;
	else if (age > 70 && age <= 80)
		std::cout << "Are you dead yet?" << std::endl;
	system("pause");
		return 0;
}