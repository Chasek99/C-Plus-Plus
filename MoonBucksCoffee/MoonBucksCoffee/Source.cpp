#include<iostream>
using namespace std;

double getTotal(double poundsUsed[], int numElements);

int main()
{
	//declaring the array
	double pounds[12] = { 400.5, 450.0, 475.5, 336.5, 457.0, 325.0, 220.5, 276.0, 300.0, 320.5, 400.5, 415.0 };
	double total = 0.0;
	double average = 0.0;
	

	//calculating the toat and average pounds used
	total = getTotal(pounds, 12);
	average = total / 12;

	//displays the total and average pounds used
	cout << "Total pounds: " << total << endl;
	cout << "Average pounds: " << average << endl;


	system("pause");
	return 0;

}

double getTotal(double poundsUsed[], int numElements)
{
	double totalUsed = 0.0;

	for (int sub = 0; sub < numElements; sub += 1)
		totalUsed += poundsUsed[sub];

	return totalUsed;
}