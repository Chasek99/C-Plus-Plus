#include<iostream>
using namespace std;

double getTotal(double NumbersUsed[], int numElements);

int main()
{
	//declaring the array
	double numbers[6] = {23, 6, 47, 35, 2, 14};
	double total = 0.0;
	double average = 0.0;


	//calculating the total values
	total = getTotal(numbers, 6);
	average = total / 6;

	//displays the total and average
	cout << "Total: " << total << endl;
	cout << "Average: " << average << endl;


	system("pause");
	return 0;

}

double getTotal(double NumbersUsed[], int numElements)
{
	double totalUsed = 0.0;

	for (int sub = 0; sub < numElements; sub += 1)
		totalUsed += NumbersUsed[sub];

	return totalUsed;
}