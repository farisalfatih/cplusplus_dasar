#include <iostream>
#include <fstream>
#include <string>

using namespace std;

int main(){
  ifstream myFile;
  string baris;

  myFile.open("file.txt");
  while (getline(myFile, baris)) {
    cout << baris << endl;
  }
  
  cin.get();
  return 0;
}