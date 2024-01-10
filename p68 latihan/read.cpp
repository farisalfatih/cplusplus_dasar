#include <iostream>
#include <fstream>
#include <string>

using namespace std;
struct User{
  string name;
  int energy;
};

int main(){
  fstream myFile;
  User user;

  myFile.open("data.bin", ios::in | ios::binary);

  for (int i = 0; i < 3; i++){
    myFile.read(reinterpret_cast<char*>(&user), sizeof(User));

    cout << "Name : " << user.name << endl;
    cout << "Energy : " << user.energy << endl;
    cout << endl;
  }

  myFile.close();

  cin.get();
  return 0;
}

