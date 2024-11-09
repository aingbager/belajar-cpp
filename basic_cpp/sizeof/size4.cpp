#include <iostream>

int main (int argc, char *argv[]) {
  int angka = 5;
  double desimal = 3.14;
  int arr[5];

  std::cout << "ukuran variable angka: " << sizeof(angka) << std::endl;
  std::cout << "ukuran variable desimal: " << sizeof(desimal) << std::endl;
  std::cout << "ukuran array arr: " << sizeof(arr) << std::endl;
  return 0;
}
