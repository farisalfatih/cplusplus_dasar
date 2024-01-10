#include <iostream>
using namespace std;

void kuadrat(int &);

int main(){
  int a, hasil;
  cout << "Masukan nilai yang dikuadratkan : ";
  cin >> a;
  cout << "Kuadrat dari " << a << " adalah " << endl;
  kuadrat(a);
  cout << a;
}

void kuadrat(int &kuadrat){
  kuadrat = kuadrat * kuadrat;
}