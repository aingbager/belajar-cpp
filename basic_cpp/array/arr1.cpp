#include <iostream>
int main (int argc, char *argv[]) {
  int angka[5];
  //mendeklarasikan array
  angka[0] = 1;
  angka[1] = 2;
  angka[2] = 3;
  angka[3] = 4;
  angka[4] = 5;

  std::cout << angka[2] << std::endl;

  //mendeklarasikan array langsung di isi nilainya
  int nomor[5] = {2,3,4,5,6};

  std::cout << nomor[4] << std::endl;

  return 0;
}
