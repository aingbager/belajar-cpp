#include <fstream>
#include <iostream>
#include <string>
using iff = std::ifstream;

int main(int argc, char *argv[]) {
  // baca files
  iff baca("file.txt");
  // pengecekan file
  if (!baca) {
    std::cerr << "file gagal di baca atau korup" << std::endl;
    return 1;
  }

  std::string baca_file;
  while (std::getline(baca, baca_file)) {
    std::cout << baca_file << std::endl;
  }
  //baca.close();

  std::cout << "\nberhasil di baca!!!" << std::endl;
  return 0;
}
