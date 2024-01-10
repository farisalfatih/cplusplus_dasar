#include <iostream>

using namespace std;

int main()
{
	int a;

	cout << "Apa tujuanmu saat ini ? \n";
	cout << "1. Memperbaiki diri \n";
	cout << "2. Harta \n";
	cout << "3. Wanita \n";
	cout << "4. Tidak memiliki tujuan \n";
	cout << "Nomor berapa pilihanmu : ";
	cin >> a;

	switch(a){
		case 1:
			cout << "Kamu akan mendapatkan segalanya \n";
			cout << "1. Menjadi lebih baik \n";
		case 2:
			cout << "2. Harta \n";
		case 3:
			cout << "3. Wanita \n";
			break;
		default:
			cout << "Cari apa tujuanmu, karena hidup adalah pilihan jika kamu tidak memilih maka itulah pilihanmu \n";
	}
	return 0;
}
