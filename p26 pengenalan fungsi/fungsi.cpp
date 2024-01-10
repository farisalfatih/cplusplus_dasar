#include <iostream>
#include <cmath>

// Fungsi Trigonometri:
// sin(x): Mengembalikan sinus dari x (dalam radian).
// cos(x): Mengembalikan kosinus dari x (dalam radian).
// tan(x): Mengembalikan tangen dari x (dalam radian).
// asin(x): Mengembalikan arcsinus dari x (dalam radian).
// acos(x): Mengembalikan arccosinus dari x (dalam radian).
// atan(x): Mengembalikan arctangen dari x (dalam radian).

// Fungsi Eksponensial dan Logaritmik:
// exp(x): Mengembalikan eksponensial dari x.
// log(x): Mengembalikan logaritma natural dari x.
// log10(x): Mengembalikan logaritma basis 10 dari x.
// pow(x, y): Mengembalikan x pangkat y.

// Fungsi Kuadrat dan Akar:
// sqrt(x): Mengembalikan akar kuadrat dari x.
// cbrt(x): Mengembalikan akar kubik dari x.

// Fungsi Lainnya:
// abs(x): Mengembalikan nilai absolut dari x.
// ceil(x): Mengembalikan nilai x yang dibulatkan ke atas.
// floor(x): Mengembalikan nilai x yang dibulatkan ke bawah.
// round(x): Mengembalikan nilai x yang dibulatkan ke bilangan bulat terdekat.

// Operasi Khusus Bilangan Kompleks:
// std::complex: Kelas untuk merepresentasikan bilangan kompleks.
// real(z): Mengembalikan bagian real dari bilangan kompleks z.
// imag(z): Mengembalikan bagian imajiner dari bilangan kompleks z.
// abs(z): Mengembalikan magnitudo (modulus) dari bilangan kompleks z.


using namespace std;
int main (){
    int a;
    cout << "Masukan akang yang ingin diketahui akarnya" << endl;
    cin >> a;

    double b = sqrt(a);
    cout << "Akar dari " << a << " adalah " << b << endl;
    cin.get();
}