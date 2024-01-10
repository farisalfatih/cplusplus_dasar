#include <iostream>
using namespace std;
int x = 10; //Global scope
int main (){
  int x = 8; // Local scope
  if (x == 8){
    int x = 1; // Block Scope
    cout << ::x; //Mengambil scope global
  }
}