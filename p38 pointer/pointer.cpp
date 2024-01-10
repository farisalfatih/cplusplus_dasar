#include <iostream>
using namespace std;

// pointer adalah tempat menyimpan nilai di adres/alaman
int a = 2;
int *ptr = &a;

int main(){
  cout << "Nilai variabel a : " << a << endl;
  cout << "Alaman a : " << &a << endl;
  cout << "Nilai Pointer : " << *ptr << endl;
  cout << "Alamat Pointer : " << &ptr << endl;

  *ptr = 4;
  cout << "Nilai variabel a : " << a << endl;
  cout << "Alaman a : " << &a << endl;
  cout << "Nilai Pointer : " << *ptr << endl;
  cout << "Alamat Pointer : " << &ptr << endl;
  return 0;
}