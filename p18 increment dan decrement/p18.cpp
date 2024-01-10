#include <iostream>

using namespace std;

int main()
{
	int a;

	cout << "Masukan nilai : ";
	cin >> a;

	cout << "Nilai yang anda masukan adalah " << a << endl;

	a++;
	cout << "Nilai setelah di increment adalah " << a << endl;

	a--;
	cout << "Nilah increment setelah di decrementkan adalah " << a << endl;

	cin.get();
	return 0;
}
