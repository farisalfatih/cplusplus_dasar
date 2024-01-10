#include <iostream>

using namespace std;

int main()
{
	int a = 2;
	int b = 2;
	int c = 3;

	bool hasil1, hasil2, hasil3, hasil4, hasil5, hasil6;

	hasil1 = (a == b);
	hasil2 = (a != b);
	hasil3 = (a < c);
	hasil4 = (a > c);
	hasil5 = (a >= b);
	hasil6 = (a <= c);

	cout << hasil1 << endl;
	cout << hasil2 << endl;
	cout << hasil3 << endl;
	cout << hasil4 << endl;
	cout << hasil5 << endl;
	cout << hasil6 << endl;

	return 0;
}
