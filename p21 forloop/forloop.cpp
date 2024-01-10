#include <iostream>

using namespace std;

int main()
{
	cout << "Loop Ke-I" << endl;
	for (int i = 0; i <= 10; ++i)
	{
		cout << i << endl;
	}

	cout << "\nLoop Ke-II" << endl;
	for (int i = 0; i <= 10; i += 2)
	{
		cout << i << endl;
	}

	cout << "\nLoop Ke-III" << endl;
	for (int i = 0; i >= -10; --i)
	{
		cout << i << endl;
	}

	int b = 0;
	cout << "\nLoop Ke-IV" << endl;
	for (int i = 0; i < 10; ++i, b += i)
	{
		cout << i << " | " << b << endl;
	}

	cin.get();
	return 0;
}
