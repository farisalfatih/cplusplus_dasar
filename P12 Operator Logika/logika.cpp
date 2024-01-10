#include <iostream>

using namespace std;

int main()
{
	int a, b;
	bool hasil;

	cout << "Masukkan nilai a : ";
	cin >> a;
	cout << "Masukkan nilai b : ";
	cin >> b;


	cout << "Ini adalah nilai sebelum dan sesudah dimasukkan not/!\n";	
	hasil = (a == b);
	cout << "Sebelum : " << hasil << endl;
	hasil = !(a == b);
	cout << "Sesudah : " << hasil << endl;

	cout << "Ini adalah nilai and";	
	hasil = (a == 2) and (b == 2);
	cout << "benar dan benar (2,2) : " << hasil << endl;
	hasil = (a == 2) and (b == 3);
	cout << "benar dan salah (2,2) : " << hasil << endl;
	hasil = (a == 3) and (b == 2);
	cout << "salah dan benar (2,2) : " << hasil << endl;
	hasil = (a == 3) and (b == 3);
	cout << "salah dan salah (2,2) : " << hasil << endl;

	cout << "Ini adalah nilai or";	
	hasil = (a == 2) or (b == 2);
	cout << "benar dan benar (2,2) : " << hasil << endl;
	hasil = (a == 2) or (b == 3);
	cout << "benar dan salah (2,2) : " << hasil << endl;
	hasil = (a == 3) or (b == 2);
	cout << "salah dan benar (2,2) : " << hasil << endl;
	hasil = (a == 3) or (b == 3);
	cout << "salah dan salah (2,2) : " << hasil << endl;

	
	cin.get();
	return 0;
}
