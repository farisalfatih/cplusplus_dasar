#include <iostream>
using namespace std;

// prototype
double luas(double p, double l);
void tampilan(double p, double l);

int main(){
  double p, l;
  cout << "Masukan Panjang : ";
  cin >> p;
  cout << "Masukan Lebar : ";
  cin >> l;

  tampilan(p, l);
}

double luas (double p, double l){
  return p * l;
}

void tampilan (double p, double l){
  cout << "Luas dari Persegi Panjang Adalah : ";
  cout << luas(p, l);
}
