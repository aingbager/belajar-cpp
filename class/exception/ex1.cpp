// belajar try cat

#include <iostream>
using namespace std;

int main(int argc, char *argv[]) {

  int pembilang, penyebut, hasil;

  cout << "masukan angka pembilang: ";
  cin >> pembilang;
  cout << "masukan angka penyebut: ";
  cin >> penyebut;

  try {
    if (penyebut == 0) {
      throw "tidak boleh dibagi dengan nol";
    }
    hasil = pembilang / penyebut;
    cout << "hasilnya: " << hasil << endl;
  } catch (const char *pesan) {
    cout << "kesalahan: " << pesan << endl;
  }

  cout << "program selesai...." << endl;

  return 0;
}
