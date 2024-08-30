#include <iostream>
#include <string>

using namespace std;

class Orang {
public:
  string name;
  int usia;
  string alamat;

  Orang(string name, int usia, string alamat) {
    this->name = name;
    this->usia = usia;
    this->alamat = alamat;
  }

  void Tampil() {
    cout << "nama: " << name << endl;
    cout << "usia: " << usia << endl;
    cout << "alamat: " << alamat << endl;
  }
};

int main(int argc, char *argv[]) {
  Orang *person1 = new Orang("udin", 23, "kp.ciantra");
  person1->Tampil();
  delete person1;
  return 0;
}
