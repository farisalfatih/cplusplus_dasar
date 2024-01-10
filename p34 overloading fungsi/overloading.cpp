#include <iostream>
using namespace std;
//overloading fungsi adalah ketika kita menimpa fungsi dengan nama yang sama
//contoh kasus jika kita membuat aplikasi sederhana untuk menghitung luas dan keliling

double persegi(double panjang, double lebar){
  double luas = panjang * lebar;
  return luas;
}

double persegi(double sisi){
  double luas = sisi * sisi;
  return luas;
}

int main(){
  char pilihan;
  double panjang, lebar;
  do{
    cin.get();
    system("cls");
    cout << "Apa yang ingin anda hitung \n";
    cout << "1. Luas Persegi Panjang\n";
    cout << "2. Luas Persegi\n";
    cout << "3. Keluar\n";
    cout << "Masukan Pilihan Anda : ";
    cin >> pilihan;

    switch (pilihan)
    {
    case '1':
      system("cls");
      cout << "Masukan Panjang : ";
      cin >> panjang;
      cout << "Masukan Lebar : ";
      cin >> lebar;
      cout << "Luas dari persegi panjang adalah : " << persegi(panjang, lebar);
      cin.get();
      break;
    case '2':
      system("cls");
      cout << "Masukan Sisi Persegi : ";
      cin >> panjang;
      cout << "Luas dari persegi adalah : " << persegi(panjang);
      cin.get();
      break;
    case '3':
      system("cls");
      cout << "Anda keluar dari program \n";
      break;
    default:
      system("cls");
      cout << "Pilihan tidak falid, silahkan pilih lagi\n";
      break;
    }
  } while (pilihan != '3');
  return 0;
}