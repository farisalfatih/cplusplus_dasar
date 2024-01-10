#include <iostream>

using namespace std;

int main()
{
	cout << "Belajar menggunakan if yang berisi kondisi/() dan body/{}" << endl;

	int a;

	cout << "Masukan Nilai : ";
	cin >> a;

	if (a >= 0)
	{
	cout << "Positif" << endl;
	}

	if (a < 0)
	{
	cout << "Negatif" << endl;
	}

	cin.get();

	return 0;
}
