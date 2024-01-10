#include <iostream>
#include <string>

using namespace std;

int main()
{
	string a;
	int c = 1;
	int b;
	cout << "Kamu ingin me-looping kata apa (Satu angka)?\n";
	cout << "Jawab : ";
	cin >> a;
	cout << "Kamu ingin me-looping kata berapa kali?\n";
	cout << "Jawab : ";
	cin >> b;

	do {
		cout << a << endl;
		c++;
	} while (c <= b);

	cin.get();
	return 0;
}