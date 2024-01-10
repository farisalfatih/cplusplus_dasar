#include <iostream>

using namespace std;

// Enum untuk mewakili warna yang disukai
enum WarnaSifat {
    MERAH,
    BIRU,
    HIJAU,
    KUNING,
    UNGU
};

// Fungsi untuk mengembalikan deskripsi sifat berdasarkan warna favorit
string DeskripsiSifat(WarnaSifat warna) {
    switch (warna) {
        case MERAH:
            return "Anda energetik, bersemangat, dan penuh kehidupan.";
        case BIRU:
            return "Anda tenang, sabar, dan memikirkan orang lain.";
        case HIJAU:
            return "Anda suka kedamaian, alam, dan sehati dengan lingkungan.";
        case KUNING:
            return "Anda ceria, kreatif, dan suka berkomunikasi.";
        case UNGU:
            return "Anda kreatif, unik, dan suka keindahan.";
        default:
            return "Warna tidak dikenali.";
    }
}

int main() {
    // Memilih warna favorit
    string warnaFavorit;
    cout << "Masukkan warna favorit (MERAH, BIRU, HIJAU, KUNING, UNGU): ";
    getline(cin, warnaFavorit);

    // Konversi string menjadi enum WarnaSifat
    WarnaSifat warnaEnum;
    if (warnaFavorit == "MERAH") {
        warnaEnum = MERAH;
    } else if (warnaFavorit == "BIRU") {
        warnaEnum = BIRU;
    } else if (warnaFavorit == "HIJAU") {
        warnaEnum = HIJAU;
    } else if (warnaFavorit == "KUNING") {
        warnaEnum = KUNING;
    } else if (warnaFavorit == "UNGU") {
        warnaEnum = UNGU;
    } else {
        cout << "Warna tidak dikenali." << endl;
        return 1; // Keluar program dengan kode error
    }

    // Menampilkan pesan berdasarkan warna favorit
    cout << "Warna favorit Anda adalah ";
    switch (warnaEnum) {
        case MERAH:
            cout << "Merah." << endl;
            break;
        case BIRU:
            cout << "Biru." << endl;
            break;
        case HIJAU:
            cout << "Hijau." << endl;
            break;
        case KUNING:
            cout << "Kuning." << endl;
            break;
        case UNGU:
            cout << "Ungu." << endl;
            break;
        default:
            cout << "Warna tidak dikenali." << endl;
            break;
    }

    // Menampilkan deskripsi sifat berdasarkan warna favorit
    cout << "Sifat Anda: " << DeskripsiSifat(warnaEnum) << endl;

    return 0;
}
