#include <iostream>

using namespace std;

int main()
{
	int a = 2;
	int b = 10;
	int c = 2;
	int d;
	for (int i = 0; i < 10; ++i)
	{
		d = a * i + b - c;
		cout << d << endl;
		if (i == 5)
		{
			break;
		}
	}

	int p = 0;
	while (p <= 10)
	{
		if (p == 5)
		{
			cout << p << endl;
			continue;
		}
	}
	cin.get();
	return 0;
}
