#include <iostream>
using namespace std;
void fungsi(int *);
void kuadrat(int *);

int main(){
  int a = 10;
  cout << "Nilai a : " << a << endl;
  cout << "Addres a : " << &a << endl;

  kuadrat(&a);
  cout << a << endl;
  cout << endl;
  fungsi(&a);
}

void fungsi(int *b){
  cout << "Addres b : " << b << endl;
  cout << "Nilai b : " << *b << endl;
}

void kuadrat(int *nilaiPtr){
  *nilaiPtr = *nilaiPtr * *nilaiPtr;
}