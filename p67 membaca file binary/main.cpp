#include <iostream>
#include <fstream>
#include <string>

using namespace std;

int main(){
  fstream myFile;
  int hasil;
  myFile.open("file.bin", ios::in | ios::binary);

  myFile.read(reinterpret_cast<char*>(&hasil), sizeof(hasil));

  cout << hasil << endl;

  myFile.close();

  cin.get();
  return 0;
}