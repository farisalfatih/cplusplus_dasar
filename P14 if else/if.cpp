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
	cout << "Nilai ini Positif" << endl;
	} else {
		cout << "Nilai ini Negatif" << endl;
	}
	cin.get();

	return 0;
}
