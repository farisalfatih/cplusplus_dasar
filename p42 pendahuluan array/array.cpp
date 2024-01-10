#include <iostream>
using namespace std;

int main(){
  // array adalah suatu kumpulan data
  // addres pada array itu berurutan
  // ada dua cara menggunakan array
  // cara 1
  int data1[5] = {1, 2, 3, 4, 5};
  // cara 2
  int data2[4];
  data2[0] = 1;
  data2[1] = 2;
  data2[2] = 3;
  data2[3] = 4;
  cout << "Adres dari array data1 adalah " << data1[0] << &data1[0] << endl;
  cout << "Adres dari array data1 adalah " << data1[1] << &data1[1] << endl;
  cout << "Adres dari array data1 adalah " << data1[2] << &data1[2] << endl;
  cout << "Adres dari array data1 adalah " << data1[3] << &data1[3] << endl;
  cout << "Adres dari array data1 adalah " << data1[4] << &data1[4] << endl
       << endl;
  cout << "Mengakses array menggunakan pointer : ";
  int *pointer = data1;
  cout << *(pointer + 1) << endl;

  // Menghitung jumlah array
  int ukuran = sizeof(data2) / sizeof(int);
  cout << "Jumlah array menggunakan sizeof adalah : " << ukuran;
  return 0;
}