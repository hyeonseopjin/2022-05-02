#include <iostream>
#include <cmath>
using namespace std;

void Hanoi(int num, int from, int by, int to)
{
	if (num == 1)
	{
		cout << from << " " << to << endl;
	}
	else
	{
		Hanoi(num - 1, from, to, by);
		cout << from << " " << to << endl;
		Hanoi(num - 1, by, from, to);
	}
}

int main()
{
	int input;
	cout << "ют╥б : ";
	cin >> input;

	int count = pow(2, input) - 1;
	cout << count << endl;
	Hanoi(input, 1, 2, 3);

	return 0;
}
