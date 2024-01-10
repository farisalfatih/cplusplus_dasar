#include <iostream>
#include <string>

using namespace std;

struct aktor{
  string nama;
  int tahunLahir;
};

struct film{
  string judul;
  int tahunTerbit;
  aktor aktor1;
  aktor aktor2;
};

int main(){
  film film1;
  aktor aktor1, aktor2;

  aktor1.nama = "Mohammad Faris Al Fatih";
  aktor1.tahunLahir = 2024;

  aktor2.nama = "King";
  aktor2.tahunLahir = 2000;

  film1.judul = "Sang Penakluk";
  film1.tahunTerbit = 2024;
  film1.aktor1 = aktor1;
  film1.aktor2 = aktor2;

  cout << "Judul        : " << film1.judul << endl;
  cout << "Tahun Terbit : " << film1.tahunTerbit << endl;
  cout << "Aktor        : " << film1.aktor1.nama << " (" << film1.aktor1.tahunLahir << ")"<< endl;
  cout << "             : " << film1.aktor2.nama << " (" << film1.aktor2.tahunLahir << ")"<< endl;

  cin.get();
  return 0;
}