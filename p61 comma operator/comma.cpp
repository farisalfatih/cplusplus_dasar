// tanda comma operator adalah kurung ()
#include <iostream>

using namespace std;

int main() {
    int x = 5, y = 10, z = 15;

    // Menggunakan operator koma untuk multiple statements
    int result = (x++, y++, z++);
    
    // Menampilkan nilai dari x, y, dan z setelah operator koma
    cout << "Nilai x: " << x << endl;
    cout << "Nilai y: " << y << endl;
    cout << "Nilai z: " << z << endl;

    // Menampilkan hasil dari operator koma
    cout << "Hasil dari operator koma: " << result << endl;

    return 0;
}
