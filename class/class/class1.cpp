#include <iostream>
#include <string>

using namespace std;

class Mahasiswa {
public:
  string name;
  int usia;
  string alamat;

  Mahasiswa(string name, int usia, string alamat) {
    this->name = name;
    this->usia = usia;
    this->alamat = alamat;
  }

  void Tampil() {
    cout << "namamu: " << name << endl;
    cout << "usia: " << usia << endl;
    cout << "alamat: " << alamat << endl;
  }
};

int main (int argc, char *argv[]) {
  Mahasiswa person1("udin",24,"kp ciantra");
  person1.Tampil();
  return 0;
}
