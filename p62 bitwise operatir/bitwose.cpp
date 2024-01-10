#include <iostream>

using namespace std;

int main() {
    // Contoh penggunaan bitwise AND (&)
    int a = 5; // Binary: 0101
    int b = 3; // Binary: 0011
    int resultAND = a & b; // Binary: 0001
    cout << "a & b = " << resultAND << endl;

    // Contoh penggunaan bitwise OR (|)
    int resultOR = a | b; // Binary: 0111
    cout << "a | b = " << resultOR << endl;

    // Contoh penggunaan bitwise XOR (^)
    int resultXOR = a ^ b; // Binary: 0110
    cout << "a ^ b = " << resultXOR << endl;

    // Contoh penggunaan bitwise NOT (~)
    int c = 7; // Binary: 0111
    int resultNOT = ~c; // Binary: 1000
    cout << "~c = " << resultNOT << endl;

    // Contoh penggunaan bitwise shift left (<<)
    int num = 8; // Binary: 1000
    int resultShiftLeft = num << 2; // Binary: 100000
    cout << "num << 2 = " << resultShiftLeft << endl;

    // Contoh penggunaan bitwise shift right (>>)
    int resultShiftRight = num >> 1; // Binary: 0100
    cout << "num >> 1 = " << resultShiftRight << endl;

    return 0;
}
