#include <iostream>
#include <string>

using namespace std;

int main(){
  string kalimat;
  cout << "Selamat datang di aplikasi perhitungan kata" << endl
       << endl;
  cout << "Masukan kalimat : ";
  getline(cin, kalimat);
  cout << endl;

  int posisi = 0;
  int jumlah = 0;

  while(true){
    posisi = kalimat.find(" ", posisi + 1);
    jumlah++;
    if(posisi < 0){
      break;
    }
  }
  cout << "Jumlah kata pada kalimat yang anda masukan adalah : " << jumlah;

  cin.get();
  return 0;
}