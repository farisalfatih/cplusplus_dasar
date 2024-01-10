#include <iostream>

double pembagian(double a, double b) {
    return a / b;
}

double perkalian(double a, double b) {
    return a * b;
}

double penjumlahan(double a, double b) {
    return a + b;
}

double pengurangan(double a, double b) {
    return a - b;
}

void masukan(double &a, double &b) {
    std::cout << "Masukkan angka Pertama : ";
    std::cin >> a;
    std::cout << "Masukkan angka kedua : ";
    std::cin >> b;
}

using namespace std;

int main() {
    int pilihan;
    double a, b, hasil;

    cout << "Selamat Datang di Kalkulator Sederhana Dua Angka\n\n";

    while (true) {
        cout << "Operasi apa yang ingin anda gunakan?\n";
        cout << "1. Penjumlahan\n";
        cout << "2. Pengurangan\n";
        cout << "3. Perkalian\n";
        cout << "4. Pembagian\n";
        cout << "5. Keluar\n";

        cout << "Masukkan pilihan Anda (1-5): ";
        cin >> pilihan;

        if (pilihan == 5) {
            cout << "Program telah selesai, see you\n";
            break;  // Keluar dari loop
        }

        masukan(a, b);

        switch (pilihan) {
            case 1:
                hasil = penjumlahan(a, b);
                break;
            case 2:
                hasil = pengurangan(a, b);
                break;
            case 3:
                hasil = perkalian(a, b);
                break;
            case 4:
                if (b != 0) {
                    hasil = pembagian(a, b);
                } else {
                    cout << "Error: Pembagian oleh nol tidak diizinkan.\n";
                    continue;  // Kembali ke awal loop
                }
                break;
            default:
                cout << "Pilihan tidak valid. Silakan masukkan pilihan yang benar.\n";
                continue;  // Kembali ke awal loop
        }

        cout << "Hasil: " << hasil << "\n\n";
    }

    return 0;
}
