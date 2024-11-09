#include <iostream>
#include <string>

class Mahasiswa {
public:
  std::string name;
  std::string alamat;

  Mahasiswa(std::string name, std::string alamat) {
    this->name = name;
    this->alamat = alamat;
  }

  void display() {
    std::cout << "nama: " << name << std::endl;
    std::cout << "alamat: " << alamat << std::endl;
  }
};
int main(int argc, char *argv[]) {
  // belajar this
  Mahasiswa udin = Mahasiswa("udin", "kp.ciantra");
  udin.display();

  return 0;
}
