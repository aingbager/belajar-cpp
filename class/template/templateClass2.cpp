#include <iostream>
template <typename T> class Angka {
public:
  T angka1;

  Angka(T a1) : angka1(a1) {}
  T quadrat(T a2) { 
    return a2 * a2; 
  }
};

int main(int argc, char *argv[]) {
  int qr;

  std::cout << "masukan angka quadrat: ";
  std::cin >> qr;

  Angka<int> otong(qr);
  std::cout << "akar quadrat dari: " << otong.angka1;
  std::cout << " adalah: " << otong.quadrat(otong.angka1) << std::endl;

  return 0;
}
