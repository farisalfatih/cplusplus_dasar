#include <iostream>
#include <array>
using namespace std;

int main(){
  array<int, 6> nilai;
  for (int i = 0; i <= 5; i++){
    nilai[i] = i;
    cout << "Nilai dari [" << i << "] = " << nilai[i];
    cout << " dengan addres " << &nilai[i];
    cout << endl;
  }
  cout << endl;
  cout << "Jumlah pada array adalah : " << nilai.size() << endl;
  cout << "Addres awal pada array adalah : " << nilai.begin() << endl;
  cout << "addres akhir dari array adalah : " << nilai.end() << endl;
  cout << "Nilai dari array ke [2] adalah : " << nilai.at(2) << endl;
}