#include <iostream>

int FibonacciNumbers(int num);

using namespace std;

int main()
{
	int input;
	cout << "ют╥б : ";
	cin >> input;

	for (int i = 1; i <= input; i++)
	{
		cout << FibonacciNumbers(i) << "  ";
	}
	cout << "\n";
}

int FibonacciNumbers(int num)
{
	if (num == 1)
	{
		return 0;
	}
	if (num == 2)
	{
		return 1;
	}
	else
		return FibonacciNumbers(num - 1) + FibonacciNumbers(num - 2);

	return 0;
}
