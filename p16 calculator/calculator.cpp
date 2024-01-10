#include <iostream>

using namespace std;

int main()
{
	float a, b, hasil;
	char aritmatika;

	// Memasukan input dari user
	cout << "Selamat datang di kalkulator kami, selamat menghitung :) \n\n";
	cout << "Masukan nilai pertama : ";
	cin >> a;
	cout << "\nMasukan operator +, -, *, / : ";
	cin >> aritmatika;
	cout << "Masukan nilai ke-dua : ";
	cin >> b;
	cout << endl;

	switch (aritmatika){
		case '+':
			hasil = a + b;
			cout << a << aritmatika << b << " = " << hasil;
			break;
		case '-':
			hasil = a - b;
			cout << a << aritmatika << b << " = " << hasil;
			break;
		case '*':
			hasil = a * b;
			cout << a << aritmatika << b << " = " << hasil;
			break;
		case '/':
			hasil = a / b;
			cout << a << aritmatika << b << " = " << hasil;
			break;
		default:
			cout << "Operator anda salah atau anda memasukan nilai selain angka";
	}

	return 0;
}
