#include <iostream>

using namespace std;

int main()
{
	int n;

	cout << "Masukan nilai n : ";
	cin >> n;

	cout << "Segi Tiga Siku Kiri Atas\n";
	for (int i = 1; i <= n ; ++i)
	{
		for (int j = 1; j <= i ; ++j)
		{
			cout << " * ";
		}
		cout << endl;
	}

	cout << "Segi Tiga Siku Kiri Bawah\n";
	for (int i = 1; i <= n ; i++)
	{
		for (int j = n; j >= i ; --j)
		{
			cout << " * ";
		}
		cout << endl;
	}
	cin.get();
	return 0;
}
