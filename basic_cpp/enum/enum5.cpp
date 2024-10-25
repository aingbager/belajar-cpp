#include <iostream>
int main(int argc, char *argv[]) {
  // belajar ennum
  enum Warna { merah, kuning, hijau };
  Warna yellow = Warna::kuning;

  std::cout << yellow << std::endl;
  return 0;
}
