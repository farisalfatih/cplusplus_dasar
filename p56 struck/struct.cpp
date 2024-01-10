#include <iostream>
#include <string>

using namespace std;

// struck adalah data dari kumpulan data

struct mahasiswa{
  string nama;
  long long npm;
  string email;
  float berat;
  float tinggi;
};

int main(){
  mahasiswa faris;
  faris.nama = "Mohammad Faris Al Fatih";
  faris.npm = 22081010277;
  faris.email = "farisalfatih777@gmail.com";
  faris.berat = 72.5;
  faris.tinggi = 173.5;

  cout << "Nama   : " << faris.nama << endl;
  cout << "NPM    : " << faris.npm << endl;
  cout << "Email  : " << faris.email << endl;
  cout << "Berat  : " << faris.berat << endl;
  cout << "Tinggi : " << faris.tinggi << endl;
  cin.get();
  return 0;
}