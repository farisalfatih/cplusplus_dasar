// bentuk ternary operator = kondisi ? hasil1 : hasil2
#include <iostream>
#include <string>

using namespace std;

int main(){
  int a, b;
  string semangat, malas, hasil;

  cout << "Masukan level semangatmu (1-10) : ";
  cin >> a;
  cout << "Masukan level malasmu (1-10) : ";
  cin >> b;
  cout << endl;

  semangat = "Kamu sudah berjuang sangat keras, jangan kasih kendor!!";
  malas = "Bangunlah dari mimpimu, hidup itu harus memiliki semangat";

  hasil = (a > b) ? semangat : malas;

  cout << hasil;

  cin.get();
  return 0;
}