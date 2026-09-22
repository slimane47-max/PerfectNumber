#include<iostream>

using namespace std;
int ReadPositiveNumber()
{
	int Number = 0;
	do
	{
		cout << "Please enter a positive number : ";
		cin >> Number;
	} while (Number <= 0);

	return Number;
}
bool IsPerfectNumber(int Number)
{
	int HalfNumber = round(Number / 2);
	int sum = 0;

	for (int i = 1; i <= HalfNumber; i++)
	{
		if (Number % i == 0)
			sum += i;
	}
	return Number == sum;
}

int main()
{
	int Number = ReadPositiveNumber();

	if (IsPerfectNumber(Number))
		cout << Number << " is a perfect number . " << endl;
	else
		cout << Number << " is not a perfect number . " << endl;
}
