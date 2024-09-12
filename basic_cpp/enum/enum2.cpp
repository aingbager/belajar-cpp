#include <iostream>

int main(int argc, char *argv[]) {
  enum Angka { satu, dua, tiga };
  Angka angkadua = Angka::dua;
  std::cout << angkadua << std::endl;
  return 0;
}
