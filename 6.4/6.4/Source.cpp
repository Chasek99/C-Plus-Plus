#include<iostream>
using namespace std;

double getTotal(double NumbersUsed[], int numElements);

int main()
{
	//declaring the array
	int numbers[6] = { 23, 6, 47, 35, 2, 14 };
	double Highest = 0.0;
	double Odds = 0.0;


	for (int i = 0; i < 47;i++)
	{
		cin >> Highest;
		if (Highest>Odds)
			Odds = Highest;
		cout << "The biggest number is: " << Highest << endl;
	}


	//calculating the total values
	Highest = 47;
	Odds = 0;

	//displays the total and average
	cout << "Original Numbers:"<< endl;
	cout << "Highest Number: " << Highest << endl;
	cout << "Odd numbers: " << Odds << endl;


	system("pause");
	return 0;

}

