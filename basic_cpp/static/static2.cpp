#include <iostream>
class Angka {
public:
  static int nomor;
  void cek() { nomor++; }
};

int Angka::nomor = 0;

int main(int argc, char *argv[]) {

  Angka angka1;
  Angka angka2;

  std::cout << Angka::nomor << std::endl;
  return 0;
}
