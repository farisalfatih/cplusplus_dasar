#include <iostream>
using namespace std;

void printArray(int (*ptrArray)[5], int baris, int kolom){
  for (int i = 0; i < baris; i++){
    for (int j = 0; j < kolom; j++){
      cout << ptrArray[i][j] << " ";
    }
    cout << endl;
  }
}
int main(){
  int array[3][5]{
      {1, 2, 3, 4, 5},
      {6, 7, 8, 9, 10},
      {11, 12, 13, 14, 15}};
  printArray(array, 3, 5);
}