#include <iostream>
#include <array>
#include <algorithm>
using namespace std;

const size_t arraySize = 10;
void print(array <int, arraySize> &angka){
  cout << "Array : ";
  for (int &a: angka){
    cout << a << " ";
  }
  cout << endl;
}

int main(){
  array<int, arraySize> angka = {6, 5, 4, 3, 2, 1, 7, 8, 9, 0};
  print(angka);

  int angkaCari;
  bool ketemu;

  // short gulu kemudian search menggenakan binary_search
  cout << "Cari angka : ";
  cin >> angkaCari;

  sort(angka.begin(), angka.end());
  ketemu = binary_search(angka.begin(), angka.end(), angkaCari);

  if (ketemu){
    cout << "Ketemu";
  } else {
    cout << "Tidak ada dalam array";
  }
  cin.get();
  return 0;
}