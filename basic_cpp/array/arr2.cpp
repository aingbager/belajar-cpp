#include <iostream>
int main(int argc, char *argv[]) {
  int ukuran;
  std::cout << "masukan ukuran array: ";
  std::cin >> ukuran;

  int *angka = new int[ukuran];

  for (int i = 0; i < ukuran; i++) {
    angka[i] = i * 2;
  }

  for (int i = 0; i < ukuran; i++) {
    std::cout << angka[i] << std::endl;
  }

  delete[] angka;
  return 0;
}
