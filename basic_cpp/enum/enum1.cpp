#include <iostream>

int main(int argc, char *argv[]) {
  enum Warna { merah, kuning, hijau };

  Warna myRed = Warna::merah;

  std::cout << myRed << std::endl;
  return 0;
}
