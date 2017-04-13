#include <iostream>


int main()
{
	int pizzaYes = 1, pizzaNo = 2, small = 1, medium = 2, large = 3, cheese = 1, sasuage = 2, bacon = 3;
	int topping;
	int pizzaSize;
	int response;
	std::cout << "Welcome to Chase and Zach's delgados pizzos shop. Where we make everything with hate! " << std::endl;

	std::cout << "Would you like to order one of our amazing pizza's?" << std::endl;
	std::cout << "\n 1 for yes, 2 for no." << std::endl;
	std::cin >> pizzaYes;

	if (pizzaYes == 1)
	{
		std::cout << "Im glad you want one of our amazing pizzas, you wont regret it.";
		std::cout << " What size would you like? 1 for small, 2 for medium, 3 for large.";
		std::cin >> pizzaSize;
		if (pizzaSize== 1  )
			{
				std::cout << "A small thats it. What topping do you want? 1 for Cheese, 2 for sasuage, 3 for bacon.";
				std::cin >> topping;
				if (topping == 1)
				{
					std::cout << "Cheese, thats a basic choice. You now owe me $14.99";
				}
				else if (topping == 2)
				{
					std::cout << "Sasuage, thats a good choice. You now owe me $14.99";
				}
				else if (topping == 3)
				{
					std::cout << "Bacon, thats a amazing choice. You now owe me $14.99";
				}
			}
			else if (pizzaSize == 2)
			{
				std::cout << "A medium. What topping do you want? 1 for Cheese, 2 for sasuage, 3 for bacon.";
				std::cin >> topping;
				if (topping == 1)
				{
					std::cout << "Cheese, thats a basic choice. You now owe me $19.99";
				}
				else if (topping == 2)
				{
					std::cout << "Sasuage, thats a good choice. You now owe me $19.99";
				}
				else if (topping == 3)
				{
					std::cout << "Bacon, thats a amazing choice. You now owe me $19.99";
				}

			}
			else if (pizzaSize == 3)
			{
				std::cout << "A large. you better eat the whole thing. What topping do you want? 1 for Cheese, 2 for sasuage, 3 for bacon.";
				std::cin >> topping;
				if (topping == 1)
				{
					std::cout << "Cheese, thats a basic choice. You now owe me $24.99";
				}
				else if (topping == 2)
				{
					std::cout << "Sasuage, thats a good choice. You now owe me $24.99";
				}
				else if (topping == 3)
				{
					std::cout << "Bacon, thats a amazing choice. You now owe me $24.99";
				}

				std::cout << "would you like to order another pizza??? press 1 to do so.";
				std::cin >> response;

				do
				{
					int main();
				} while (response == 1);
			}
}

}