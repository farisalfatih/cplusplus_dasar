#include <iostream>
#include <array>
using namespace std;

int main(){
  cout << "Selamat datang di aplikasi grefik nilai\n\n";
  array<int, 10> nilai;
  for ( int i = 0; i < nilai.size(); i++){
    cout << "Masukan berapa mahasiswa pada range ";
    cout << i * 10 << "-" << (i * 10) + 10 << " : ";
    cin >> nilai[i];
  }
  cout << endl
       << endl;

  cout << "Sebaran Grafik\n";
  for ( int i = 0; i < nilai.size(); i++){
    cout << i * 10 << "-" << (i * 10) + 10 << " : ";
    for (int bintang = 0; bintang < nilai[i]; bintang++){
      cout << "*";
    }
    cout << endl;
  }
  
}