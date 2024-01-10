#include <iostream>

using namespace std;

union Angka {
    float floatAngka;
    double doubleAngka;
    int intAngka;
    long longAngka;
    long long longLongAngka;
};

int main() {
    // Membuat objek union
    Angka angkaUnion;

    // Mengisi nilai dengan tipe data yang berbeda
    angkaUnion.floatAngka = 3.14f;
    cout << "Float Angka: " << angkaUnion.floatAngka << endl;

    angkaUnion.doubleAngka = 2.71828;
    cout << "Double Angka: " << angkaUnion.doubleAngka << endl;

    angkaUnion.intAngka = 42;
    cout << "Int Angka: " << angkaUnion.intAngka << endl;

    angkaUnion.longAngka = 1234567890;
    cout << "Long Angka: " << angkaUnion.longAngka << endl;

    angkaUnion.longLongAngka = 987654321012345678;
    cout << "Long Long Angka: " << angkaUnion.longLongAngka << endl;

    return 0;
}
