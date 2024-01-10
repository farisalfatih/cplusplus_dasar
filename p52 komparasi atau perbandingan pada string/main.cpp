#include <iostream>
#include <string>
using namespace std;

int main() {
    // Deklarasi string untuk tebakan dan perasaan
    string tebakan;
    string perasaan;

    // Meminta pengguna untuk memasukkan tebakan
    cout << "Tebak apa yang saya rasakan? ";
    cin >> tebakan;

    // Membandingkan tebakan dengan jawaban yang benar
    if (tebakan == "cinta") {
        perasaan = "Saya merasa cinta terhadapmu!";
    } else if (tebakan == "senang") {
        perasaan = "Saya merasa senang saat bersamamu!";
    } else if (tebakan == "bahagia") {
        perasaan = "Saya merasa bahagia bersamamu!";
    } else {
        perasaan = "Maaf, saya tidak bisa menebak perasaanmu.";
    }

    // Menampilkan perasaan
    cout << perasaan << endl;

    return 0;
}
