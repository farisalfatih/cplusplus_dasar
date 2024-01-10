#include <iostream>

using namespace std;

double luas (double p, double l){
  double hasil = p * l;
  return hasil;
}

double keliling (double p, double l){
  double hasil = 2 * (p + l);
  return hasil;
}

void tampilkan (double p, double l){
  cout << "Luas dari persegi panjang adalah : ";
  cout << luas(p, l);
  cout << endl;
  cout << "Keliling dari persegi panjang adalah : ";
  cout << keliling(p, l);
}

int main (){
  double p, l;
  cout << "Masukan Panjang : ";
  cin >> p;
  cout << "Masukan Lebar : ";
  cin >> l;

  tampilkan(p, l);
}