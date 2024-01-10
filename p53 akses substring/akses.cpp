#include <iostream>
#include <string>
using namespace std;

int main(){
  string kalimat1("Become a King");
  string kalimat2("I am a Predator");

  cout << kalimat1.find("King");
  cout << "    " << kalimat2.find("Predator") << endl;

  cout << kalimat1.substr(9, 4) << " " << kalimat2.substr(7, 8);
  cin.get();
  return 0;
}