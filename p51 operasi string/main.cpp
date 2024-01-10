#include <iostream>
#include <string>
using namespace std;

int main(){
  string kata1 = "Become a";
  string kata2(" King");
  cout << kata1 << kata2 << endl;

  string kata3("O");
  kata3[0] = 'I';
  cout << kata3 << endl;

  string kata4(" am a ");
  kata3.append(kata4);
  cout << kata3 << endl;

  string kata5("Predator");
  kata3 += kata5;
  cout << kata3;

  cin.get();
  return 0;
}