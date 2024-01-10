#include <fstream>

using namespace std;

int main(){
  ofstream myFile;

  myFile.open("file.txt", ios::app);
  myFile << "\nKaizou O, Orewa Naru!!";
  myFile.close();

  // ios::truck dan ios::out akan menghapus file dan datanya dan membuat file baru tidak seperti app/append

  return 0;
}