#include <iostream>
using namespace std;

double perhitungan(double l, double p, double t= 1 ){
  double hasil = p * l * t;
  return hasil;
}
int main(){
  char pilihan;
  double p, l, t;

  do{
    cout << "\nAnda ingin menghitung apa? \n";
    cout << "1. Luas \n";
    cout << "2. Volume \n";
    cout << "3. Keluar\n";
    cout << "Apa pilihan anda : ";
    cin >> pilihan;

    switch (pilihan)
    {
    case '1':
      cout << "Masukan Panjang :";
      cin >> p;
      cout << "Masukan Lebar : ";
      cin >> l;

      cout << "Luas Persegi panjang tersebut adalah : " << perhitungan(p, l);
      break;
    case '2':
      cout << "Masukan Panjang :";
      cin >> p;
      cout << "Masukan Lebar : ";
      cin >> l;
      cout << "Masukan Tinggi :";
      cin >> t;

      cout << "Volume Persegi panjang tersebut adalah : " << perhitungan(p, l, t);
      break;
    case '3':
      cout << "Anda keluar dari program";
      break;
    default:
      cout << "Pilihan tidak falid, silahkan coba lagi\n";
      continue;
      // break;
    }
  } while (pilihan != '3');

  return 0;
}