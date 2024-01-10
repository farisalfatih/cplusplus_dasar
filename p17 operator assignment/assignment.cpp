#include <iostream>

using namespace std;

int main()
{
	float a;

	cout << "Masukan nilai : ";
	cin >> a;
	cout << endl;

	a += 10;
	cout << "angka setelah ditambah 10 adalah " << a << endl;

	a -= 10;
	cout << "setelah itu dibagi dengan 10 menjadi " << a << endl;

	a *= 10;
	cout << "dikalikan dengan 10 menjadi " << a << endl;

	a /= 10;
	cout << "dibagi 10 menjadi " << a << endl;

	cout << "kesimpulannya adalah jika angka dioperasikan dengan semua operasi yang sama maka akan menjadi angka itu sendiri.";
	return 0;
}
