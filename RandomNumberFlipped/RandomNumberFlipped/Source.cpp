#include <iostream>
#include <ctime>
#include <cstdlib>
using namespace std;

int main()
{
	srand(time(NULL));

	int tries = 0;
	int iNum;
	int UpperLim = 100;
	int LowerLim = 1;
	int iCompNum;

	cout << "The computer is gonna try and guess your number\n\n\n";

	cout << "Enter your number: ";
	cin >> iNum;

	do
	{
		iCompNum = rand() % (UpperLim - LowerLim) + LowerLim;

		cout << "\nComputer's guess: ";
		cout << iCompNum;
		++tries;

		if (iNum > iCompNum)
		{
			cout << "\nYou're too low..!\n\n";
			LowerLim = iCompNum + 1;
		}
		else if (iNum < iCompNum)
		{
			cout << "\nToo high..!\n\n";
			UpperLim = iCompNum - 1;
		}
		else if (iNum == iCompNum)
		{
			cout << "\nYou got my number,!\n\nYou guessed the number in just " << tries << " tries!\n\n";
		}

	} while (iNum != iCompNum);

	return 0;
}
