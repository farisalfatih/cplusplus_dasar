#include <iostream>
using namespace std;

int main (){
  int a = 5;
  // reference
  int &b = a;

  cout << "Nilai dari a adalah : " << a << endl;
  cout << "Nilai dari b adalah : " << b << endl;
  cout << "Alamat dari a adalah : " << &a << endl;
  cout << "Alamat dari b adalah : " << &b << endl << endl;

  b = 10;
  cout << "Nilai dari a adalah : " << a << endl;
  cout << "Nilai dari b adalah : " << b << endl;
  cout << "Alamat dari a adalah : " << &a << endl;
  cout << "Alamat dari b adalah : " << &b << endl << endl;

  a = 15;
  cout << "Nilai dari a adalah : " << a << endl;
  cout << "Nilai dari b adalah : " << b << endl;
  cout << "Alamat dari a adalah : " << &a << endl;
  cout << "Alamat dari b adalah : " << &b << endl << endl;
}