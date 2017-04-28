#include <iostream>

float totalFahrenheit(float);
float totalCelsius(float);


float main(float){


	float temp;
	char choice;

	std::cout << "Type in the temperature: ";
	std::cin >> temp;
	std::cout << "Press C to convert to Celsius and press F to convert to Fahrenheit: ";
	std::cin >> choice;
	totalFahrenheit(temp);
	totalCelsius(temp);
	if (choice == 'c' || choice == 'C'){
		std::cout << temp << " degrees Fahrenheit converted to Celsius is: " << totalCelsius(temp);
	}
	else if (choice == 'F' || choice == 'f'){
		std::cout << temp << " degrees Celsius converted to Fahrenheit is: " << totalFahrenheit(temp);
	}
}


float totalFahrenheit(float temp){

	return ((9 / 5 * temp) + (32));
}


float totalCelsius(float temp){

	return ((temp - 32)*(5 / 9));
}