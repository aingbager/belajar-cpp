#include <iostream>
int main(int argc, char *argv[]) {
  // belajar lamda
  int a = 5;
  int b = 8;

  auto Angka = [a, b]() { return a * b; };

  std::cout << Angka() << std::endl;

  return 0;
}
