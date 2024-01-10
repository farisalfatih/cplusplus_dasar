#include <iostream>
#include <array>
using namespace std;

// Definisikan tipe array 2D dengan array
using Array2D = array<array<int, 5>, 3>;

// Fungsi untuk mencetak array 2D
void printArray(const Array2D& arr) {
    for (const auto& row : arr) {
        for (const auto& element : row) {
            cout << element << " ";
        }
        cout << endl;
    }
}

int main() {
    // Inisialisasi array 2D dengan array
    Array2D myArray = {{
        {1, 2, 3, 4, 5},
        {6, 7, 8, 9, 10},
        {11, 12, 13, 14, 15}
    }};

    // Menggunakan fungsi untuk mencetak array
    printArray(myArray);

    return 0;
}
