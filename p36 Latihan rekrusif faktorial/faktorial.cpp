#include <iostream>
using namespace std;

// prototype
int faktorial(int n);

int main(){
  int n, hasil;
  cout << "Masukan Nilai : ";
  cin >> n;

  hasil = faktorial(n);
  cout << " = " << hasil;
}

int faktorial(int n){
  if (n <= 1){
    cout << n;
    return n;
  } else {
    cout << n << " * ";
    return n * faktorial(n - 1);
  }
  
}