#include <iostream>
#include <array>
#include <algorithm>
using namespace std;

const size_t arraySize = 10;

void print(array<int, arraySize> &angka){
  cout << "Array : ";
  for(int &a : angka){
    cout << a;
  }
  cout << endl;
}

void print(array<char, arraySize> &huruf){
  cout << "Array : ";
  for(char &a : huruf){
    cout << a;
  }
  cout << endl;
}

int main(){
  array<int, arraySize> angka = {5, 4, 8, 1, 2, 0, 9, 1, 3, 0};
  array<char, arraySize> huruf = {'d', 'g', 'r', 'g', 'g', 'f', 'h', 'j', 'w', 'a'};
  print(angka);
  print(huruf);

  cout << endl;
  sort(angka.begin(), angka.end());
  print(angka);
  sort(huruf.begin(), huruf.end());
  print(huruf);
}