#include <iostream>
#include <string>

using namespace std;

char getOption(){
  char input;
  system("cls");
  cout << "\nCRUD Data Mahasiswa\n";
  cout << "=============================\n";
  cout << "1. Tambah Data Mahasiswa\n";
  cout << "2. Tampilkan Data Mahasiswa\n";
  cout << "3. Ubah Data Mahasiswa\n";
  cout << "4. Hapus Data Mahasiswa\n";
  cout << "5. Keluar Program\n";
  cout << "=============================\n";
  cout << "Masukan Pilihan [1-5] : ";
  cin >> input;
  return input;
}

int main(){
  char pilihan = getOption();
  char isContinue;
  enum option
  {
    CREATE = '1',
    READ,
    UPDATE,
    DELETE,
    FINISH = '5'
  };

  while(pilihan != FINISH){
    switch (pilihan) {
      case CREATE:
        cout << "Anda memilih Tambah Data Mahasiswa" << endl;
        // Tambahkan logika untuk menambah data mahasiswa
        break;
      case READ:
        cout << "Anda memilih Tampilkan Data Mahasiswa" << endl;
        // Tambahkan logika untuk menampilkan data mahasiswa
        break;
      case UPDATE:
        cout << "Anda memilih Ubah Data Mahasiswa" << endl;
        // Tambahkan logika untuk mengubah data mahasiswa
        break;
      case DELETE:
        cout << "Anda memilih Hapus Data Mahasiswa" << endl;
        // Tambahkan logika untuk menghapus data mahasiswa
        break;
      case FINISH:
        cout << "Anda memilih Keluar Program" << endl;
        // Tambahkan logika atau keluar program
        break;
      default:
        cout << "Pilihan Tidak Ditemukan" << endl;
        break;
    }
    lanjutkan:
    cout << "Lanjutkan? (y/n) : ";
    cin >> isContinue;
    if ((isContinue == 'y') || (isContinue == 'Y')){
      pilihan = getOption();
    } else if ((isContinue == 'n') || (isContinue == 'Y')){
      break;
    } else {
      goto lanjutkan;
    }
  }

  cin.get();
  return 0;
}