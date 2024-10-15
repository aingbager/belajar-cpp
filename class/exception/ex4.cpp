#include <iostream>
int main(int argc, char *argv[]) {
  // belajar exception

  int a, b, result;

  std::cout << "masukan angka: ";
  std::cin >> a;
  std::cout << "masukan angka penyebut: ";
  std::cin >> b;

  try {
    if (b == 0) {
      throw "penyebut tidak boleh dibagi dengan 0";
    }
    result = a / b;
    std::cout << "hasilnya: " << result << std::endl;
  } catch (const char *message) {
    std::cout << "message: " << message << std::endl;
  }
  return 0;
}
