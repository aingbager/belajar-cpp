#include <iostream>

int main (int argc, char *argv[]) {
  enum warna {merah,kuning,hijau};
  warna merah1 = warna::merah;
  std::cout << merah1 << std::endl;
  return 0;
}
