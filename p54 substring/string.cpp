#include <iostream>
#include <string>

using namespace std;

int main(){
  string kata1("Aku adalah ultramen");
  string kata2("Dia adalah orang hebat");

  cout << kata1 << endl;
  cout << kata2 << endl
       << endl;

  cout << "Menukar string : \n";
  kata1.swap(kata2);
  cout << kata1 << endl;
  cout << kata2 << endl
       << endl;

  cout << "Repace string : \n";
  kata2.replace(kata2.find("ultramen"), 8, "betmen");
  kata1.replace(kata1.find("Dia"), 3, "Aku");
  cout << kata1 << endl;
  cout << kata2 << endl
       << endl;

  cout << "Insert string : \n";
  kata2.insert(10, " ultramen dan");
  cout << kata1 << endl;
  cout << kata2 << endl
       << endl;

  cin.get();
  return 0;
}