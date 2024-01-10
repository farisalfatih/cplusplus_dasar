#include <iostream>
using namespace std;

int main(){
  int array [10] = {0, 1, 2, 3, 4, 5, 6, 7, 8, 9};
  // array tanmpa mengubah addres
  for (int nilai: array){
    cout << "Adddres " << &nilai << " Memiliki nilai : " << nilai << endl;
  }

  cout << endl;
  // Mengambil addres sepenarnya dari array
  for (int &nilai: array){
    cout << "Adddres " << &nilai << " Memiliki nilai : " << nilai << endl;
  }
  cout << endl;
  // Manipulasi array dengan looping
  for(int &nilai: array){
    nilai += 10;
    cout << "Adddres " << &nilai << " Memiliki nilai : " << nilai << endl;
  }
}