#include <iostream>
#include <string>

class Mahasiswa {
public:
  std::string name;
  int usia;

  Mahasiswa(std::string name1, int usia1) {
    Mahasiswa::name = name1;
    Mahasiswa::usia = usia1;
  }

  void Tampil() {
    std::cout << "name: " << name << std::endl;
    std::cout << "usia: " << usia << std::endl;
  }
};

class Pewarisan : public Mahasiswa {
public:
  std::string alamat;

  Pewarisan(std::string name, int usia, std::string alamat)
      : Mahasiswa(name, usia) {
    Pewarisan::alamat = alamat;
  }

  void Tampil() {
    Mahasiswa::Tampil();
    std::cout << "alamat: " << alamat << std::endl;
  }
};

int main(int argc, char *argv[]) {
  Mahasiswa user1 = Mahasiswa("otong", 25);
  user1.Tampil();
  Pewarisan user2 = Pewarisan("udin", 28, "kp.ciantra");
  user2.Tampil();
  return 0;
}
