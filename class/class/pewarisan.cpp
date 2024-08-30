#include <iostream>
#include <string>

using namespace std;

class Mahasiswa {
public:
  string nama;
  int usia;

  Mahasiswa(string nama, int usia) {
    this->nama = nama;
    this->usia = usia;
  }
  void Tampil() {
    cout << "nama: " << nama << endl;
    cout << "usia: " << usia << endl;
  }
};

class Turunan : public Mahasiswa {
public:
  string alamat;

  Turunan(string nama, int usia, string alamat) : Mahasiswa(nama, usia) {
    this->alamat = alamat;
  }
  void Tampil() {
    Mahasiswa::Tampil();
    cout << "alamat: " << alamat << endl;
  }
};

int main(int argc, char *argv[]) {
  // belajar pewarisan class
  Mahasiswa person0("udin", 24);
  person0.Tampil();
  Turunan person1("otong", 28, "kp ciantra");
  person1.Tampil();
  return 0;
}
