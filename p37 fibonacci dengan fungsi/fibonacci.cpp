#include <iostream>
using namespace std;

int fibonacci(int n);

int main (){
  int n;
  cout << "Masukan Angka : ";
  cin >> n;
  cout << "Fibonacci dari " << n << " adalah " << fibonacci(n);
}

int fibonacci(int n){
  if ((n == 0) || (n == 1)){
    return n;
  } else {
    return fibonacci(n - 1) + fibonacci (n - 2);
  }
}