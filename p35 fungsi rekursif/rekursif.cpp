#include <iostream>
using namespace std;

// Fungsi rekursif adalah fungsi yang memanggil dirinya sendiri, ini bisa melakukan looping pada fungsi
// studi kasus yang digunakan dalam pertemuan ini adalah pangkat dari sebuah nilai
int hasil(int a, int b){
  if (b <= 1){
    return a;
  } else{
    return a * hasil(a, (b - 1));
  }
}
  
int main(){
  int a, b;
  cout << "Masukan nilai : ";
  cin >> a;
  cout << "Masukan Pangkat : ";
  cin >> b;

  cout << "Hasil dari " << a << " Pangkat " << b << " Adalah " << hasil(a, b);
  return 0;
}