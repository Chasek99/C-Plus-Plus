#include<iostream>
using namespace std;

double getTotal(double NumbersUsed[], int numElements);

int main()
{
	//declaring the array
	int array[6] = { 23, 6, 47, 35, 2, 14 };
	int Highest = 0.0;
	int Odds = 0.0;

	for (int i = 0; i < 5; i++)
	{
		if (array[i] > Highest){
			Highest = array[i];
		}
	}

	cout << "The highest value is:" << Highest << endl;



	system("pause");
	return 0;

}

